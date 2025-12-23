#include <stdio.h>
#include "cap4.h"

int main()
{
    printf("Exercícios do capitulo 4 \n");
    printf("Ultima incidencia de char na string s -> Insira a string:" );
    char buffer[1000], busca = 'A';
    scanf("%s", buffer);
    printf("\nAgora digite o char -> ");
    scanf(" %c", &busca);
    printf("Ultima incidencia de %c, foi em %i\n", busca, strindex(buffer,busca));

}