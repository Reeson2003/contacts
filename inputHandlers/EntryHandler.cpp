//
// Created by Тоня on 15.11.2017.
//

#include <iostream>
#include "EntryHandler.h"
#include "../Menu.h"
#include "../Catalog.h"
#include "../Configuration.h"
#include "ShowEntriesHandler.h"

InputHandler *EntryHandler::execute() {
    system("cls");
    cout << Catalog::getInstance().getEntries()[entryNumber].format() << endl;
    vector<string> menuItems;
    menuItems.push_back("Update");
    menuItems.push_back("Delete");
    menuItems.push_back("Back");
    Menu menu(menuItems);
    int select = menu.getChoise();
    switch (select) {
        case 0: {
            system("cls");
            cout << Catalog::getInstance().getEntries()[entryNumber].format() << endl;
            Entry entry(Configuration::getInstance().resolveFields());
            entry.inputFromConsole();
            Catalog::getInstance().update(entryNumber, entry);
            return new ShowEntriesHandler();
        }
        case 1: {
            system("cls");
            vector<string> menuItems;
            menuItems.push_back("Delete");
            menuItems.push_back("Cancel");
            Menu menu(menuItems);
            int select = menu.getChoise();
            switch (select) {
                case 0:
                    Catalog::getInstance().remove(entryNumber);
                    return new ShowEntriesHandler();
                case 1:
                    return new EntryHandler(entryNumber);
            }
        }
        case 3:
            return new ShowEntriesHandler();
    }
}

EntryHandler::EntryHandler(int entryNumber) : entryNumber(entryNumber) {}
