
#include <stdio.h>


int main (void){
	float num1,num2;
	char operacao;
	
	 printf("------------------------\n");
            printf("1 (+) Adicao\n");
            printf("2 (-) Subtracao\n");
            printf("3 (*) Multiplicacao\n");
            printf("4 (/) Divisao\n");
            printf("5 Fim\n");
    printf("------------------------\n");
    
	printf("digite numero\n");
	scanf("%f",&num1);
	printf("digite a operacao\n");
	   scanf(" %c",&operacao);
	printf("digite numero\n");
	scanf("%f",&num2);
	fflush(stdin);
	
	 printf(" %.f %c %.f = ", num1,operacao,num2); //Faz referencia aos printf acima,simulando forma de uso de calculadora.
	
	switch (operacao){
		case '+':
		printf("%.f", num1 + num2 );
		break;
			case '-':
		printf("%.f", num1 - num2 );
		break;
			case '*':
		printf("%.f", num1 * num2 );
	break;
	
	case '/':		
        if(num2 != 0) // !=Não lógico, Inversora.
        printf("%.f\n\n", num1 / num2);
        else
        printf("Nao existe divisao por 0\n");
        break;

        default:
     	printf ("FIM\n");
	
	}
	return 0;
}
	
	
