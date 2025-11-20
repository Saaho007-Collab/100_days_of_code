# include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z'){
        printf("The character is an Uppercase Alphabet.\n");
    }else if(ch>='a' && ch<='z'){
        printf("The character is a lowercase Alphabet.\n");
    }else if(ch>='0' && ch<='9'){
        printf("The character is a digit.\n");
    }else {
        printf("It is a special charater.\n");
    }
    return 0;
}