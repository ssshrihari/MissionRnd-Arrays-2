/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use memory allocation techniques to allocate memory.

ProblemCode :SAIN
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	
	if (len <=0 || Arr=='\0')
	{
		return 0;
	}
	int first = 0;
	int last = len - 1;
	int middle = (first + last) / 2;

	while (first <= last) {
		if (Arr[middle] < num)
			first = middle + 1;
		else if (Arr[middle] == num) {
			//printf("%d found at location %d.\n", search, middle + 1);
			break;
		}
		else
			last = middle - 1;

		middle = (first + last) / 2;
		//printf("\n %d", middle);
	}
	last = len-1;
	//printf("\n %d", first);
		//	printf("Not found! %d is not present in the list.\n", search);
		for (int i = last+1; i >= first; i--)
		{
			Arr[i] = Arr[i - 1];
		}
	Arr[first] = num;
	return Arr;
}