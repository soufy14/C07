#include <stdio.h>

int main() {

    char tab1[100], tab2[100];
    int l2 = 0, l1 = 0;
scanf("%s", tab1);
scanf("%s", tab2);
while (tab1[l1] != '\0')
{
    l1++;
}
while (tab2[l2] != '\0')
{
    l2++;
}
    for (int i = 0; i <= l2; i++){
        tab1[l1 + i] = tab2[i];
    }

    printf("Chaîne concaténée : %s\n", tab1);
    return 0;
}