# include <stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter thhe breadth of the rectangle: ");
    scanf("%d", &b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area=%d \n" "Perimeter=%d \n",area,perimeter);
    return 0;
}