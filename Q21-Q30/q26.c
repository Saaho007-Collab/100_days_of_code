# include <stdio.h>
int main(){
    int n,i;
    printf("NO. upto which you want to print.: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf(" %d ",i);
    }
    return 0;
}