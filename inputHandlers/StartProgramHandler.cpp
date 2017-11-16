//
// Created by ’®­ï on 06.11.2017.
//

#include <iostream>
#include "StartProgramHandler.h"
#include "MainMenuHandler.h"
#include "../Menu.h"
#include "ExitHandler.h"

using namespace std;

InputHandler *StartProgramHandler::execute() {
    system("cls");
    cout << "ÛÛÛÛÄÛÄÄÄÛÄÛÛÛÄÛÛÛÄÛÛÛÛÄÛÄÄÄÛÄÛÛÛ\n"
            "ÛÄÄÛÄÛÄÄÄÛÄÛÄÄÄÛÄÄÄÛÄÄÛÄÛÛÄÛÛÄÛ\n"
            "ÛÛÛÛÄÛÄÛÄÛÄÛÛÛÄÛÛÛÄÛÄÄÛÄÛÄÛÄÛÄÛÛÛ\n"
            "ÛÄÄÛÄÛÛÛÛÛÄÛÄÄÄÄÄÛÄÛÄÄÛÄÛÄÄÄÛÄÛ\n"
            "ÛÄÄÛÄÄÛÄÛÄÄÛÛÛÄÛÛÛÄÛÛÛÛÄÛÄÄÄÛÄÛÛÛ\n"
            "\n"
            "\n"
            "ÛÛÛÛÄÛÛÛÛÄÛÛÛÄÛÛÛÛÄÛÄÄÄÛÛÛÛÄÛÛÛÛ\n"
            "ÛÄÄÛÄÛÄÄÛÄÄÛÄÄÛÄÄÛÄÛÄÄÄÛÄÄÛÄÛ\n"
            "ÛÄÄÄÄÛÛÛÛÄÄÛÄÄÛÛÛÛÄÛÄÄÄÛÄÄÛÄÛÄÛÛ\n"
            "ÛÄÄÛÄÛÄÄÛÄÄÛÄÄÛÄÄÛÄÛÄÄÄÛÄÄÛÄÛÄÄÛ\n"
            "ÛÛÛÛÄÛÄÄÛÄÄÛÄÄÛÄÄÛÄÛÛÛÄÛÛÛÛÄÛÛÛÛ" << endl << endl;
    cout << "***" << Configuration::getInstance().resolveCatalogName() << "***" << endl << endl;
    vector<string> menuItems;
    menuItems.push_back("Continue");
    menuItems.push_back("Exit");
    Menu menu(menuItems);
    int select = menu.getChoise();
    switch (select) {
        case 0:
            return new MainMenuHandler();
        case 1:
            return new ExitHandler();
    }
}

StartProgramHandler::StartProgramHandler() {}
