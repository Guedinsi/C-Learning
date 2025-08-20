#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int TwoIntSum() {
    int a;
    int b;
    printf("Give the value of int a: \n");
    scanf("%d", &a);
    printf("Give the value of int b: \n");
    scanf("%d", &b);
    int c = a + b;
    printf("The sum is: %d\n", c);
    return 0;
};

int TwoIntProduct() {
    int a;
    int b;
    printf("Give the value of int a: \n");
    scanf("%d", &a);
    printf("Give the value of int b: \n");
    scanf("%d", &b);
    int c = a * b;
    printf("The product is: %d\n", c);
    return 0;
};



int main() {
    TwoIntSum();
    TwoIntProduct();
}