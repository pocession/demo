//A demo for counting line number of a given file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

#define MAXWORDS 40

int file_line_count(FILE** inptr)
{

    int ch;
    int lines = 0;
    do
    {
        ch = fgetc(*inptr);
        if (ch == '\n')
        lines++;
    }
    while(ch != EOF);
    return lines;
}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Please enter: ./file_line_counter file_name\n");
        return 1;
    }

    char* infile = argv[1];
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
        fclose(inptr);
    }

    int lines = file_line_count(&inptr);
    printf("Main: There are %d lines in this file: %s.\n", lines, infile);
    fclose(inptr);
}