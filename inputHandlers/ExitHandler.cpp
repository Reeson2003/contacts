//
// Created by Тоня on 16.11.2017.
//

#include "ExitHandler.h"
#include "../Menu.h"
#include "MainMenuHandler.h"

#include <iostream>

using namespace std;

InputHandler *ExitHandler::execute() {
    system("cls");
    cout << "EXIT?\n\n";
    vector<string> menuItems;
    menuItems.push_back("YES");
    menuItems.push_back("NO");
    Menu menu(menuItems);
    int select = menu.getChoise();
    if (select == 0)
        return 0;
    else
        return new MainMenuHandler();
}
