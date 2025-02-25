#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch); // Convert to lowercase for easier vowel check
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }

    return 0;
}