/** lab27functs.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Progamming Assessment 2 Practice
* ===========================================================  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab27functs.h"

void encrypt(char message[], int key){
    //Implement Caesar Cipher
    int i = 0;
    while (message[i] != '\0'){
        message[i] += key;
        i++;
    }
}

void decrypt(char message[], int key){
    //Decrypt Caesar Cipher
    int i = 0;
    while (message[i] != '\0'){
        message[i] -= key;
        i++;
    }
}

int getNumLines(char filename[]){
    //Open the file
    FILE *file = fopen(filename, "r");

    //Count the number of lines
    int numLines = 0;
    char line[1024];
    while (fgets(line, 1024, file) != NULL){
        numLines++;
    }

    //Close the file
    fclose(file);

    return numLines;
}

int readFile(char filename[], EmployeeBD employees[], int numLines){
    //Open the file
    FILE *file = fopen(filename, "r");

    // Error handling
    if (file == NULL){
        printf("Error opening file!!");
        return 1;
    }

    int linesRead = 0;

    //Read the file
    for (int i = 0; i < numLines; i++){
        fscanf(file, "%s %s %s %d", employees[i].firstName, employees[i].lastName, employees[i].birthMonth, &employees[i].birthDate);
        linesRead++;
    }

    //Close the file
    fclose(file);

    return linesRead;
}

void printBirthdays(EmployeeBD employees[], int numLines, char searchMonth[]){
    //Print the birthdays
    printf("LASTNAME\tFIRSTNAME\tBIRTHDAY\n*****************************************\n");
    for (int i = 0; i < numLines; i++){
        if (strcmp(employees[i].birthMonth, searchMonth) == 0){
            printf("%-13s\t%-13s\t%s %d\n", employees[i].lastName, employees[i].firstName, employees[i].birthMonth, employees[i].birthDate);
        }
    }
}