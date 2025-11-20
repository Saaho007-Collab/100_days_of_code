# include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Before swappinf: a=%d,b=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After shuffling: a = %d , b = %d \n",a,b);
    return 0 ;
    }