//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */

    int sum = 0;
    int input;
    do {
        scanf("%i", &input);
        sum += input;
    } while (input);
    printf("Sum = %i", sum);


    return 0;
}