#include <stdio.h>

int main(void)
{
        float a, b;
        char oper;

            printf("Operações disponiveis:\n");
            printf("'+': soma\n");
            printf("'-': subtração\n");
            printf("'*': multiplicação\n");
            printf("'/': divisão\n");

            printf("\nDigite a expressão na forma: número operador número\n");
            printf("Exemplos: 1 + 1 ,  2.1 * 3.1\n");


            scanf("%f", &a);
            scanf("%c",&oper);
            scanf("%f", &b);

            printf("Calculando: %.2f %c %.2f = ", a, oper, b);


            switch(oper)
            {
                case '+':
                        printf("%.2f\n", a + b);
                        break;

                case '-':
                        printf("%.2f\n", a - b);
                        break;

                case '*':
                        printf("%.2f\n", a * b);
                        break;

                 case '/':
                        if(b != 0)
                            printf("%.2f\n\n", a / b);
                        else
                            printf("Não existe divisão por 0\n");
                        break;

                case '%':
                        printf("%d\n", (int)a % (int)b);
                        break; 
            }               
    
}
