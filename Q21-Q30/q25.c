# include <stdio.h>
int main(){
    int a,b,choice,result;
    printf("Choose 1,2,3,4,5 for (+,-,*,/,remainder): \n");
    scanf("%d",&choice);
    printf("Enter two nos. ");
    scanf("%d" "%d" , &a,&b);
    switch(choice){
        case 1:
        result=a+b;
        printf("Sum: %d\n",result);
        break;
        case 2:
        result=a-b;
        printf("Difference: %d\n",result);
        break;
        case 3:
        result=a*b;
        printf("multiplication: %d\n",result);
        break;
        case 4:
        if (b==0){
        printf("Error: Division by zero is not allowed.\n");
        }else {
        result = a/b;
         printf("Quotient: %d\n", result);
        }
        break;
        case 5:
        if (b==0) {
        printf("Error: Modulus by zero is not allowed.\n");
        }else{
        result=a%b;
        printf("Remainder: %d\n", result);
        }
        break;
        default:
        printf("Input is invalid.\n");
    }
    return 0;
}