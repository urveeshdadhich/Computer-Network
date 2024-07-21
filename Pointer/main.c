#include <stdio.h>

int main() {
    int a = 25;
    int *ptr = &a;
    printf("The value of a = %d\n",a);
    printf("The value of a (using pointer) = %d\n",*ptr);
    printf("The address of a = %x\n",&a);
    printf("The address of a (using pointer) = %x\n",ptr);
    printf("The address of pointer to a = %x\n",&ptr);
    return 0;
}
