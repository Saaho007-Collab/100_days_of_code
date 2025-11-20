# include <stdio.h>
int main(){
    float a,b,c;
    float discriminant;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }
  discriminant = b * b - 4 * a * c;
   if (discriminant > 0) {
        printf("The equation has real and distinct roots.\n");
    } 
    else if (discriminant == 0) {
        printf("The equation has real and equal roots.\n");
    } 
    else {
        printf("The equation has complex (imaginary) roots.\n");
    }

    return 0;
}