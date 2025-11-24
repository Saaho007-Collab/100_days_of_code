#include <stdio.h>
int main(){
int words=0;
int lines=0;
int cha=0;
int inWord=0;
char c;

FILE *p;
fopen("info.txt", "r");
if (p == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


c=fgetc(p);
while(c!= EOF){
        cha++;

    if(c == "\n"){
        lines++;
    }
    if(c != ' ' && c != '\n' && c != '\t') {
            if (inWord == 0) {
                words++;     // new word found
                inWord = 1;
            }
        }
        else {
            inWord = 0;       // ended the word
        }



}
printf("words are %d\n", words);
printf("lines are %d\n", lines);
printf("char are %d\n", cha);
}