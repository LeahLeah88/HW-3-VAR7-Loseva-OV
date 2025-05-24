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
void task3()
{
    setlocale(LC_ALL, "Russian");

    int x;
    std::cout << "Цена за 1 шт. товара: ";
    std::cin >> x;
    int y;
    y = 10;

    std::cout << "\nРешение задачи методом while" << "\n";

    while (y <= 100)
    {
        std::cout << y << " товаров -\t";
        std::cout << x * y << " рублей";
        y = y + 10;
        std::cout << "\n";
    }

    y = 10;

    std::cout << "\nРешение задачи методом do while" << "\n";

    do
    {
        std::cout << y << " товаров -\t";
        std::cout << x * y << " рублей";
        y = y + 10;
        std::cout << "\n";
    }

    while (y <= 100);

    std::cout << "\nРешение задачи методом for" << "\n";

    for (int y = 10; y <= 100; y = y + 10)
    {
        std::cout << y << " товаров -\t";
        std::cout << x * y << " рублей";
        std::cout << "\n";
    }

}
void task4()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << i << " ";

        }
        std::cout << "\n";

    }
}
void calculate_y(double x)
{
    if ((2 * x - 1) > 0)
        std::cout << "y ( " << x << " ) \t" << x / sqrt(x * 2 - 1) << "\n";
    else
        std::cout << "В некоторой точке Х функция не определена" << "\n";
}
void task5()

{
    setlocale(LC_ALL, "Russian");

    double a;
    std::cout << "a = ";
    std::cin >> a;
    double b;
    std::cout << "b = ";
    std::cin >> b;
    double h;
    std::cout << "h = ";
    std::cin >> h;

    for (double x = a; x <= b; x = x + h)
    {
        calculate_y(x);
    }
}
int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
}
