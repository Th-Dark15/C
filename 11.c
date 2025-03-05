#include <stdio.h>
int main(void)
{
    int numero = 0, professor = 0, funcionario = 0, idadep = 0, idadef = 0, mt_dr = 0, media, especilista1 = 0, fundamentalin = 0, idadein = 0, media3;
    char escolaridadep, escolaridadef;

    while (numero != 3)
    {
        printf("Digite um numero: Professor[1] Funcionario[2] Parar[3]: ");
        scanf("%d", &numero);

        if (numero == 1)
        {
            professor++;
            printf("Digite a idade do professor: ");
            scanf("%d", &idadep);
            printf("Digite a escolaridade do professor: (I fundamental incompleto, F  fundamental completo, E  ensino medio, G  graduacao, P Especializacao, M  Mestrado, D  Doutorado): ");
            scanf(" %c", &escolaridadep);
            fflush(stdin);
            if (escolaridadep == 'M' || escolaridadep == 'D')
            {
                mt_dr++;
            }
            if (escolaridadep == 'P')
            {
                especilista1++;
            }
            if (escolaridadep == 'I')
            {
                fundamentalin++;
                idadein += idadep;
            }
        }
        else if (numero == 2)
        {
            funcionario++;
            printf("Digite a idade do funcionario: ");
            scanf("%d", &idadef);
            printf("Digite a escolaridade do professor: (I  fundamental incompleto, F  fundamental completo, E ensino medio, G  graduacao, P  Especializacao, M  Mestrado, D  Doutorado). ");
            scanf(" %c", &escolaridadef);
            fflush(stdin);
            if (escolaridadep == 'P')
            {
                especilista1++;
            }
            if (escolaridadep == 'I')
            {
                fundamentalin++;
                idadein += idadef;
            }
        }
        else if (numero != 3)
        {
            printf("O numero e irregular\n");
        }
    }
    media = (mt_dr * 100) / professor;
    media3 = (idadein / fundamentalin);
    printf("O percentual de professores mestres ou doutores e de %d\n", media);
    printf("O numero de especialistas e de %d\n", especilista1);
    printf("A idade de pessoas com fundamental incompleto e de %d\n", media3);
}