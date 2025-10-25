#include <stdio.h>
#define PI 3.14

int main() {
    float radius;
    
    // Input radius
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    // Calculate area and circumference
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;
    
    // Display results (rounded to 2 decimal places)
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}
