 #include <stdio.h>
 #include <string.h>
 int inputStr(char *buff, int size);
 int main(void)
 {
    char buffer[10];
    inputStr(buffer, 10);
    printf(" \"%s\"\n", buffer);
    inputStr(buffer, 10);
    printf(" \"%s\"\n", buffer);
    
    return 0;
 }
 
 int inputStr(char *buff, int size)
 {
    int len; 
    printf("(0-%d characters) => ", size - 1);
    fgets(buff, size, stdin);
    
    len = strlen(buff);
    if (buff[len - 1] == '\n') {
        buff[len - 1] = '\0';
    } else {
        while (getchar() != '\n') {
        }
    }
    return 0;
 }

