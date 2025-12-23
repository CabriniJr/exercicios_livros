#include <stdio.h>

void expand(char s1[], char s2[])
{
	char start, end;
       	int i = 0, intervalo = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == '-' && i > 0 && s1[i+1] != '\0')
		{
			start = s1[i - 1];
		 	stop = s1 [i + 1];
			if
		}
		

	}
	intervalo = end - start;	
	printf("Intervalo = %d\n", intervalo);

	for(int j = 0; j <= intervalo; j++)
		s2[j] = start + j;

	printf("%s\n", s2);

}	

int main()
{
	char s1[100], s2[100];
	scanf("%99s",s1);
	expand(s1,s2);
}
