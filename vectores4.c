//nombre
//id
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
//isdigit islower isupper 
//libreria ctype.h y string.h
int main(){
    char frase[100];
    int tam,i,ca,ce,ci,co,cu;
    ca=ce=ci=co=cu=0;

    printf("Dame la frase: ");
    gets(frase);    
    tam=strlen(frase);
    for(i=0; i<tam; i++){
        frase[i]=tolower(frase[i]);
    }
    //contar las vocales cuantas a e i o u 
    for(i=0; i<tam; i++){
        switch (frase[i])
        {
        case 'a':ca++;break;
        case 'e':ce++;break;
        case 'i':ci++;break;
        case 'o':co++;break;
        case 'u':cu++;break;
        default:
            break;
        }
    }

    printf("\n Las vocales totales son %d",ca+ce+ci+co+cu);
    printf("\n El total de a: %d",ca);
    printf("\n El total de e: %d",ce);
    printf("\n El total de i: %d",ci);
    printf("\n El total de o: %d",co);
    printf("\n El total de u: %d",cu);

    printf("\n");
    system("pause");
    return 0;
}