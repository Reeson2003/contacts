//
// Created by ���� on 06.11.2017.
//

#include <iostream>
#include "StartProgramHandler.h"
#include "MainMenuHandler.h"

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
            "��������������������������������" << endl;
//    vector<string> items;
//    items.push_back("Mama");
//    items.push_back("Papa");
//    items.push_back("Son");
//    Menu menu(items);
//
//    cout << menu.getChoise() << endl;

    return new MainMenuHandler;
}

StartInputHandler::StartInputHandler() {}
