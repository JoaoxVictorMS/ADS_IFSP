#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int EC;
	float preco, preco_fim, calc1, calc2, calc3, calc4;
	setlocale(LC_ALL, "Portuguese");
	printf("Escolha um produto qualquer e estipule um pre�o para o mesmo. Digite seu pre�o aqui:");
	scanf("%f", &preco); 
	printf("Digite o n�mero da condi��o de pagamento que voc� deseja: \n1 - � vista em dinheiro ou cheque, recebe 10%% de desconto, \n2 - � vista no cart�o de cr�dito, recebe 5%% de desconto, \n3 - Em duas vezes, pre�o normal de etiqueta sem juros, \n4 - Em tr�s vezes, pre�o normal de etiqueta mais juros de 10%%\n:");                                    
	scanf("%d", &EC);
	calc1 = preco - (preco * 0.1);
	calc2 = preco - (preco * 0.05);
	calc3 = preco/2;
	calc4 = ((preco * 0.1) + preco)/3;
	switch(EC)
	{
		case 1:
			preco_fim = calc1;
			printf("O pre�o que ser� pago na condi��o escolhida � de:R$%6.2f\n", preco_fim);
			break;
		case 2:
			preco_fim = calc2;
			printf("O pre�o que ser� pago na condi��o escolhida � de:R$%6.2f\n", preco_fim);
			break;
		case 3:
			preco_fim = calc3;
			printf("O pre�o que ser� pago na condi��o escolhida, por m�s, � de:R$%6.2f\n", preco_fim);
			break;
		case 4:
			preco_fim = calc4;
			printf("O pre�o que ser� pago na condi��o escolhida, por m�s, � de:R$%6.2f\n", preco_fim);
			break;
	}
	return 0;
}
