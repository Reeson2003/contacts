//
// Created by Тоня on 14.11.2017.
//

#include "UpdateEntryHandler.h"
#include "MainMenuHandler.h"

#include <iostream>

using namespace std;

InputHandler *UpdateEntryHandler::execute() {
    system("cls");
    cout << "I'm UpdateEntryHandler" << endl;
    return new MainMenuHandler();
}
