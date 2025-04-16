#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

#define LINE_SIZE 1024

int main(int *argc, int argv)
{
    char *line;
    line = (char *)calloc(LINE_SIZE, sizeof(char));

    while (1)
    {
        line = readline(">");
        printf("%s \n", line);

        if (strcmp(line, "exit") == 0)
        {
            break;
        }
        free(line);
    }

    return 0;
}