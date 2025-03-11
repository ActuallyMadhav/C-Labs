/*
Write a C program that reads in several lines of non-negative integer numbers,
computes the average for each line and prints out the average. The value –1 in each line
of user input is used to indicate the end of input for that line. 
*/

#include <stdio.h>

int main(){

    int numLines;

    printf("Enter number of lines:\n");
    scanf("%d", &numLines);

    for(int i = 0; i < numLines; i++){
        int num;
        float count = 0, sum = 0;
        float avg;

        printf("Enter line %d (-1 to end):\n", i+1);

        while(1 == 1){
            scanf("%d", &num);

            if(num == -1){
                break;
            }
            sum += num;
            count++;
        }

        avg = sum / count;
        printf("Average = %.2f\n", avg);
    }

    return 0;
}