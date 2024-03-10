#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int     t1;
    int     t2;
    // int     *ptr;
    // char    *str = NULL;
    // int	a;
    // str = NULL;
    
	// a = 42;
    // ptr = &a;
    // t1 = printf ("%p %p %p %p ", (unsigned long)LONG_MAX, (unsigned long)LONG_MIN, (unsigned long)ULONG_MAX, (unsigned long)-ULONG_MAX);
    t2 = ft_printf ("%p %p %p %p ", LONG_MAX, LONG_MIN, ULONG_MAX, -ULONG_MAX);
    printf ("%d\n", t1);
    printf ("%d\n", t2);
    return 0;
}
