/* This program takes a string from the user and then displays it in reverse order.
 *
 * Author: Gerardo González Becerril.
 * Date: October 16th, 2018.
 * E-mail: a01411981@itesm.mx
 */

#include <stdio.h>

int stringLength(char string[]) {
    int counter = 0; // Counts the amount of loops (characters) that take place.
    // While loop that goes through every character in the string (array) until it finds the end of it.
    while (string[counter] != '\0') {
        counter++; // Allows the loop to work.
    }
    return counter-1; // Returns the amount of loops, but takes one because of the last character.
}

int main() {

    char string[100]; // Variable where the string will be stored.
    printf("Give me a string:\n"); // Asks the user for input.
    fgets(string, sizeof(string), stdin); // Stores the input in the string array.

    // For loop that goes down from the amount of characters in a string to 0.
    for (int i = stringLength(string)-1; i >= 0; i--) {
        printf("%c", string[i]); // Prints the current character in the string array.
    }

    return 0;
}