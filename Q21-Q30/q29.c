# include <stdio.h>
int main(){
    int a,i;
    int factorial=1;
    printf("Enter the no.: ");
    scanf("%d",&a);
    if(a<0){
        printf("Factorial is not defined for negative no.");
    }else{
        for(i=1;i<=a;i++){
            factorial *=i;
        }
        printf("Factorial of %d is: %d\n", a, factorial);
    }
    return 0;
}