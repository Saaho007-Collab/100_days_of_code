# include <stdio.h>
int main(){
    int a,b,c;
    printf("Give three sides of triangle : ");
    scanf("%d" "%d" "%d" , &a,&b,&c);
    if (a==b&&b==c){
        printf("It is equilateral triangle.\n");
    }else if (a==b||b==c){
        printf("It is a isocles triangle.\n");
    }else{
        printf("It is scalene triangle.\n");
    }
    return 0;
}