#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int randominput(int);
	int randomnaturalinput(int);
	int input();
	int naturalinput();
	bool boolinput();
	int findmin(int, int&, int, int);
	int findmax(int, int&, int, int);
	void output(int);
	srand(time(0));
	cout << "enter n please: \n";
	int n = naturalinput();
	cout << "enter m please: \n";
	int m = naturalinput();
	cout << "do you want random? (1 or 0) \n";
	bool is_r = input();
	int **c = new int* [n];
	int** b = new int* [n];
	int** y = new int* [n];
	int** z = new int* [n];
	for (int i = 0; i < n; i++) {
		c[i] = new int[m];
		b[i] = new int[m];
		y[i] = new int[m];
		z[i] = new int[m];
	}
	int maxrand = 0;
	bool is_pl = 0;
	if (is_r == true) {
		cout << "enter maximum of random please: \n";
		maxrand = naturalinput();
		cout << "do you want only plural numbers? (1 or 0) \n";
		is_pl = boolinput();
		cout << "using magic random... \n";
	}
	int vvod = 0;
	if (is_r==false) cout << "enter 1st matrix please: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (is_r == false) vvod = input();
			if (is_pl == false) vvod = randominput(maxrand);
			else vvod = randomnaturalinput(maxrand);
			c[i][j] = vvod;
			y[i][j] = vvod;
		}
	}
	if (is_r == false) cout << "enter 2nd matrix please: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (is_r == false) vvod = input();
			if (is_pl == false) vvod = randominput(maxrand);
			else vvod = randomnaturalinput(maxrand);
			b[i][j] = vvod;
			z[i][j] = vvod;
		}
	}
	cout << "\n1st matrix (before): \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			output(c[i][j]);
		}
		cout << endl;
	}
	cout << "\n2nd matrix (before): \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			output(b[i][j]);
		}
		cout << endl;
	}
	cout << "\ndoing tasks... \n";
	int min_c = c[0][0],
		min_b = b[0][0],
		max_c = c[0][0],
		max_b = b[0][0], 
		min1i = 0,
		min2i = 0,
		max1i = 0,
		max2i = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			min_c = findmin(min_c, min1i, c[i][j], i);
			min_b = findmin(min_b, min2i, b[i][j], i);
			max_c = findmax(max_c, max1i, c[i][j], i);
			max_b = findmax(max_b, max2i, b[i][j], i);
		}
	}
	int *min1v = new int[m], *min2v = new int[m], *max1v = new int[m], *max2v = new int[m];
	for (int i = 0; i < m; i++) {
		min1v[i] = c[min1i][i];
		min2v[i] = b[min2i][i];
		max1v[i] = c[max1i][i];
		max2v[i] = b[max2i][i];
	}
	for (int i = 0; i < m; i++) {
		y[min1i][i] = max2v[i];
		z[min2i][i] = max1v[i];
		y[max1i][i] = min2v[i];
		z[max2i][i] = min1v[i];
	}
	cout << "\n1st matrix (after): \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			output(y[i][j]);
		}
		cout << endl;
	}
	cout << "\n2nd matrix (after): \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			output(z[i][j]);
		}
		cout << endl;
	}
	cout << "\n1st min: ";
	output(min_c);
	cout << "\n2nd min: ";
	output(min_b);
	cout << "\n1st max: ";
	output(max_c);
	cout << "\n2nd max: ";
	output(max_b);
	return 0;
}

int input() {
	int a;
	cin >> a; 
	return a;
}

bool boolinput() {
	bool a;
	cin >> a;
	return a;
}

int naturalinput() {
	int a; 
	cin >> a;
	if (a == 0) {
		a = 1;
	}
	a = abs(a);
	return a;
}

int findmin(int min, int &min_i, int element, int el_n) {
	if (element < min) {
		min = element;
		min_i = el_n;
	}
	return min;
}

int findmax(int max, int &max_i, int element, int el_n) {
	if (element > max) {
		max = element;
		max_i = el_n;
	}
	return max;
}

int randominput(int r) {
	int a = (rand() % (2*r)) - r;
	return a;
}

int randomnaturalinput(int r) {
	int a = rand() % r;
	return a;
}

void output(int a) {
	cout << a << " ";
}
