#include <stdio.h>
#include <ctype.h>

void monoalphabeticEncrypt(char plainText[], char cipher[]) {
    for (int i = 0; plainText[i] != '\0'; i++) {
        if (isalpha(plainText[i])) {
            char originalChar = tolower(plainText[i]);
            plainText[i] = isupper(plainText[i]) ? toupper(cipher[originalChar - 'a']) : cipher[originalChar - 'a'];
        }
    }
}

int main() {
    char plainText[100];
    char cipher[] = "zyxwvutsrqponmlkjihgfedcba"; 

    printf("Enter the plain text: ");
    fgets(plainText, sizeof(plainText), stdin);

    monoalphabeticEncrypt(plainText, cipher);

    printf("Encrypted text: %s\n", plainText);

    return 0;
}

