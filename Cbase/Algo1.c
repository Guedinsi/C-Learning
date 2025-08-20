#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int TwoIntSum(int a, int b);
void HelloMessage();
float TriangleArea();
float HexagonArea(); 


int main(){
    TwoIntSum(15, 7);
    HelloMessage();
    TriangleArea();
    return 0;
}

int TwoIntSum(int a, int b) {
    int x = a + b;
    printf("%d \n", x);
    return x;
};

void HelloMessage(){
    printf("Welcome to C class\n");
}

float TriangleArea() {
    float base;
    float height;
    printf("Inform the triangle base value: \n");
    scanf("%f", &base);
    printf("Inform the triangle height value: \n");
    scanf("%f", &height);
    float area = (base * height)/2;
    printf("%.2f \n", area);
    return 0;
};


