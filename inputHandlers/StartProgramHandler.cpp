//
// Created by ���� on 06.11.2017.
//

#include <iostream>
#include "StartProgramHandler.h"
#include "MainMenuHandler.h"
#include "../Menu.h"

using namespace std;

InputHandler* StartInputHandler::execute() {
    cout << "���������������������������������\n"
            "�������������������������������\n"
            "���������������������������������\n"
            "�������������������������������\n"
            "���������������������������������\n"
            "\n"
            "\n"
            "��������������������������������\n"
            "�����������������������������\n"
            "��������������������������������\n"
            "��������������������������������\n"
            "��������������������������������" << endl << endl;
    cout << "***" << Configuration::getInstance().resolveCatalogName() << "***" << endl << endl;
    vector<string> menuItems;
    menuItems.push_back("Continue");
    menuItems.push_back("Exit");
    Menu menu(menuItems);
    int select = menu.getChoise();
    switch (select) {
        case 0: return new MainMenuHandler();
        case 1: exit(EXIT_SUCCESS);
    }
}

StartInputHandler::StartInputHandler() {}
