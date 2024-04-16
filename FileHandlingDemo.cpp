// Credit:Copilot
// 16 Apr 2024 12:55PM
#include <stdio.h>
#include<conio.h>
int main()
{
    FILE *filePointer;
    filePointer = fopen("example.txt", "w"); // Open for writing

    if (filePointer == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(filePointer, "Hello, World!\n"); // Writing to the file
    fclose(filePointer); // Closing the file

    return 0;
}
