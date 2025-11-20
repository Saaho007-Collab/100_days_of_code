# include <stdio.h>
int main(){
    int a,b;
    printf("Enter the first no.: ");
    scanf("%d", &a);
    printf("Enter the second no.: ");
    scanf("%d", &b);
    printf("Before shuffling: %d %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After shuffling: %d %d ",a,b);
    return 0;
}