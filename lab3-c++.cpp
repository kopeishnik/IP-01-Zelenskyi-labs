﻿#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, e, s = 1, spr = 1, ls; //об'явлюємо змінні (аргумент, точність, суму, зміну суми та минуле значення) типу float та надаємо значення початковим змінним
    int m, n = 0; //об'явлюємо змінні (степінь та кількість ітерацій) типу int
    cout << "input: x, m, e, please\n"; //
    cin >> x >> m >> e; //зчитуємо аргумент, степінь і точність
    do {
        ls = s; //надаємо минуле значення змінної суми
        spr = spr * (m - n) * x / (n + 1); //рахуємо зміну суми
        s = s + spr; //рахуєо нову суму
        n++; 
    } while (abs(s - ls) > e); //перевіряємо чи досягнута задана точність
    cout << "s = " << s; //виводимо результат
    return 0;
}
