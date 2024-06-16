 #include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
    FILE *fp;
    int c;
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("file open failed!\n");
        exit(1);
    }
    while((c = fgetc(fp)) != EOF){
       printf("%c\n", c);
    }
    fclose(fp);
    return 0;
 }
