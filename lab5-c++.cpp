#include <iostream>

using namespace std;

int main()
{
    long int a, //нижня межа перевірки
             b, //верхня межа перевірки 
             n; //змінна суми дільників
    setlocale(LC_ALL, "rus");
    cout << "Enter values a and b:\n"; //просимо ввести межі вимірювання
    cin >> a >> b; //організовуємо ввід меж вимірювання
    cout << "Результат:\n";
    for (int i = a; i <= b; i++) { //проводимо пошук від а до b
        n = 0;
        for (int j = 1; j < (i-1); j++) {
            if (!(i % j)) n = n + j; //знаходимо суму дільників числа
        }
        if (n == i) cout << i << endl; //перевіряємо число на ідеальність
    }
    return 0;
}
