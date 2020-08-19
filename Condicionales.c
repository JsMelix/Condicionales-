#include <stdio.h>
#include <stdlib.h>

int main()
{
int caminoElegido;

    printf("Tienes tres canciones Rock." );
    printf("\nEscribe 1 si quieres Highway To Hell" );
    printf("\nEscribe 2 si quieres Bohemian Rhapsody" );
    printf("\nEscribe 3 si quieres Smells Like Teen Spirit" );
    printf("\n\n");

scanf("%i", &caminoElegido);

switch(caminoElegido)
{
    case 1:
    printf("\nLiving easy, living free...");
    break;

     case 2:
    printf("\nMama, just killed a man...");
    break;

     case 3:
    printf("\nLoad up on guns, bring your friends...");
    break;

 default:
    printf("\nAl Ninguna parece que no elegista el camino Rock...");
    break;
}
}
