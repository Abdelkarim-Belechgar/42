#include <unistd.h>
#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
         else 
        return 0;
    }
    return 1;
}

int main()
{
    printf("%d", is_power_of_2(1024));



}