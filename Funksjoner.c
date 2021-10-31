//
// Created by terje on 17.09.2021.
//
#include "stdio.h"
#include "Funksjoner.h"
//This only writes a string when used
int test() {
    printf("Hello Terje\n");
}

//This sum number in an random array defined
int sum(int an_array[], int array_size) {
    int sum_numbers;
    for (int i = 0; i < array_size; ++i) {
        sum_numbers = sum_numbers + an_array[i];

    }
    printf("Your sum = %i\n", sum_numbers);
}


