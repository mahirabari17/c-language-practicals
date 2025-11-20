

#include <stdio.h>
#include <math.h>

int validate(float a, float b, float c);
float area(float a, float b, float c);


int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(validate(a, b, c)) {
        printf("Valid Triangle\n");
        printf("Area = %.2f\n", area(a, b, c));
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}





int validate(float a, float b, float c) {
    if(a + b > c && a + c > b && b + c > a)
        return 1;
    else
        return 0;
}


float area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

