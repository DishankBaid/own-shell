#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// #define char userInput[1000]; // defining max user input

// #define clear() printf("\033[H\033[J")

void initShell()
{
    // clear();

    printf("\n\n\n\n**************"
           "***********************");
    printf("\n\n\n\t****MY SHELL****");
    printf("\n\n\t-USE AT YOUR OWN RISK-");
    printf("\n\n\n\n*******************"
           "***********************");

    char *username = getenv("USER");
    printf("\n");
    printf("this is username %s", username);
    printf("\n");
    sleep(1);

    // clear();
}
int main()
{
    initShell();
    return 0;
}