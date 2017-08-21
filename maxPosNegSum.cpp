
/*
OVERVIEW: Given an array of integers find the maximum possible sum formed by a positive and the negative
integer in the array.
Ex: input: [1, 9, 8, 2, 3, -1,-10,-5] output: 8 (formed by 9 and -1) 

INPUTS: An Integer array and the length of the array

OUTPUT: Maximum possible sum formed by a positive and the negative integer in the array

ERROR CASES: Return 0 for the invalid inputs

NOTES:
*/

#include <stdio.h>

int maxPosNegSum(int* input,int length)
{
	if (length <= 0)
		return 0;
	int max = input[0], i, verify = 0, verify2 = 0;
	unsigned int min = input[0];
	for (i = 0; i < length; i++)
	 {
		// printf("\n%d", input[i]);
		 if (input[i]>=0)
		 {
			 
			 if (input[i] > max)
				 max = input[i];
			 verify++;
			//printf("\n%d", input[i]);
		 }
		 if (input[i]<0)
		 {
			 if (input[i] > min)
			 {
				 min = input[i];
			 }
				
			    verify2++;
			 //printf("\n%d ", min);
		 }
		
	 }
	if (verify == 0 || verify2 == 0)
		return 0;
	else
	    return max+min;
}