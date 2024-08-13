#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

int main(int argc , char **argv)
{
    if(argc == 4)
    {
        int result ;
        int i = atoi(argv[1]);
        int j = atoi(argv[3]);
        if(argv[2][0] == '*')
                result =i*j;
        else if(argv[2][0] == '+')
                result = i+j;
        else if(argv[2][0] == '-')
            result = i-j;
        else if(argv[2][0] == '/')
            result = i/j;
        printf("%d\n",result);

    }

else 

    write(1,"187a",4);
// return 0;

}