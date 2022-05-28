#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char str[] = "Belajar Pemrograman";
    FILE* fp;

    fp = fopen("file.txt", "w");

    if (fp) {
        fputs(str, fp);
    } else {
        perror("File opening failed");
    }
      
    fclose(fp);

    _getch();
    return 0;
}