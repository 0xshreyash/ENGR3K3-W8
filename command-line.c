/**
 * Author: Shreyash Patodia
 * 
 * Compilation: gcc -Wall -lm -o command command-line.c 
 *
 * This program is meant to be an example on how to read command line
 * arguments in C. The program runs like:
 * ./command <integer> <file-name>
 * 
 * Program should print the content of the file into stdout. 
 *
 * Try to extend this example to be able to read in another file name
 * as command line argument and write the information from the first file to
 * the second file. 
 */ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char** argv) {

    // argv[0] is always the name of the program
    printf("Name of program: %s\n", argv[0]);

    // Let argv[1] be an integer we need to take as command line argument.
    // Now the number is read as a string and then atoi is used to turn it
    // into an integer. 
    int a = atoi(argv[1]);
    // Do some math with the number
    printf("Number entered: %f\n", sqrt(a)); 

    // Use the third argument as the name of a file and then try to open it
    FILE *fp = fopen(argv[2], "r");
    char c;
    // Print the file to stdout. 
    printf("File contents: ");
    while((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    return 0;
    
}