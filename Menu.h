//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_MENU_H
#define CONTACTS_MENU_H

#include <vector>
#include <string>

using namespace std;

class Menu {
    vector<string> items;
public:
    Menu(const vector<string> &items);

    int getChoise();
};


#endif //CONTACTS_MENU_H
