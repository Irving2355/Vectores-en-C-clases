#include <stdio.h>
#include <stdlib.h>
#define TAM 600

int main(){
    int tam1,i;
    char carrera1[30];
    char carrera2[40]="La Banana";

    puts("Dame una carrera: ");
    gets(carrera1);

    printf("\nOpcion 1 para imprimir una cadena:\n");
    printf("\n La carrera que capturaste es %s",carrera1);

    printf("\nOpcion 2 para imprimir una cadena:\n");
    puts("la carrera es: ");
    puts(carrera1);

    printf("\nOpcion 3 para imprimir una cadena:\n");
    tam1=strlen(carrera1);

    for(i=0; i<tam1; i++){
        printf("%c",carrera1[i]);
    } 

    printf("\nOpcion 2 para capturar una cadena:\n");
    char carrera3[30];
    printf("Dame una cadena: ");
    scanf("%s", &carrera3);
    printf("\n la cadena es: %s",carrera3);
    //ASCII

    printf("\n");
    system("pause");
    return 0;
}