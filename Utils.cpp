//
// Created by Тоня on 16.11.2017.
//

#include "Utils.h"

int Utils::getNumber(int from, int to) {
    int result(0);
    std::cout << "ENTER NUMBER: ";
    while (true) {
        while (!(std::cin >> result)) {    //пока ввод неудачный
            std::cin.clear();            //очищаем поток ввода
            //игнорируем следующие (std::numeric_limits<std::streamsize>::max()) символы
            //функция std::numeric_limits<std::streamsize>::max() возвращает целое число, равное размеру символов потока
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "WRONG INPUT. ENTER NUMBER: ";
        }
        if (result < from || result > to) {
            std::cout << "WRONG INPUT. ENTER NUMBER: ";
            continue;
        }
        else
            break;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return result;
}
