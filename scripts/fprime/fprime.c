#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fprime(int num)
{
    if (num == 1)
    {
        printf("1");
        return;
    }
    int i = 2;
    while (num >= i)
    {
        if (num % i == 0)
        {
            printf("%d", i);
            if (num != i)
                printf("*");
            num /= i;
        }
        else 
        i++;
    }
}
int main(int argc, char **argv)
{
    if(argc == 2)
{
    fprime(atoi(argv[1]));
}
printf("\n");
}