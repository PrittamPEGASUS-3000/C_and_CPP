#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch, sourcefile[20], targetfile[20];
    FILE *source, *target;
    printf("Enter name of file to copy\n");
    gets(sourcefile);
    source = fopen(sourcefile, "r");      // eta file open hoche fopen dia read mode a
    if (source == NULL)                   // jdi file ta null thake tahole
    {
        printf("Press any key to exit...\n");    // prog ta exit kore jabe
        exit(EXIT_FAILURE);
    }
    printf("Enter name of target file\n");
    gets(targetfile);
    target = fopen(targetfile, "w");
    if (target == NULL)
    {
        fclose(source);
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(source)) != EOF)      // kintu jodi ch mane character thake tahole prog ta check
        fputc(ch, target);                   //korbe EOF mane end of file er jonno jeta holo null char         
        printf("File copied successfully.\n");   //tarpor seta copy holo
        fclose(source);                      //tarpor duto file close hbe fclose dia
        fclose(target);
    return 0;
}
