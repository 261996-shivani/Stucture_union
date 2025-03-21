#include <stdio.h>

union Number {
    int x;
    float y;
    char z;
};

int main()
{
    union Number num;

    num.x = 10;
    printf("Value of x: %d\n", num.x);

    num.y = 3.14;
    printf("Value of y: %.2f\n", num.y);

    num.z = 'A';
    printf("Value of z: %c\n", num.z);

    return 0;
}