// IMMPORTA��O DAS BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// C�DIGO PRINCIPAL
int main(void)
{
    // COMANDO PARA ACENTUA��O E PONTUA��O
    setlocale(LC_ALL, "Portuguese");

    // DECLARA��O VARI�VEIS
    float num1, num2;
    char operacao;

    // MENU DA CALCULADORA USANDO DO...WHILE PARA O LOOP
    do{
        system("cls || clear");

        printf("\t===============================================\n");
        printf("\t===== CALCULADORA SIMPLES DE DOIS N�MEROS =====\n");
        printf("\t===============================================\n\n");

        printf("\tOPERA��ES:\n");
        printf("\tSOMA = '+'\n");
        printf("\tSUBTRA��O = '-'\n");
        printf("\tMULTIPLICA��O = '*'\n");
        printf("\tDIVIS�O = '/'\n");

        printf("\n\t   DIGITE A EXPRESS�O:\n");
        printf("\t(EX.: 1 + 1 , 2.1 * 3.1)\n\n");
        printf("\tPARA SAIR DIGITE: 0 0 0\n");

        printf("\n\tEXPRESS�O: ");

            // LEITURA DOS DADOS
            scanf("%f", &num1);
            scanf(" %c",&operacao);
            scanf("%f", &num2);

            system("cls || clear");

            // IMPRESS�O DOS DADOS E RESULTADO
            printf("===> C�LCULO: %.2f %c %.2f = ", num1,operacao,num2);

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
                    printf("N�O EXISTE DIVIS�O POR '0'\n\n");
                    system("pause");
                }
                break;

            default:
                if(num1 != 0 && operacao != '0' && num2 != 0){
                    printf(" ESTE OPERADOR N�O EXISTE\n\n ");
                    }
                else{
                    system("cls || clear");

                    printf("============================\n");
                    printf("=== FECHANDO CALCULADORA ===\n");
                    printf("============================\n");
                    printf("====== AT� A PR�XIMA!!! ====\n");
                    printf("============================\n\n\n");
                    }
                    system("pause");
        }

    }while(num1 != 0 && operacao != '0' && num2 != 0);

}
