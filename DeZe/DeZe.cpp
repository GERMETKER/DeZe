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
    /*
    //задание 2
    int x, y, step;
    std::cout << "Введите x\n";
    std::cin >> x;
    std::cout << "Введите y\n";
    std::cin >> y;
    step = x;
    if (y > 1)
    {
        for (int i = 1; i < y; i++)
        {
            step = step * x;
            
        }
    }
    std::cout << step;
    */
        
    //задание 3
    /*
    float sr_arf = 0;
    int kolv = 0;
    float sum = 0;
    for (int i = 1; i < 1001; i++)
    {
        kolv++;
        sum = sum + i;
    }
    sr_arf = sum / kolv;
    std::cout << sr_arf << "\n";
    */
        
    /*
    //задание 4
    int a = 0;
    int sum = 0;
    std::cout << "Введите число(1 <= число <= 20)\n";
    std::cin >> a;
    if (1 <= a <= 20)
    {
        for (int i = a; i <= 20; i++)
        {
            sum = sum + i;
        }
        std::cout << sum << "\n";
    }
    */
    
    /*
    //задание5
    int k;
    std::cout << "Введите число\n";
    std::cin >> k;
    for (int i = 1; i <= 10; i++)
    {
        std::cout << k << " * " << i << " = " << k * i << "\n";
    }
    */
    return 0;
}
}

