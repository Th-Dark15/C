#include <stdio.h>

void total_vendido (int matriz[][10], int meses, int funcionarios){
    int soma=0;
    for(int i=0; i<meses;i++){
        for(int j=0;j<funcionarios;j++){
            soma+= matriz[i][j];
        }
    }
    printf("O valor da soma e de : %d\n",soma);
 
}

void total_mes(int matriz[][10], int funcionarios){
    int mes, soma=0;
    printf("Digite o numero mes que deseja procurar: ");
    scanf("%d",&mes);
        for(int j=0; j<funcionarios;j++)
        soma+= matriz[mes -1 ][j];
    printf("O valor da soma e de : %d\n",soma);

}
void total_fun(int matriz[][10], int meses){
    int funcionario, soma=0;
    printf("Digite o numero do funcionario que deseja procurar: ");
    scanf("%d",&funcionario);
    for(int i= 0 ;i<meses;i++){
        soma+= matriz[i][funcionario-1];
    }
    printf("O valor da soma e de : %d\n",soma);

}

void maior_venda(int matriz[][10], int meses, int funcionarios){
    int soma=0; int maior= 0;
    int cont=0;
    for(int i=0; i<meses;i++){
        soma=0;
        for(int j=0;j<funcionarios;j++){
            soma+= matriz[i][j];
        }
        if (soma>maior){
            maior= soma;
            cont= i+1;
        }
    }
    printf("O mes com maior valor e: %d e o valor da soma e de : %d\n", cont, maior);
 
} 
void fun_ven(int matriz[][10], int meses, int funcionarios){
    int soma=0; int maior= 0;
    int cont=0;
    for(int i=0; i<funcionarios;i++){
        soma=0;
        for(int j=0;j<meses;j++){
            soma+= matriz[j][i];
        }
        if (soma>maior){
            maior= soma;
            cont= i+1;
        }
    }
    printf("O funcionario que mais vendeu foi o numero: %d, com um total de vendas de: %d\n", cont, maior);
 
} 

int main()
{
    int matriz[12][10] = {  
        {5230, 8745, 6340, 7102, 9154, 8032, 6541, 7123, 8954, 6241},  
        {7412, 9051, 6874, 5320, 8023, 9541, 7231, 8134, 6540, 9123},  
        {6354, 8741, 7100, 9532, 8421, 6210, 7532, 8413, 9023, 6314},  
        {8231, 9432, 7213, 8045, 6542, 7623, 9321, 8740, 7321, 8652},  
        {7103, 8021, 9012, 7654, 6341, 8543, 9432, 7920, 6542, 7134},  
        {6123, 8742, 9653, 7234, 8102, 6541, 8432, 9531, 7210, 8903},  
        {9531, 6423, 8134, 7231, 9320, 8412, 7543, 9023, 7312, 8641},  
        {7042, 8513, 9620, 7341, 9021, 8324, 7310, 8745, 9213, 6540},  
        {8321, 7540, 9321, 8012, 7432, 6541, 8230, 7654, 9134, 8023},  
        {9234, 8342, 7543, 7012, 8024, 9431, 6543, 7321, 8654, 9213},  
        {8312, 9023, 7214, 6540, 9132, 7543, 8640, 8231, 7023, 9324},  
        {9541, 7230, 8413, 9320, 8023, 8132, 9231, 6541, 7324, 8642}  
    };
    int meses = 12;
    int funcionarios = 10;
    int opcao=0;
    do{
		printf("Selecione a opcao: \n\n");
		printf("[1] - Ver o total vendido no ano: \n");
		printf("[2] - Total vendido no mes: \n");
		printf("[3] - Total vendido por funcionario: \n");
		printf("[4] - Mes com maior venda: \n");
        printf("[5] - Funcionario que mais vendeu: \n");
		printf("[-1] - Sair. \n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			total_vendido(matriz, meses, funcionarios);
			break;
        case 2:
			total_mes(matriz, funcionarios);
			break;
        case 3:
            total_fun(matriz, meses);
            break;
        case 4:
            maior_venda(matriz, meses, funcionarios);
            break;
        case 5:
            fun_ven(matriz, meses, funcionarios);
            break;
		case -1:
			break;
		default:
			printf("Opcao invalida.");
		}

	}while(opcao != -1);
}
