# include <stdio.h>
int main(){
    int a;
    printf("Enter the no to check: ");
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }else if(a<0){
        printf("negative"); 
    }else
        printf("Zero");
    return 0;
}