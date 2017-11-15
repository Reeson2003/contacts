//
// Created by Тоня on 15.11.2017.
//

#ifndef CONTACTS_ENTRYHANDLER_H
#define CONTACTS_ENTRYHANDLER_H


#include "../InputHandler.h"
#include "../Entry.h"

class EntryHandler: public InputHandler {
    int entryNumber;
public:
    EntryHandler(int entryNumber);

    InputHandler *execute() override;
};


#endif //CONTACTS_ENTRYHANDLER_H
