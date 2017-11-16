//
// Created by Тоня on 14.11.2017.
//

#include "AddEntryHandler.h"
#include "MainMenuHandler.h"
#include "../Entry.h"
#include "../Configuration.h"
#include "../Catalog.h"
#include "../Menu.h"

#include <iostream>

using namespace std;

InputHandler *AddEntryHandler::execute() {
    system("cls");
    cout << "ADD ITEM\n\n";
    Entry entry(Configuration::getInstance().resolveFields());
    entry.inputFromConsole();
    system("cls");
    cout << "ADD ITEM\n\n";
    cout << entry.format();
    vector<string> menuItems;
    menuItems.push_back("Confirm");
    menuItems.push_back("Cancel");
    Menu menu(menuItems);
    if (menu.getChoise() == 0)
        Catalog::getInstance().add(entry);
    return new MainMenuHandler();
}
