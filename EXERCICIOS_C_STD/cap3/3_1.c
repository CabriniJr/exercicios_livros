#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binsearch(int x, int v[], int n)
{
	int low = 0, high = n - 1, mid;
	while (low <= high)
	{
		mid = (low+high)/2;
		if(x < v[mid])
			high = mid + 1;
		else if(x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
	
}

int main()
{

	int numbers[200000], result;
	for(int i = 0; i <= 200000; i++)
		numbers[i] = i;
	clock_t time;
	int random_num = rand () % (200000 + 1);
	time = 	clock();
	result = binsearch(random_num, numbers, 200000);
	time = clock() - time;
	printf("--> %d\tclock = %f\n", result, ((float)time)/CLOCKS_PER_SEC);
	return 0;

}
