//
// Created by Arkadiusz Bajura on 20/06/2022.
//

#include "files.h"

void fileOpen(const char *fName)
{
     f = fopen(fName, "rb");

    if (f == nullptr)
    {
        printf("\n\n Can't open the file");

    }
    else
    {
        printf("\n\n File f opened!");
    }
}
void fileClose(FILE *fName)
{
    fclose(fName);
}