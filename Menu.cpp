//
// Created by Тоня on 14.11.2017.
//

#include <iostream>
#include "Menu.h"
#include "Utils.h"

int getNumber(int from, int to);

Menu::Menu(const vector<string> &items) : items(items) {}

int Menu::getChoise() {
    for (int i = 0; i < items.size(); ++i) {
        cout << "[" << i+1 << "] " << items[i] << endl;
    }
    return getNumber(1, items.size()) - 1;
}

int getNumber(int from, int to) {
    int num = Utils::getNumber(from, to);
    return num;
}
