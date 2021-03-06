//
// Created by ���� on 14.11.2017.
//

#include "ShowEntriesHandler.h"
#include "../Menu.h"
#include "EntryHandler.h"
#include "MainMenuHandler.h"

using namespace std;

InputHandler *ShowEntriesHandler::execute() {
    system("cls");
    vector<string> menuItems;
//    vector<Entry> entries = Catalog::getInstance().getEntries();
    for (int i = 0; i < entries.size(); ++i) {
        string item = "\n" + entries[i].format();
        menuItems.push_back(item);
    }
    menuItems.push_back("Main menu");
    Menu menu(menuItems);
    int select = menu.getChoise();
    if (select == menuItems.size() - 1)
        return new MainMenuHandler();
    return new EntryHandler(select);
}

ShowEntriesHandler::ShowEntriesHandler(const vector<Entry> &entries) : entries(entries) {}
