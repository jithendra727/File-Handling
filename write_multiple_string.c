#include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
    FILE *fp;
    char *str[3] = {"apple\n", "orange\n", "pineapple"};
    int i;
    fp = fopen("text1.txt", "w");
    if (fp == NULL) {
        printf("file open failed!\n");
        exit(1);
    }
    for (i = 0; i < 3; i++) {
        fputs(str[i], fp);
    }
    fclose(fp);
    return 0;
 }
