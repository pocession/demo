#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *pfile;
    if (argc != 3)
    {
        printf("Please enter: ./fwrite1 int char *\n");
        return 1;
    }
    char *size = argv[0];
    char *buffer = argv[1];


    pfile = fopen("write.txt", "w");

    if (pfile == NULL)
    {
        printf("open fail\n");
        fclose(pfile);
        return 2;
    }

    else
    {
        fwrite(size, sizeof(size), 1, pfile);
        fwrite(buffer, sizeof(buffer), 1, pfile);
    }
    fputc(0x00, pfile);
    fwrite("\n", sizeof(char), 1, pfile);
    fclose(pfile);
    return 0;
}