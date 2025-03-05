#include <stdio.h>
int main(void)
{
    int idade,acima_50=0, acima_oitenta=0,x=0;
    float altura, peso,maior_peso=0, media;
    while (idade != 0)
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        if (idade==0){
            break;
        }
        printf("Digite a sua altura: ");
        scanf("%f", &altura);
        printf("Digite o seu peso: ");
        scanf("%f", &peso);

        if(idade>50){
            acima_50++;
        }
        if(peso>=80){
            acima_oitenta= peso + acima_oitenta;
            x++;
        }
        if((altura>165) && (idade<30)){
            if (peso>maior_peso){
                maior_peso= peso;
            }
        }
    }
    media= acima_oitenta/x;
    printf("A quantidade de pessoas acima de 50 anos e de= %d", acima_50);
    printf("\nA media de pessoas com mais de 80kg e de= %f",media);
    printf("\nO maior peso e de= %f", maior_peso);
}
