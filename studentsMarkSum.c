/*
FUNCTION DESCRIPTION

Complete the function, marks_summation in the editor below.

marks_summation has the following parameters:

int marks[number_of_students]: the marks for each student
int number_of_students: the size of marks[]
char gender: either 'g' or 'b'

RETURNS

int: the sum of marks for boys if gender = b, or of marks of girls if gender = g

INPUT FORMAT

The first line contains number_of_students, denoting the number of students in the class, hence the number of elements in marks.
Each of the number_of_students subsequent lines contains marksi.
The next line contains gender.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {

    int sum = 0;
    int start_index;
    
    if (gender == 'b'){
        start_index = 0;
    } else if (gender == 'g'){
        start_index = 1;
    }

    for (int i = start_index; i < number_of_students; i = i + 2) {
        sum = sum + marks[i];
    }

    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}