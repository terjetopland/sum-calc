#include <stdio.h>
#include <string.h>
#include "Funksjoner.h"


int my_array[] = { 0 };

int main() {
    //Writes a welcome and ask for name
    greeting();

    char name[50] ={ 0 };
    fgets(name, 50, stdin);
    //Takes the last \n that is in the buffer en sets it to \0.
    name[strlen(name) - 1] = '\0';

    printf("%s are you ready for a simple calculator that can sum the numbers you entered?\nEnter yes or no\n", name);

    char yes_or_no[10] = { 0 };
    scanf("%s", yes_or_no);

    if(strcmp(yes_or_no, "yes") == 0 ) {

        //Shall read how many numbers the user wants to sum
        int count_numbers;
        printf("Please insert how many numbers you want to sum!\n");
        scanf("%i", &count_numbers);


        printf("Enter the numbers you want to sum\n");

        for (int i = 0; i < count_numbers; ++i) {
            scanf("%i", &my_array[i]);
        }


        sum(my_array, count_numbers);
    } else
        printf("Goodbye %s. Hope I see you again soon for a calculation!", name);

    return 0;

}

