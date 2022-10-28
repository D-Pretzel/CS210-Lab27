/** lab27-3.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>
#include "lab27functs.h"

int main(void) {
    // Ask for a file name
    char fileName[20];
    printf("Enter a file name: ");
    scanf("%s", fileName);

    // Ask for a month
    char month[15];
    printf("Enter a month: ");
    scanf("%s", month);

    int numLines = getNumLines(fileName);

    EmployeeBD* employees = (EmployeeBD*) malloc(numLines * sizeof(EmployeeBD));

    readFile(fileName, employees, numLines);

    printBirthdays(employees, numLines, month);

    return 0;
}

