#include <cstdio>   // for fopen, etc
#include <iostream> //for EXIT_FAILURE

int main()
{
    //In C, file handling starts with declearing a pointer.
    // The pointer points to "fopen" in <cstdio>  
    FILE* fpt {fopen("text.dat", "r")};

    //If this if-statement doesn't exist and if there's no file, then segmentation fault could occur. 
    if (fpt == nullptr){ //In C, instead of nullptr, NULL is usually used.
        printf("File not found. \n");
        exit (EXIT_FAILURE);
    }

    int x, y, z;

    // while (fscanf(fpt, "%i %i %i", &x, &y, &z) != EOF)
    // {
    //     printf("%i %i %i \n", x, y, z);
    // }
    // fclose(fpt);

    int STRING_SIZE = 30;
    char str[STRING_SIZE];
    while (fgets(str, STRING_SIZE, fpt)) //At the end, fgets returns NULL, not EOF unlike fscanf. 
    { 
        sscanf(str, "%i%i%i", &x, &y, &z);
        printf("%i %i %i \n", x, y, z);
        printf("%s", str);
    }
    fclose(fpt);

    if (fclose(fpt)) { //if closed properly, fclose() returns 0, otherwise EOF.
        printf("\nFile has been closed properly.\n");
    }

    return 0;
}