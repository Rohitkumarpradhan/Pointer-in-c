/* Q. WRITE A PROGRAMME IN C TO INPUT TWO NUMBERS FROM USER AND SWAP THEM USING POINTER AND FUNCTION ALSO FIND THEIR SUM 
NOTE**
+++++ USE POINTER AND FUNCTIONS +++++*/


#include <stdio.h>

// function declaration
void sum(int *a, int *b);

// function prototype
void sum(int *a, int *b)
{
    int sum = *a + *b;
    int c = *a;
    *a = *b;
    *b = c;

    printf(" sum is :%d\n", sum);
    printf("a= %d\n", *a);
    printf("b= %d\n", *b);
};
int main()
{
    int a, b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("before swapping\n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("after swapping\n");
    // function call
    sum(&a, &b);

    return 0;
}