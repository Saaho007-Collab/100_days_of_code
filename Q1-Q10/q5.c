# include <stdio.h>
int main(){
    int F,C;
    printf("Enter the temp value in celsius: ");
    scanf("%d", &C);
    F=(C*9/5)+32;
    printf("Temperature: %d \n",F);
    return 0;
}