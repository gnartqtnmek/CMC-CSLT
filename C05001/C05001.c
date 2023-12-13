#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *srcFile, *destFile;
    char srcFilename[] = "DATA.in.txt";
    char destFilename[] = "DATA.out.txt";
    char ch;

    // Mo doc tep nguon
    srcFile = fopen(srcFilename, "r");
    if (srcFile == NULL) {
        perror("Error");
        return 1;
    }

    // Mo tep dich de ghi
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        perror("Error");
        fclose(srcFile);
        return 1;
    }

    // Doc va ghi noi dung
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Dong ca hai tep
    fclose(srcFile);
    fclose(destFile);

//    printf("Sao chep tep thanh cong.\n");
    return 0;
}

