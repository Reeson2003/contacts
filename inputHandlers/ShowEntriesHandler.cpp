//
// Created by Тоня on 14.11.2017.
//

#include "ShowEntriesHandler.h"
#include "MainMenuHandler.h"

#include <iostream>

using namespace std;

InputHandler *ShowEntriesHandler::execute() {
    cout << "I'm show entries handler" << endl;
    return new MainMenuHandler();
}
