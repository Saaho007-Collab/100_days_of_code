#include <stdio.h>

int main() {
    float CP,SP,A,P;
    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    printf("Enter Selling Price: ");
    scanf("%f", &SP);
    if (SP>CP) {
        A=SP-CP;
        P= (A/CP)*100;
        printf("Profit of %f%%\n",P);
    }
    else if (CP>SP) {
        A=CP-SP;
        P= (A/CP)*100;
        printf("Loss of %f \n",P);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
