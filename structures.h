//
// Created by arek on 21.06.22.
//

#ifndef ZADANIE_5_STRUCTURES_H
#define ZADANIE_5_STRUCTURES_H
extern struct FileHeader {
    short bfType;
    int bfSize;
    short bfReserved1;
    short bfReserved2;
    int bfOffBits;
} File;
extern struct PictureHeader {
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

extern struct KoloryRGB {
    char R;
    char G;
    char B;
} Rgb;
#endif //ZADANIE_5_STRUCTURES_H