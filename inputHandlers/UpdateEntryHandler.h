//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_UPDATEENTRYHANDLER_H
#define CONTACTS_UPDATEENTRYHANDLER_H


#include "../InputHandler.h"

class UpdateEntryHandler: public InputHandler {
public:
    InputHandler *execute() override;
};


#endif //CONTACTS_UPDATEENTRYHANDLER_H
