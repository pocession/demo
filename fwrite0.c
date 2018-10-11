#include <stdio.h>

int main()
{
    FILE *pfile;
    char buffer[] = {'H','E','L','L','O'};

    pfile = fopen("write.txt", "w");

    if (pfile == NULL)
    {
        printf("open fail\n");
        fclose(pfile);
        return 1;
    }

    else
    {
        fwrite(buffer, sizeof(buffer), 1, pfile);
    }
    fclose(pfile);
    return 0;
}