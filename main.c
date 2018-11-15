#include <stdio.h>
#include <stdlib.h>

void writeToFile(void);
void readFile(void);

int main()
{

    writeToFile();
    readFile();
    return 0;
}

void writeToFile()
{
    FILE *pFile; // Attempt to open the file with write capacity.
    pFile = fopen("C:\\Taylor\\something.txt", "w");

    if ( pFile == NULL )
    {
        printf("Unable to open/write file.");
    }
    else
    {
        printf("Enter an integer: ");
        int num;
        scanf("%d", &num);

        fprintf(pFile, "%d", num);
        fclose(pFile);

    }
}

readFile()
{
    int num; // Store contents of file.

    FILE *ptrFile;
    ptrFile = fopen("C:\\Taylor\\something.txt", "r");

    if ( ptrFile == NULL )
    {
        printf("Unable to open/read file.");
    }
    else
    {
        fscanf(ptrFile, "%d", &num);
        printf("Contents of the file: %d", num);

        fclose(ptrFile);

    }

}
