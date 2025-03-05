#include <stdio.h>
int main(void)
{
    int nota, notas=0, media, i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &nota);
        notas += nota;
    }
    media = notas / i;
    printf("A media e de %d", media);
}