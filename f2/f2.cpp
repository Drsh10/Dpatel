/*
*  FILE: f2.cpp
*  PROJECT       : SENG1000 - Focused #2
*  PROGRAMMER    : Darsh Patel
*  FIRST VERSION : 22-01-2024
*  DESCRIPTION   :
*    The functions in this file are used to count the total of numbers 1 to 500.
*/

#include <stdio.h>

int main() {
    // Initialize variables
    int num = 1;
    int sum = 0;

    // Use a while loop to add integers from 1 to 500
    while (num <= 500) {
        sum += num;
        num++;
    }

    // Display only the sum
    printf("%d\n", sum);

    return 0;
}