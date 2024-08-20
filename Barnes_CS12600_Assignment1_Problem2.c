//Riley Barnes CS 12600
//Assignment 1 Problem 2
//C Program that calculates the area or circumference of a circle based on user input
//referenced https://beginnersbook.com/2014/06/c-program-to-calculate-area-and-circumference-of-circle/
#include <stdio.h>

int main() {
    char option;
    float radius;

    //display the options
    printf("Operations:\n");
    printf("a. Area of Circle\n");
    printf("b. Circumference of Circle\n");

    //take the user's option
    printf("Selected option: ");
    scanf(" %c", &option);

    //take the user's radius
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    //calculate and display the output
    if (option == 'a' || option == 'A') {
        //Area
        float area = 3.14 * radius * radius;
        printf("Area of circle is %.2f square inches.\n", area);
    } else if (option == 'b' || option == 'B') {
        //Circumfrence
        float circumference = 2 * 3.14 * radius;
        printf("Circumference of circle is %.2f inches.\n", circumference);
    } else {
        //the invalid route
        printf("Invalid option. Please choose 'a' or 'b'.\n");
        return 1; //error
    }

    return 0;
}