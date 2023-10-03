#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...
  if (size > 0){    /*Checks for preconditions. The array must contain more tha 0 elements*/
        int max = *numbers;  /*Sets the first element in the array as the largest integer*/
        for (int i = 0; i < size; i++){   /*Goes through all the elements in the array*/
            if (numbers[i] > max){  /*If an integer is larger than the largest integer so far, then it becomes the new largest integer*/
                max = numbers[i];
            }
        }
        return max;
    }
    else {
        printf("Wrong input, the array must contain more than 0 elements"); /*Tells the user, that the input is wrong, if the preconditions aren't met*/
        return -1;
    }
}

#ifndef TEST

int main() {

	return 0;
}

#endif
