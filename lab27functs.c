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