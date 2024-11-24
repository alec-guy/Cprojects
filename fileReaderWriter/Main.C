#include <stdio.h>
#include <string.h>

void removeNewline(char *string);

int main()
{ // File pointer
    FILE *fptr;

    char filename[50];
    printf("Enter filename: ");
    fgets(filename, sizeof(filename), stdin);

    removeNewline(filename);

    fptr = fopen(filename, "r+");

    if (fptr == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fptr) != NULL)
    {
        printf("%s", buffer);
    }
    char fileInput[100];

    printf("\nEnter file input to append to the file: ");

    fgets(fileInput, sizeof(fileInput), stdin);

    removeNewline(fileInput);

    fprintf(fptr, fileInput);

    fclose(fptr);

    FILE *secondFptr;

    secondFptr = fopen(filename, "r+");

    char newBuffer[100]; // making new buffer for some reason
    while (fgets(newBuffer, sizeof(newBuffer), secondFptr) != NULL)
    {
        printf("%s", newBuffer);
    }
    printf("Ending program");

    fclose(secondFptr);

    return 0;
}
void removeNewline(char *string)
{
    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n')
    {
        string[len - 1] = '\0'; // Replace newline with null terminator
    }
}