/*Q. WAP TO PRINT THE VALUE OF A VARIABLE BY USING "POINTER TO POINTER " TYPE OF VARIABLE*/

#include <stdio.h>

int main()
{
    int a = 45;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    printf("the value is:\n");
    printf("%d", **ptr2);
    return 0;
}
