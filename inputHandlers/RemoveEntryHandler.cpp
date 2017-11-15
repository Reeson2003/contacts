//
// Created by Тоня on 14.11.2017.
//

#include "RemoveEntryHandler.h"
#include "MainMenuHandler.h"
#include <iostream>

using namespace std;

InputHandler *RemoveEntryHandler::execute() {
    system("cls");
    cout << "I'm RemoveEntryHandler" << endl;
    return new MainMenuHandler();
}
