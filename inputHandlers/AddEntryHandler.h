//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_ADDENTRYHANDLER_H
#define CONTACTS_ADDENTRYHANDLER_H


#include "../InputHandler.h"

class AddEntryHandler: public InputHandler {
public:
    InputHandler *execute() override;
};


#endif //CONTACTS_ADDENTRYHANDLER_H
