#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(reject[j] == s[i])
                return i;
        j++;


        }

        i++;



    }

return i;

}
// #include <string.h>
// int main()
// {   
//     printf("original == %zu\n", strcspn("med charaf  bouderraoui", "b"));
//         printf("nta3i  == %zu", ft_strcspn("med charaf  bouderraoui", "b"));
    



// }