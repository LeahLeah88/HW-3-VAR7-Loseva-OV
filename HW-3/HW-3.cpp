#include <iostream>
#include <cmath>

void calculate_point(int x, int y)
{
    if (y > abs(x) && sqrt(pow(x, 2) + pow(y, 2)) < 15)
        std::cout << "Да";
    else if (y == abs(x) && sqrt(pow(x, 2) + pow(y, 2)) == 15)
        std::cout << "На границе";
    else
        std::cout << "Нет";
}
void task1()
{
    setlocale(LC_ALL, "Russian");
    int x;
    int y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    calculate_point(x, y);
}

int main()
{
    task1();
}
