//
// Created by Arkadiusz Bajura on 20/06/2022.
//

#ifndef ZADANIE_5_PRINTINFO_H
#define ZADANIE_5_PRINTINFO_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct FileHeader {
    short bfType;
    int bfSize;
    short bfReserved1;
    short bfReserved2;
    int bfOffBits;
} File;

struct PictureHeader {
    int biSize;
    int biWidth;
    int biHeight;
    short biPlanes;
    short biBitCount;
    int biCompression;
    int biSizeImage;
    int biXPelsPerMeter;
    int biYPelsPerMeter;
    int biClrUsed;
    int biClrImportant;
} Picture;

struct KoloryRGB {
    char R;
    char G;
    char B;
} Rgb;
void printInfo();

#endif //ZADANIE_5_PRINTINFO_H
