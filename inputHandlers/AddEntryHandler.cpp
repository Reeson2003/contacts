//
// Created by Тоня on 14.11.2017.
//

#include "AddEntryHandler.h"
#include "MainMenuHandler.h"

#include <iostream>

using namespace std;

InputHandler *AddEntryHandler::execute() {
    system("cls");
    cout << "I'm AddEntryHandler" << endl;
    return new MainMenuHandler();
}
