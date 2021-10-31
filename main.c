#include <stdio.h>
#include "Funksjoner.h"


int my_array[] = { 0 };

int main() {
    //Writes the string "hello Terje"
    test();

    //Shall read how many numbers the user wants to sum
    int your_array;
    printf("Please insert how many numbers you want to sum!\n");
    scanf("%i", &your_array);


    printf("Enter the numbers you want to sum\n");

    for (int i = 0; i < your_array; ++i) {
        scanf("%i", &my_array[i]);
    }


    sum(my_array, your_array);

    return 0;

}

