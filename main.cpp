#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>
#include "IsKPeriodic.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    bool flag = true;
    while (flag)
    {
        std::string str;
        std::cout << "1 - Проверить строку на кратность числу" << std::endl;
        std::cout << "2 - Выйти из программы" << std::endl;
        std::cin >> str;
        if (str == "1")
        {
            std::cout << "Введите число: ";
            std::cin >> str;
            int num = atoi(&str[0]);
            std::cout << "Введите строку: ";
            std::getline(std::cin, str);//Очистка потока ввода
            std::getline(std::cin, str);
            bool flag = IsKPeriodic(str, num);
            if (flag == true)
            {
                std::cout << "Строка: " << str << std::endl;
                std::cout << "Кратна числу: " << num << std::endl;
            }
            else
            {
                std::cout << "Строка: " << str << std::endl;
                std::cout << "Не кратна числу: " << num << std::endl;
            }
        }
        else if (str == "2")
        {
            flag = false;
        }
    }
    return 0;
}