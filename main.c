#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int     t1;
    int     t2;
    int     *ptr;
    char    *str = NULL;
    int	a;
    // str = NULL;
    
	a = 42;
    ptr = &a;
    t1 = printf ("%c %s %d %p %u %% asio soratra kely eto %x %X %i\n", 'D', str, 185, ptr, -129, 27, 0, INT_MAX);
    t2 = ft_printf ("%c %s %d %p %u %% asio soratra kely eto %x %X %i\n", 'D', str, 185, ptr, -129, 27, 0, INT_MAX);
    printf ("%d\n", t1);
    printf ("%d\n", t2);
    return 0;
}
