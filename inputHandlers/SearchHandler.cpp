//
// Created by Тоня on 21.12.2017.
//

#include <cstdlib>
#include <iostream>
#include "SearchHandler.h"
#include "../Menu.h"
#include "../Configuration.h"
#include "../Catalog.h"
#include "ShowEntriesHandler.h"

using namespace std;

InputHandler *SearchHandler::execute() {
    system("cls");
    vector<string> menuItems = Configuration::getInstance().resolveFields();
    cout << "Find by:" << endl;
    Menu menu(menuItems);
    int select = menu.getChoise();
    string choise = menuItems[select];
    string input;
    system("cls");
    cout << "Enter search string" << endl;
    cin >> input;
    vector<Entry> entries = Catalog::getInstance().getEntries();
    vector<Entry> found;
    for (int i = 0; i < entries.size(); i++) {
        vector<Field> fields = entries[i].getFields();
        for (int j = 0; j < fields.size(); ++j) {
            if(fields[j].getKey() == choise)
                if(fields[j].getValue() == input)
                    found.push_back(entries[i]);
        }
    }

    return new ShowEntriesHandler(found);
}


