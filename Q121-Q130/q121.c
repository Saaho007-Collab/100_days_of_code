#include <stdio.h>
int main(){
char name[100];
int age;
FILE *p;
p=fopen("info.txt", "w");
printf("Enter your name: ");
fgets(name, sizeof(name),stdin);
printf("Enter your age: ");
scanf("%d", &age);

fprintf(p,"%s",name);
fprintf(p,"%d",age);

fclose(p);
return 0;

}