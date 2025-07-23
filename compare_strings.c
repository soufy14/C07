#include <stdio.h>
#include <string.h>
int main() {
   
    char tab1[100], tab2[100];

    scanf("%s", tab1);
    scanf("%s", tab2);
if (strcmp(tab1, tab2) == 0){
   printf("Les chaînes sont identiques.\n");
}else{
   printf("Les chaînes sont differents.\n");
}

    return 0;
}
