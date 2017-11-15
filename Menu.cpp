//
// Created by Тоня on 14.11.2017.
//

#include <iostream>
#include "Menu.h"

int getNumber();

Menu::Menu(const vector<string> &items) : items(items) {}

int Menu::getChoise() {
    for (int i = 0; i < items.size(); ++i) {
        cout << "[" << i+1 << "] " << items[i] << endl;
    }
    cout << "ENTER NUMBER: ";
    return getNumber() - 1;
}

int getNumber() {
    int num;
    cin >> num;
    return num;
}
