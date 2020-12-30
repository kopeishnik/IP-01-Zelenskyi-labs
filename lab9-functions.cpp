#include "lab9-header.h"

string input_string() {
	string s;
	getline(cin, s, '\n');
	return s;
}

string input_string(string request) {
	cout << request << endl;
	string s;
	getline(cin, s, '\n');
	return s;
}

int input_int() {
	int n;
	cin >> n;
	return n;
}

int input_int(string request) {
	cout << request << endl;
	int n;
	cin >> n;
	return n;
}

void output(string s) {
	cout << s << " ";
}

void output(int n) {
	cout << n << " ";
}

void output(char c) {
	cout << c << " ";
}

void countf(string s) {
	for (int i = 0; i < s.size(); i++) {
		int count = 0;
		for (int j = 0; j < s.size(); j++) {
			if (s[i]==s[j]) {
				count++;
			}
		}
		bool is_new = true;
		for (int j = 0; j < i; j++) {
			if ((s[i] == s[j]) && (i != 0)) {
				is_new = false;
			}
		}
		if (is_new == true) cout << s[i] << ": " << count << endl;
	}
}