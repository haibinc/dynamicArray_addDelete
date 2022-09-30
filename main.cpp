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
    deleteEntry(names, size, "churm");
    deleteEntry(names, size, "jerm");
    for (int i = 0; i <= size; i++)
    {
        std::cout << names[i];
    }
    return 0;
}
