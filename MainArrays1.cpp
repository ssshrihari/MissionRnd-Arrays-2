#include "FunctionHeadersArrays1.h"
#include <stdio.h>
#include<stdlib.h>
struct student {
	char *name;
	int score;
};
int main(){

	/*Test RemoveArraysDuplicates
	
	int arr[20] = { 1,1,2,2,3,3,4,4 };
	int len = removeArrayDuplicates(arr, 8);
	printf("%d", len);*/

	// sorted array position
	/*
	int ptr[20] = { 9,4,6,7,8,2 };
      sortedArrayPositionsChange(ptr, 6);
	*/

	//test maxposnegsum
	//int input[10] = { -10, -1, -2, -9, -12, 0 };
	//unsigned int  x = maxPosNegSum(input, 6);
	//printf("\n%d", x);
	
	/*test prime
	int *p;
	p = nPrime(10);
	
	for (int i = 0; i < 4; i++) {
		
		//printf("\n %d", *(p+i));
	
	}*/

	//test onetwocount
	
	/*int *a;
	int input[7] = { 1, 2, 2, 1, 2, 1, 2 };
	a = oneTwoCount(input,7);

	for(int i = 0; i < 2; i++) {
	
		printf("%d ", *(a+i));
	

	}
	printf("\n");

	*/
	/*insert array
	//int *ptr;
	//ptr = (int*)malloc(100 * sizeof(int));
	 int ptr[20] = {2,4,6};
	 int *x;
	x=sortedArrayInsertNumber(ptr, 3, 5);
	for (int i = 0; i < 4; i++) {

		printf("%d ", *(x + i));


	}*/
	//Test Students Count
	
	struct student students[3] = { { "stud1", 60 }, { "stud2", 70 }, { "stud3", 50 } };
	struct student **result =topKStudents(students, 3, 2);
	/*int Arr[5] = { 10, 20, 31, 40, 50 }, lessCount, moreCount;
	studentsCount(Arr, 5, 30, &lessCount, &moreCount);*/
	

	getchar();
	return 0;
}