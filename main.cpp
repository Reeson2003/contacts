#include <iostream>
#include "Entry.h"
#include "Properties.h"
#include "Configuration.h"
#include "Program.h"
#include "Catalog.h"

using namespace std;Catalog& catalog = Catalog::getInstance();

int main() {
    //development configuration
    Configuration configuration = Configuration::getInstance("C:/cpp_workspace/contacts/configuration.properties");

    vector<string> fields = configuration.resolveFields();
    string file = configuration.get("data.file");
    Catalog::getInstance().load(file);

    Program program;
    for (;;) {
        if (!program.execute())
            break;
    }

    Catalog::getInstance().save(file);

    return 0;
}