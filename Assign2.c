#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    
    printf("Enter the coefficient of a: ");
    scanf("%f", &a);
    
   
    printf("Enter the coefficient of b: ");
    scanf("%f", &b);
    
   
    printf("Enter the coefficient c: ");
    scanf("%f", &c);

    
    discriminant = b * b - 4 * a * c;

    // If the discriminant is positive, the roots are real and different
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);  // Calculate the first root
        root2 = (-b - sqrt(discriminant)) / (2 * a);  // Calculate the second root
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    // If the discriminant is zero, the roots are real and equal
    else if (discriminant == 0) {
        root1 = -b / (2 * a);  // Since both roots are the same
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    // If the discriminant is negative, the roots are complex
    else {
        realPart = -b / (2 * a);  // Calculate the real part of the complex root
        imagPart = sqrt(-discriminant) / (2 * a);  // Calculate the imaginary part
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + i%.2f\n", realPart, imagPart);
        printf("Root 2 = %.2f - i%.2f\n", realPart, imagPart);
    }

    return 0;
}
