//
// Created by Arkadiusz Bajura on 20/06/2022.
//

#include "files.h"

void fileOpen(const char *fName)
{
     FILE* f = fopen(fName, "rb");

    if (f == nullptr)
    {
        printf("\n\n Can't open the file");

    }
    else
    {
        printf("\n\n File f opened!");
    }
}
void testFileClose(FILE *fName)
{
    fclose(fName);
}
int negativeFileOpen (FILE *fName)
{
        FILE* w = fopen("negative.bmp", "wb");
    if(w == nullptr)
    {
        printf("\n\n Can't open the file");
        return -1;
    } else
        {
            printf("\n\n File opened");
        }

}
void negativeFileClose (FILE *fName)
{
    fclose(w);
}