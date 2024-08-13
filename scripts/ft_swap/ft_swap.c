#include <stdio.h>

void    ft_swap(int *a, int *b){

int temp = 0;
temp = *b;
*b = *a;
*a = temp; 


}
// int main()
// {
//     int a = 0;
//     int b = 1;
//     ft_swap(&a,&b);
//     printf("a == %d\n",a);
// }