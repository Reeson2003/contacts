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
    vector<string> menuItems1;
    menuItems1.push_back("Update");
    menuItems1.push_back("Delete");
    menuItems1.push_back("Back");
    Menu menu1(menuItems1);
    int select1 = menu1.getChoise();
    switch (select1) {
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
            vector<string> menuItems2;
            menuItems2.push_back("Delete");
            menuItems2.push_back("Cancel");
            Menu menu2(menuItems2);
            int select2 = menu2.getChoise();
            switch (select2) {
                case 0:
                    Catalog::getInstance().remove(entryNumber);
                    return new ShowEntriesHandler();
                case 1:
                    return new EntryHandler(entryNumber);
            }
        }
        case 2:
            return new ShowEntriesHandler();
    }
}

EntryHandler::EntryHandler(int entryNumber) : entryNumber(entryNumber) {}
