# include <stdio.h>
int main(){
int a,i;
int product=1;
int even=0;
printf("Enter the value of a: ");
scanf("%d",&a);
for (i=2;i<=a;i+=2){
product *=i;
even=1;
}
if (even)
printf("Product of even numbers from 1 to %d is: %d\n", a, product);
else
printf("There are no even numbers between 1 and %d.\n", a);
return 0;
}