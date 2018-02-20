#include<stdio.h>

int main(){
    int salir;
    char palabra1[5];
    char palabra2[5];
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("direccion palabra1 = %x",palabra1);
    scanf("Palabra1 = %c", palabra1);
    printf("\n direccion palabra2 = %x",palabra2);
    scanf("Palabra1 = %c", palabra1);
    scanf("%i", salir);
}
   
