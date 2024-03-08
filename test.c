#include <stdio.h>
#include <stdarg.h>

void	test(int count, ...)
{
	char	*temp;	
	va_list	params;

	temp = NULL;
	va_start(params, count);
	while (count > 0)
	{
		temp = va_arg(params, char *);
		printf("%s\n", temp);
		count--;
	}
	va_end(params);
}

int	main(void)
{
	test(2, "lety lesy", "bendy makamo");
	return (0);
}