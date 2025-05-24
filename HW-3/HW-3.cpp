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
void task2()
{
    system("chcp 1251>nul");

    std::string a;
    std::cin >> a;

    if (a == "понедельник")
        std::cout << "09:00 - 14:00";
    else if (a == "вторник")
        std::cout << "14:00 - 19:00";
    else if (a == "среда")
        std::cout << "09:00 - 14:00";
    else if (a == "четверг")
        std::cout << "14:00 - 19:00";
    else if (a == "пятница")
        std::cout << "09:00 - 14:00";
    else if (a == "суббота")
        std::cout << "Выходной";
    else if (a == "воскресенье")
        std::cout << "Выходной";
    else
        std::cout << "Некорректный день недели";
}

int main()
{
    task1();
    task2();
}
