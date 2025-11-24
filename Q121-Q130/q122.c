#include <stdio.h>
int main(){
char line[100];
FILE *p;
p=fopen("info.txt", "r");
fgets(line, sizeof(line),p);
printf("%s",line);
fclose(p);
return 0;

}