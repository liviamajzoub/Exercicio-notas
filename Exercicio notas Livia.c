#include<stdio.h>
int main(){

    float n1, n2, n3, n4,
          media;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1,&n2,&n3,&n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >8)
       printf("Aprovado com distin��o. ");
    if else (media >=6)
       printf("Aprovado direto. ");
    if else (media >=4)
       printf("Vai para final. ");
    else (media <4)
       printf("Reprovado direto. ")
       return 0;
}
