#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double y, x = 0.5, sum = 0; //вводимо змінні функції, аргументу, суми в знаменнику
    int n; //вводимо змінну кількості доданків суми в знаменнику
    cout << "enter N please:\n"; //просимо ввести n
    cin >> n; //зчитуємо n
    for (int i = 1; i <= n; i++) { //цикл for для рекурентної формули
        sum = sum + sin(x) / pow(i, 2); //знаходимо суму за рекурентною формулою
    }
    y = 1 / sum; //знаходимо значення функції
    cout << "y = " << y << endl; //виводимо значення функції
    return 0;
}
