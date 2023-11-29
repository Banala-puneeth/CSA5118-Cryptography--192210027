#include <stdio.h>
#include <string.h>

int en[100][100], m[100][100], msg[100];
char ms[100];

void getkeymatrix() {
    printf("Enter message: ");
    scanf("%s", ms);

    for (int i = 0; i < strlen(ms); i++) {
        msg[i] = ms[i] - 65;
    }

    printf("Enter key matrix:\n");
    for (int i = 0; i < strlen(ms); i++) {
        for (int j = 0; j < strlen(ms); j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void encryption() {
    int i, j, k, n, o;
    
    for (i = 0; i < strlen(ms); i++) {
        for (j = 0; j < strlen(ms); j++) {
            en[i][j] = 0; 
            for (k = 0; k < strlen(ms); k++) {
                en[i][j] += m[i][k] * msg[k];
            }
        }
    }

    printf("Encrypted message: ");
    for (i = 0; i < strlen(ms); i++) {
        printf("%c ", (en[i][0] % 26) + 65);
    }
    printf("\n");
}

int main() {
    getkeymatrix();
    encryption();

    return 0;
}

