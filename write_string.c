 #include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
    FILE *fp;
    char *p, *str = "ABCDEFGHIJKLMN\nOPQRSTUVWXYZ";
    fp = fopen("Text.txt", "w");
    if (fp == NULL) {
        printf("file open failed!\n");
        exit(1);
    }
    for (p = str; *p; p++) {
        fputc(*p, fp);
    }
    fclose(fp);
    return 0;
 }
