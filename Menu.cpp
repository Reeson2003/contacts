//
// Created by Тоня on 14.11.2017.
//

#include <iostream>
#include "Menu.h"

int getNumber();

Menu::Menu(const vector<string> &items) : items(items) {}

int Menu::getChoise() {
    cout << "ENTER NUMBER" << endl;
    for (int i = 0; i < items.size(); ++i) {
        cout << "[" << i+1 << "] " << items[i] << endl;
    }
    return getNumber() - 1;
}

int getNumber() {
    int num;
    cin >> num;
    return num;
}
