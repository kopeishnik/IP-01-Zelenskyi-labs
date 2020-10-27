#include <iostream>
#include <cmath>

int main()
{
    float m, n; // проголошуємо m і n 
    std::cout << "Enter numbers M and N:\n"; // просимо ввести m і n 
    std::cin >> m >> n; // вводимо m і n 
    if (n == 0)
    {
        std::cout << "N should not equal 0" << std::endl; //виводимо помилку якщо n=0
    }
    else
    {
        int firstfr = int(10 * m / n) % 10; //рахуємо першу цифру дробової чистини
        int lastint = int(m / n) % 10; //рахуємо останню цифру цілої частини
        std::cout <<"The first digit of the fractional part: "<< firstfr << "\n";
        std::cout << "The last digit of the integer part: " << lastint << "\n";
    }
    return 0;
}
