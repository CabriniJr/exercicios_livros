#include <stdio.h>

/* squeeze: deleta todos o c de s */
char* squeeze(char s1[], char s2[])
{
	int i, j;
	for(int k = 0; s2[k] != '\0'; k++)
	{
		for(i = j = 0; s1[i] != '\0'; i++)
		{	
			if(s1[i] != s2[k])
				s1[j++] = s1[i];
		}
		s1[j] = '\0';
	}
	return s1;
}

int main()
{
	char s1[100], s2[100];
	printf("Digite a string 1\n");
	scanf("%99s", s1);
	printf("Digite a string2\n");
	scanf("%99s", s2);

	printf("Resultado: %s\n",squeeze(s1,s2));
}

