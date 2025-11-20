# include <stdio.h>
int main(){
int a;
printf("Enter an intger: ");
scanf("%d", &a);
if(a%2 == 0){
printf("It is even\n.");
}else{
printf("It is odd\n.");
}
return 0;
}