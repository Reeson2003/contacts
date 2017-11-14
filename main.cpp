#include <iostream>
#include "Entry.h"
#include "Properties.h"
#include "Configuration.h"
#include "Program.h"

using namespace std;

int main() {
    Configuration configuration = Configuration("C:/cpp_workspace/contacts/configuration.properties");

    vector<string> fields = configuration.resolveFields();
    string file = configuration.get("data.file");

    Program program;
    for (int i = 0; i < 10; ++i) {
        program.execute();
    }

//    Catalog& catalog = Catalog::getInstance();
//    Entry* entry;
//    for (int i = 0; i < 3; ++i) {
//        entry = new Entry("Book", fields);
//        entry->inputFromConsole();
//        catalog.add(*entry);
//    }

//    catalog.load(file);

//    catalog.save(file);
//    catalog.print();

    return 0;
}