#include <stdio.h>

int main()
{
    int b = 2;
    int *ptr_b = &b;//We create a pointer variable, ptr_b, which represents the address of memory chucnk where b is saved, &b

    printf("The value of b is %d.\n", b);
    printf("The pointer of b is %p.\n", &b); //We extract the address of memory chunk where b is saved, &b
    printf("The value of is: %d.\n", *&b); //We extract the value from &b directly
    printf("The pointer of b is %p.\n", ptr_b);
    printf("The pointer of pointer of b is %p.\n", &ptr_b); //We check the address of memory chunk where &b is saved
    printf("The value of pointer of is %d.\n", *ptr_b); //We directly extract the value from ptr_b, which equals the address of &b
    return 0;
}