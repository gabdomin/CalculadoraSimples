// IMMPORTAÇÃO DAS BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// CÓDIGO PRINCIPAL
int main(void)
{
    // COMANDO PARA ACENTUAÇÃO E PONTUAÇÃO
    setlocale(LC_ALL, "Portuguese");

    // DECLARAÇÃO VARIÁVEIS
    float num1, num2;
    char operacao;

    // MENU DA CALCULADORA USANDO DO...WHILE PARA O LOOP
    do{
        system("cls || clear");

        printf("\t===============================================\n");
        printf("\t===== CALCULADORA SIMPLES DE DOIS NÚMEROS =====\n");
        printf("\t===============================================\n\n");

        printf("\tOPERAÇÕES:\n");
        printf("\tSOMA = '+'\n");
        printf("\tSUBTRAÇÃO = '-'\n");
        printf("\tMULTIPLICAÇÃO = '*'\n");
        printf("\tDIVISÃO = '/'\n");

        printf("\n\t   DIGITE A EXPRESSÃO:\n");
        printf("\t(EX.: 1 + 1 , 2.1 * 3.1)\n\n");
        printf("\tPARA SAIR DIGITE: 0 0 0\n");

        printf("\n\tEXPRESSÃO: ");

            // LEITURA DOS DADOS
            scanf("%f", &num1);
            scanf(" %c",&operacao);
            scanf("%f", &num2);

            system("cls || clear");

            // IMPRESSÃO DOS DADOS E RESULTADO
            printf("===> CÁLCULO: %.2f %c %.2f = ", num1,operacao,num2);

        // COMANDOS PARA OS OPERADORES COM SWITCH...CASE
        switch(operacao)
        {

            case '+':
                printf("%.2f\n\n", num1 + num2);
                system("pause");
                break;

            case '-':
                printf("%.2f\n\n", num1 - num2);
                system("pause");
                break;

            case '*':
                printf("%.2f\n\n", num1 * num2);
                system("pause");
                break;

            case '/':
                if(num2 != 0){
                    printf("%.2f\n\n", num1 / num2);
                    system("pause");
                }
                else{
                    printf("NÃO EXISTE DIVISÃO POR '0'\n\n");
                    system("pause");
                }
                break;

            default:
                if(num1 != 0 && operacao != '0' && num2 != 0){
                    printf(" ESTE OPERADOR NÃO EXISTE\n\n ");
                    }
                else{
                    system("cls || clear");

                    printf("============================\n");
                    printf("=== FECHANDO CALCULADORA ===\n");
                    printf("============================\n");
                    printf("====== ATÉ A PRÓXIMA!!! ====\n");
                    printf("============================\n\n\n");
                    }
                    system("pause");
        }

    }while(num1 != 0 && operacao != '0' && num2 != 0);

}
