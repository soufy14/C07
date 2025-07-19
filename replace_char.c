#include <stdio.h>
//#include <string.h>

int main() {

    char tab[100];
    char a , b ;
    //fgets(tab, sizeof(tab),stdin);

    scanf("%s %c %c", tab, &a, &b);
    
    for (int i = 0; tab[i] != '\0'; i++){
        if (tab[i] == a){
            tab[i] = b;
        }
    }

    printf("%s\n", tab);
    return 0;
}
