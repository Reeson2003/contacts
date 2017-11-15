//
// Created by Тоня on 06.11.2017.
//

#include "Program.h"

void Program::setInputHandler(InputHandler* inputHandler) {
    delete (inputHandler);
    this->inputHandler = inputHandler;
}

void Program::execute() {
    InputHandler* result = inputHandler->execute();
    delete inputHandler;
    inputHandler = result;
}

Program::Program() {
    inputHandler = new StartProgramHandler();
}

Program::~Program() {
delete (inputHandler);
}
