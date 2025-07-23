#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char tab[100];
    int count = 0, i = 0;  // initialisation de i
     int in_word = 0;
    fgets(tab, sizeof(tab), stdin);  // lire une phrase avec espaces
    

    while (tab[i] != '\0') {
        if (isspace(tab[i]) || (ispunct(tab[i]) && tab[i] != '\'')) {
    in_word = 0;

        } else if (!in_word) {
            in_word = 1;  // Début d’un mot
            count++;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", count);

    return 0;
}
