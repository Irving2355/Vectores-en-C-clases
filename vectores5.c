#include <stdio.h>
#include <stdlib.h> 

int main(){
    char texto[100];
    int desp;

    printf("Ingrese frase: ");
    gets(texto);

    printf("Desplazamiento: ");
    scanf("%d", &desp);

    for(int i=0; texto[i] != '\0'; i++){
        char c = texto[i];

        if(c >= 'A' && c<= 'Z'){
            texto[i]=((c-'A'+desp)%26 +26)%26 + 'A';
            // ((72-65)+5)%26= (12+26)%26 = 12+65=77
        }else if(c >= 'a' && c<= 'z'){
            texto[i]=((c-'a'+desp)%26 +26)%26 + 'a';
        }else{
            texto[i]=c;
        }

        // condicion ? si es verdadero haz esto : si es falso esto ;
        //texto[i]=(c >= 'A' && c<= 'Z')? ((c-'A'+desp)%26 +26)%26 + 'A': (c >= 'a' && c<= 'z')? texto[i]=((c-'a'+desp)%26 +26)%26 + 'a':c;
    }

    printf("\nTexto cifrado: %s",texto);


    printf("\n");
    system("pause");
    return 0;
}