#include <iostream>
using namespace std;

int main()
{
    int naturalinput();
    int input();
    int findbig(int, int);
    int squarebig(int, int, int, int);
    void output(int); 
    cout << "Enter N please:" << endl;
    int n = naturalinput(); //вводимо розмір масиву
    cout << "Enter P please:" << endl;
    int p = naturalinput(); //вводимо дільник
    cout << "Enter Q please:" << endl;
    int q = naturalinput(); //вводимо остачу
    int* arr1 = new int[n]; //створюємо динамічний масив
    cout << "Enter array of " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        arr1[i] = input(); //заповнюємо масив
    }
    cout << "\n your array at the begining: \n";
    int big = arr1[0]; //ініціюємо змінну для найбльшого елемента
    for (int i = 0; i < n; i++) {
        output(arr1[i]); //виводимо початковий масив
        big = findbig(arr1[i], big); //шукаємо найбільший елемент масиву
    }
    cout << "\n\n the biggest number in first array is " << big << endl;
    cout << "\n your array at the end: \n";
    for (int i = 0; i < n; i++) {
        arr1[i] = squarebig(arr1[i], big, p, q); //змінюємо потрібні елементи масиву
        output(arr1[i]); //виводимо кінцевий масив
    }
    cout << endl;
    delete[] arr1; //очищаємо пам'ять виділену під масив
    return 0;
}

int naturalinput() { //функція для вводу натуральних чисел
    int a = 0;
    cin >> a;
    while (a < 1) {
        cout << "the number should be natural! \n";
        cin >> a;
    }
    return a;
}

int input() { //функція яка організовує ввід
    int a;
    cin >> a;
    return a;
}

int findbig(int arri, int big) { //функція яка шукає найбільший елемент
    if (arri > big) {
        big = arri;
    }
    return big;
}
int squarebig(int arri, int big, int p, int q) { //функція яка аперетворює arr[i] в квадрат big якщо arri % p == q
    if (abs(arri) % p == q) {
        arri = pow(big, 2);
    }
    return arri;
}

void output(int a) { //функція яка організовує вивід
    cout << a << " ";
}