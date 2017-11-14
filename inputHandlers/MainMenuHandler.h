//
// Created by Тоня on 14.11.2017.
//

#ifndef CONTACTS_MAINMENUHANDLER_H
#define CONTACTS_MAINMENUHANDLER_H


#include "../InputHandler.h"

class MainMenuHandler: public InputHandler {
public:
    InputHandler *execute() override;
};


#endif //CONTACTS_MAINMENUHANDLER_H
