#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define TAM 100

int main(){
    system("color F2");
    int resp[TAM];
    int i,aux,j;
    int contador[11]={0};
    srand(time(0));
    //printf("%f",rand());
    for(i=0; i<TAM; i++){
        resp[i]=0+rand()%(10-0+1);
    }
    for(i=0; i<TAM; i++){
        aux=resp[i];
        contador[aux]++;
    }

    for(j=0; j<11; j++){
        printf("\n Calificacion con %d: %d: ",j,contador[j]);
        for(i=1; i<=contador[j];i++){
            printf("*");
        }
    }

    printf("\n \n metodo de la burbuja");
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(resp[j]>resp[j+1]){
                aux=resp[j];
                resp[j]=resp[j+1];
                resp[j+1]=aux;
            }
        }
    }

    for(i=0; i<TAM; i++){
        printf("%d  ",resp[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}