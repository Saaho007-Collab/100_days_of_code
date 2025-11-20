# include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three no: ");
    scanf("%d" "%d" "%d", &a,&b,&c);
    if(a<b && c<b){
        printf("greatest: %d ",b);
    }else if(b<c && a<c){
        printf("greatest: %d ",c);
    }else{
        printf("greatest: %d ",a);
    }
return 0;
}