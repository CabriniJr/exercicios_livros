#include <stdio.h>

int any(char s1[], char s2[])
{
	int i, j, result = 0;
	for(i = 0; s1[i] != '\0'; i++)
		for(j = 0; s2[j] != '\0'; j++)
			if(s1[i] == s2[j])
				return i+1 ;
	return -1;
		
}

int main()
{	
	char s1[100], s2[100];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("Posição do primeiro char igual: %d\n", any(s1,s2));
}
