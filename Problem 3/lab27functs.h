/** lab27functs.h
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Programming Assessment 2 Practice
* ===========================================================  */

#ifndef LAB27FUNCTS_H
#define LAB27FUNCTS_H

typedef struct EmployeeBD_Struct {
    char firstName[30];
    char lastName[30];
    char birthMonth[15];
    int birthDate;
} EmployeeBD;

void encrypt(char message[], int key);

void decrypt(char message[], int key);

int getNumLines(char filename[]);

int readFile(char filename[], EmployeeBD employees[], int numLines);

void printBirthdays(EmployeeBD employees[], int numLines, char searchMonth[]);

#endif