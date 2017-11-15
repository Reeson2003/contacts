#include <iostream>
#include "Entry.h"
#include "Properties.h"
#include "Configuration.h"
#include "Program.h"
#include "Catalog.h"

using namespace std;

int main() {
    //development configuration
    Configuration configuration = Configuration::getInstance("C:/cpp_workspace/contacts/configuration.properties");

    vector<string> fields = configuration.resolveFields();
    string file = configuration.get("data.file");
    Catalog::getInstance().load(file);

    Program program;
    for (int i = 0; i < 10; ++i) {
        program.execute();
    }

    Catalog::getInstance().save(file);

//    Catalog& catalog = Catalog::getInstance();
//    Entry* entry;
//    for (int i = 0; i < 3; ++i) {
//        entry = new Entry(fields);
//        entry->inputFromConsole();
//        catalog.add(*entry);
//    }

//    catalog.load(file);

//    catalog.save(file);
//    catalog.print();

    return 0;
}