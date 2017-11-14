//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_REMOVEENTRYHANDLER_H
#define CONTACTS_REMOVEENTRYHANDLER_H


#include "../InputHandler.h"

class RemoveEntryHandler: public InputHandler {
public:
    InputHandler *execute() override;
};


#endif //CONTACTS_REMOVEENTRYHANDLER_H
