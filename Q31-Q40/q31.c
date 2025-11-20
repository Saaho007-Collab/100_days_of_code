#include <stdio.h>

int main() {
    int n, org, rev = 0, rr;
    printf("Enter a number: ");
    scanf("%d", &n);
    org = n;
    while (n > 0) {
        rr = n % 10;
        rev = rev * 10 + rr;
        n = n / 10;
    }
    if (org == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}