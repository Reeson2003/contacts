cmake_minimum_required(VERSION 3.8)
project(contacts)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Field.cpp Field.h Entry.cpp Entry.h Properties.cpp Properties.h Catalog.cpp Catalog.h Configuration.cpp Configuration.h Program.cpp Program.h InputHandler.h inputHandlers/StartProgramHandler.cpp inputHandlers/StartProgramHandler.h Menu.cpp Menu.h inputHandlers/MainMenuHandler.cpp inputHandlers/MainMenuHandler.h inputHandlers/ShowEntriesHandler.cpp inputHandlers/ShowEntriesHandler.h inputHandlers/AddEntryHandler.cpp inputHandlers/AddEntryHandler.h inputHandlers/UpdateEntryHandler.cpp inputHandlers/UpdateEntryHandler.h inputHandlers/RemoveEntryHandler.cpp inputHandlers/RemoveEntryHandler.h inputHandlers/EntryHandler.cpp inputHandlers/EntryHandler.h)
add_executable(contacts ${SOURCE_FILES})