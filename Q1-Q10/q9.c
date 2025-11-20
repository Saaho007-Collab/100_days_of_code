# include <stdio.h>
int main(){
int P,R,T;
float SI,CI;
printf("Enter Principal amount : ");
scanf("%d",&P);
printf("Enter Rate : ");
scanf("%d",&R);
printf("Enter Time: ");
scanf("%d",&T);
SI= (P*R*T)/100;
CI= P*(1+R/100)^T-P;
printf("Simple intrest: %f ",SI);
printf("Compound intrest: %f ",CI);
return 0;

}