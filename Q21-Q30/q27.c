# include <stdio.h>
int main(){
    int a,i,sum=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    for (i=1;i<=2*a;i+=2){
        sum+=i;
    }
    printf("Sum of the first %d odd numbers is: %d\n", a, sum);
    return 0;
}