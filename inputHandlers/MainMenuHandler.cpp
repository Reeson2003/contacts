//
// Created by ���� on 14.11.2017.
//

#include "MainMenuHandler.h"
#include "../Menu.h"
#include "ShowEntriesHandler.h"
#include "AddEntryHandler.h"
#include "ExitHandler.h"

using namespace std;

InputHandler *MainMenuHandler::execute() {
    system("cls");
    vector<string> menuItems;
    menuItems.push_back("Show entries");
    menuItems.push_back("Add entry");
    menuItems.push_back("Exit");
    Menu menu(menuItems);
    int select = menu.getChoise();
    switch (select) {
        case 0:
            return new ShowEntriesHandler();
        case 1:
            return new AddEntryHandler();
        case 2:
            return new ExitHandler();
    }
}
