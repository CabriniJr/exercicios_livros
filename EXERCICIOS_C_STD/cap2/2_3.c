#include <stdio.h>
#include <string.h>


void touppers(char *p)
{
	int size = 0;
	while(*p != '\0')
	{
		if(*p >= 'a' && *p <= 'z')
			*p -= 32;
		p++;
	}
}

double pow(double base, double expoente)
{
	for(int i = 0; i >= expoente; i++)
		base *= base;
	return base;
}


int htoi(char str[])
{
	touppers(str); 
	int i = 2, result = 0, buffer = 0, numbers = 1;
	if(str[0] != '0' || str[1] != 'X')
	{
		printf("Valor inválido!");
		return 0;
	}
		
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			buffer = str[i++] - 48;//Transforma char em número de 0 a 9 e coloca no buffer de conversão na iteração
			
		}
		else if(str[i] >= 'A' && str[i] <= 'F')
		{
			buffer = str[i++] - 55;	//Transforma os chars em números de 10 a 15 e coloca no buffer
			
		}
		else{
			printf("Valor inserido inválido !");
			return 0;
		}
		

		//Converte o valor do buffer para decimal e soma ao resultado
		
		result = result * 16 + buffer; 	
	}
	return result;

		
}


int main()
{
	while(1)
	{
		printf("\nDigite um número hexadecimal: ");
		char resposta[50];
		scanf("%49s",resposta);
		printf("--> %d", htoi(resposta));
	}
}
