#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define LINE_BUFFER_SIZE 1024

void basic_loop()
{
    char *buffer;
    size_t buffsize = 4;
    size_t read;

    buffer = (char *)malloc(buffsize * sizeof(char));

    if (buffer == NULL)
    {
        perror("Unexpected Error occured and memory was not allocated.");
        exit(EXIT_FAILURE);
    }

    printf("Type Something: ");
    while (read = getline(&buffer, &buffsize, stdin))
    {
        printf("text: %s \n", buffer);
    }

    printf("Was not able to read line");
    free(buffer);
}

int main()
{
    basic_loop();
    return 0;
}