#include <iostream>
#include <cmath>

int main() //функція мейн
{
    float x = 3, y = 3, y1, y2; //вводимо початкові значення х та у які не підходять, як захист від некоректного вводу
    std::cin >> x >> y; //вводимо х та у
    if (x > 2 || x < -2 || y > 2 || y < -2) 
    {
        std::cout << "Input out of range!"; //помилка якщо модулі х та у більше 2
    }
    else
    {
        if (x > 0 && y > 0) //1 чверть
        { 
            y1 = -x + 2;
            y2 = sqrt(4-(x*x)); 
        }
        else if (x >= 0 && y <= 0) //4 чверть
        {
            y1 = x - 2;
            y2 = 0;
        }
        else if (x < 0 && y < 0) //3 чверть
        {
            y1 = -sqrt(4 - (x * x));
            y2 = -x - 2;
        }
        else //2 чверть, x <= 0 && y>=0
        {
            y1 = 0;
            y2 = x + 2;
        }
        if (y >= y1 && y <= y2) // чи належить у проміжку для заданого х
        {
            std::cout << "true" << std::endl;
        }
        else
        {
            std::cout << "false" << std::endl;
        }
    }
    return 0;
}
