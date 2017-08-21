
/*
OVERVIEW: Given a number N return all the prime numbers upto the integer N.
Ex: input: 10 output: [2,3,5,7] 

INPUTS: An Integer N

OUTPUT: Return an Array of Prime numbers until the number N(N inclusive)

ERROR CASES: Return NULL for invalid inputs

Sample Input : 10
Sample Output : An Array consisting elements {2,3,5,7}
NOTES:

Try to think of a optimized way , and avoid unnecessary comparisons.
*/

#include <stdio.h>
#include<stdlib.h>
int* nPrime(int N)
{
	if (N <= 0)
		return NULL;
	int *array,i,j,k=0,count=0;
	array = (int*)calloc(25, sizeof(int));
	for (i = 1; i < N; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			
			if (i%j==0)
			{
				count++;
				
			}

			
		}
		if (count == 2)
		{
			array[k] = i;
			k++;

		}
		
		
	}
	return array;
}