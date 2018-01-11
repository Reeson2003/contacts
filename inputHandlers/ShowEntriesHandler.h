//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_SHOWENTRIESHANDLER_H
#define CONTACTS_SHOWENTRIESHANDLER_H


#include "../InputHandler.h"
#include "../Entry.h"

class ShowEntriesHandler: public InputHandler {
private:
    vector<Entry> entries;
public:
    ShowEntriesHandler(const vector<Entry> &entries);

public:
    InputHandler *execute() override;
};


#endif //CONTACTS_SHOWENTRIESHANDLER_H
