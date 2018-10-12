//A program for reading data from file and pass it to struct

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000
#define NEWLINE '\n'

struct student
{
    char id[2];
    char firstname[20];
    char secondname[20];
};

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Please enter: ./fread_struct.c student.txt result.txt\n");
        return 1;
    }

    char *infile = argv[1];
    char *outfile = argv[2];
    struct student input;

    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
        fclose(inptr);
    }

    char line[MAXLINE];

    FILE *outptr = fopen(outfile, "w");

    //read file content line by line content until the end of file(eof)
    while(fgets(line, 1000, inptr) != NULL)
    {
        printf("%s", line);
        fwrite(line, strlen(line), 1, outptr);
        const char s[1] = " ";
        char *token;
        token = strtok(line, s);
        strcpy(input.id, token);
        token = strtok(NULL, s);
        strcpy(input.firstname, token);
        token = strtok(NULL, s);
        strcpy(input.secondname, token);
        printf("student.id is %s\n", input.id);
        printf("student.firstname is %s\n", input.firstname);
        printf("student.secondname is %s\n", input.secondname);
    }
    fclose(inptr);
    fclose(outptr);
    return 0;
}

