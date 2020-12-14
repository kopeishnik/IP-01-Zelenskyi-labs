#include <iostream>

using namespace std;

int main() {
	long int SumOfDivisors(long int);
	long int n; //межа вимірювання
	cout << "enter N please:" << endl; //просимо ввести межу вимірювання
	cin >> n; //зчитуємо межу вимірювання
	cout << "results:" << endl; 
	for (long int i = 1; i < n; i++) {
		long int sum = SumOfDivisors(i);
		if (sum == i) {		//перевіряємо число на досконалість
			cout << i << endl; //виводмио число, якщо воно досконале
		}
	}
	return 0;
}

long int SumOfDivisors(long int number) { //функція для знаходження суми дільників числа
	long int s = 0;
	for (long int j = 1; j < number; j++) {
		if (number % j == 0) {
			s = s + j;		//знаходимо суму дільників числа
		}
	}
	return s;
}
