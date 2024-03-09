#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int     t1;
    int     t2;
    int     *ptr;
    char    *str = NULL;
    
    // str = NULL;
    
    ptr = &t1;
    t1 = printf ("%c %s %d %p %u asio soratra kely eto %X\n", 'D', str, 185, ptr, -1, 27);
    t2 = ft_printf ("%c %s %d %p %u asio soratra kely eto %X\n", 'D', str, 185, ptr, -1, 27);
    printf ("%d\n", t1);
    printf ("%d\n", t2);
    return 0;
}
