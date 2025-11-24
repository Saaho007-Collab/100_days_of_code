#include <stdio.h>
int main() {
    FILE *src;
    FILE *dest;
    char file1[100], file2[100];
    int c;
    printf("Enter file1 name: ");
    scanf("%s", file1);

    printf("Enter file2 name: ");
    scanf("%s", file2);
    src = fopen(file1, "r");
    if (src == NULL) {
        printf("Cannot open file1\n");
        return 1;
    }
    dest = fopen(file2, "w");
    if (dest == NULL) {
        printf("Cannot open file2\n");
        fclose(src);
        return 1;
    }
    c = fgetc(src);
    while(c != EOF) {
        fputc(c, dest);
    }
    fclose(src);
    fclose(dest);
printf("File copied successfully!\n");

    return 0;
}