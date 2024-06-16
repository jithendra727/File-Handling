 #include <stdio.h>
 int n[4] = {10, 20, 30, 40};
 void reverse(void);
 int main(void)
 {
    int i;
    reverse();
    for (i = 0; i < 4; i++) {
        printf("n[%d] : %d\n", i, n[i]);
    }
    return 0;
}
extern int n[];
void swap(int *a, int *b);
void reverse(void)
{
    swap(&n[0], &n[3]);
    swap(&n[1], &n[2]);
    }
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    }
