#include <stdio.h>

int main() {
    int a = 25;
    int *ptr = &a;
    printf("The value of a = %d\n",*ptr);
    printf("The address of a = %d\n",ptr);
    return 0;
}
