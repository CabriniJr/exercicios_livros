#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s1[])
{
	int end = strlen(s1)-1, start = 0;
	while(start <= end)
	{	
		char buffer = s1[start];
		s1[start++] = s1[end];
		s1[end--] = buffer;
		

	}
	

}

void itob(int number, char string[], int base)
{
	int i = 0, sign; 
	if((sign = number)< 0)
		number = -number;

	do
	{
		if(base <= 10 || number % base <= 9)
			string[i++] = number % base + '0';
		else 
			string[i++] = number % base + 'A' - 10;

	}while ((number/=base) > 0 );

	if(sign < 0)
		string[i++] = '-';
	string[i] = '\0';
	reverse(string);

}


int main()
{
	int entry, base;
	char buffer[100];
	scanf("%d", &entry);
	scanf("%d",&base);
	itob(entry,buffer,base);
	printf("%s\n",buffer);
}
