/** lab27-2.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>

//Writes the multiplication table for a given integer to a text file
int main(void) {
    // Ask for an integer
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ask for an ending int
    int end;
    printf("Enter an ending integer: ");
    scanf("%d", &end);

    // Ask for a file name
    char fileName[20];
    printf("Enter a file name: ");
    scanf("%s", fileName);

    // Open the file
    FILE *file = fopen(fileName, "w");

    // Write the multiplication table to the file starting with 0
    for (int i = 0; i <= end; i++){
        fprintf(file, "%d * %d = %d\n", num, i, num*i);
    }

    // Close the file
    fclose(file);

    return 0;
}

