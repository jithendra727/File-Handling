#include <stdio.h>
 int main(void)
 {
    int array[10];
    char c;
    int num1 = sizeof(int);   /* Size of the data type*/
    int num2 = sizeof(c);     /* Size of the variable */
    int num3 = sizeof(array); /* Size of the array */
    int array_size = sizeof(array) / sizeof(array[0]);
    printf("%d : %d : %d : %d\n", num1, num2, num3, array_size);    
    return 0;
 }
