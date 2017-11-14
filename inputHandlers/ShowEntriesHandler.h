//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_SHOWENTRIESHANDLER_H
#define CONTACTS_SHOWENTRIESHANDLER_H


#include "../InputHandler.h"

class ShowEntriesHandler: public InputHandler {
public:
    InputHandler *execute() override;
};


#endif //CONTACTS_SHOWENTRIESHANDLER_H
