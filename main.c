#include <stdio.h>

int main(void) {
    printf("Hello world\n");

    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %d and %d\n", a, b);
    
    return 0;
}