/*
Given a positive integer denoting n, do the following:

If 1<= n <= 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).

If n > 9, print Greater than 9.
Input Format

The first line contains a single integer, n.

Constraints

1<= n <= 10^9

Output Format

If 1<= n <= 9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.
*/

int main()
{
   int number;
    scanf("%d\n", &number);
    
    if (number == 1){
        printf("one");
    }
    else if (number == 2){
        printf("two");
    }
    else if (number == 3){
        printf("three");
    }
    else if (number == 4){
        printf("four");
    }
    else if (number == 5){
        printf("five");
    }
    else if (number == 6){
        printf("six");
    }
    else if (number == 7){
        printf("seven");
    }
    else if (number == 8){
        printf("eight");
    }
    else if (number == 9){
        printf("nine");
    }
    else if (number > 9){
        printf("Greater than 9");
    }
}