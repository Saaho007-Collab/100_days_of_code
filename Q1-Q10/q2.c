# include <stdio.h>
int main(){
    int a,b,sum,difference,product,quotient;
    printf("Enter 1st no. : ");
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    scanf("%d", &b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("sum:%d \n",sum);
    printf("diffference:%d \n",difference);
    printf("product:%d \n",product);
    printf("quotient:%d \n",quotient);
    return 0;
}