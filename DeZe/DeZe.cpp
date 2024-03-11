#include <iostream>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    //задание1
    int numb;
    int sum = 0;
    std::cout << "Введите число(до 500)\n";
    std::cin >> numb;
    if (numb < 500)
    {
        for (int i = numb; i <= 500; i++)
        {
            sum = sum + numb;
        }
        std::cout << "Сумма: " << sum+1 << "\n";
    }
    */
    //задание2
    int x, y, step;
    std::cout << "Введите x\n";
    std::cin >> x;
    std::cout << "Введите y\n";
    std::cin >> y;
    step = x^y;
    return 0;
}

