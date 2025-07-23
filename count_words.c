#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char tab[100];
    int count = 0, i = 0;  // initialisation de i

    fgets(tab, sizeof(tab), stdin);  // lire une phrase avec espaces
    
    int in_word = 0;

    while (tab[i] != '\0') {
        if (isspace(tab[i]) || ispunct(tab[i])) {
            in_word = 0;  // Fin d’un mot
        } else if (!in_word) {
            in_word = 1;  // Début d’un mot
            count++;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", count);

    return 0;
}
