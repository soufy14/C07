#include <stdio.h>
#include <string.h>

int main() {

    char tab[100];
    int i, l, palindrome = 1;
    scanf("%s", tab);
    l = strlen(tab);
    for ( i = 0; i < l / 2; i++ ) {
        if (tab[i] != tab[l - 1 - i]){
            palindrome = 0;
            break;
        }
    }
    if (palindrome) {
        printf("La chaîne est un palindrome.\n");
    } else {
        printf("La chaîne n'est pas un palindrome.\n");
    }
    return 0;
}