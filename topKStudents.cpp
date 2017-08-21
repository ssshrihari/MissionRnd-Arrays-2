/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and 
scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
Problem Code :TK
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int K) {
	
	
	struct student swap;
	//struct student **result=NULL;
	if (len <= 0 || students == NULL || K<=0 )
		return NULL;
	for (int c = 0; c < (len - 1); c++)
	{
		for (int d = 0; d < len - c - 1; d++)
		{
			if (students[d].score < students[d + 1].score) /* For decreasing order use < */
			{
				swap = students[d];
				students[d] = students[d + 1];
				students[d + 1] = swap;

			

			}
		}
	}
	struct student ** topKStudents = (struct student**)malloc(sizeof(struct student*)*K);
	for (int c = 0; c <K; c++)
	{
		
		topKStudents[c] = students+c;
	}
	
	return topKStudents;

}