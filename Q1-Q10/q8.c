# include <stdio.h>
int main(){
    int a,sum;
    printf("Enter the no uptill which you require the sum: ");
    scanf("%d",&a);
    sum=a*(a+1)/2;
    printf("Sum : %d \n",sum);
    return 0;
}