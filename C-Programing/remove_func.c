#include <stdio.h>
#include <stdlib.h>

int main()
{
    int return_value;
    FILE *fp;
    char *filename = "image.jpg";
    fp = fopen(filename, "rb");

    if(fp == NULL){
        perror("There must be some kind a problem with the file");
        return EXIT_FAILURE;
    }

    return_value =  remove(filename);

    if(return_value != 0){
        perror("Removing the file has been failed");
        return 1;
    }

    printf("%s removed successfully!\n", filename);

    return_value = remove(filename);

    if (return_value != 0){
        perror("Removing the file has been failed");
        return 1;
    }

    printf("%s removed successfully!\n", filename);

    return 0;
}
