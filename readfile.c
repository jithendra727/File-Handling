 #include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
    FILE *fp;
    char str[200];
    fp = fopen("Text.txt", "r");
    if (fp == NULL) {
        printf("file open failed!\n");
        exit(1);
    }
    while(fgets(str, 200, fp) != NULL){
        printf("%s\n", str);
    }
    fclose(fp);
    return 0;
 }
