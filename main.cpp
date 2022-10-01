#include <iostream>
#include "functions.h"
int main() {
    int size = 5;
    std::string *names = new std::string[size];
    names[0] = "jerm";
    names[1] = "slurm";
    names[2] = "churm";
    names[3] = "wurm";
    names[4] = "purm";
    names = addEntry(names, size, "swag");
    names = addEntry(names, size, "shlermy");
    names = addEntry(names, size, "NASA");
    names = deleteEntry(names, size, "jerm");
    names = deleteEntry(names, size, "jerm");
    names = deleteEntry(names, size, "churm");
    names = deleteEntry(names, size, "slurm");
    names = deleteEntry(names, size, "wurm");
    names = deleteEntry(names, size, "wurm");
    names = deleteEntry(names, size, "purm");
    for (int i = 0; i <= size; i++)
    {
        std::cout << names[i];
    }
    return 0;
}
