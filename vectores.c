#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

int main()
{
    int v1[TAM],v2[TAM],v3[TAM],i;
    srand(time(NULL));

    printf("llenado de vec1 y vec2");
    for(i=0; i<TAM;i++){
        v1[i]=10+rand()%(100-10+1);
    }

    for(i=0; i<TAM;i++){
        v2[i]=10+rand()%(100-10+1);
    }

    for(i=0; i<TAM;i++){
        v3[i]=v1[i]+v2[i];
    }

    printf("\n Imprimiendo vec1: \n");
    for(i=0;i<TAM;i++){
        printf("%d  ",v1[i]);
    }

    printf("\n Imprimiendo vec2: \n");
    for(i=0;i<TAM;i++){
        printf("%d  ",v2[i]);
    }

    printf("\n Imprimiendo vec3: \n");
    for(i=0;i<TAM;i++){
        printf("%d  ",v3[i]);
    }


    printf("\n");
    system("pause");
    return 0;
}//fin del main()