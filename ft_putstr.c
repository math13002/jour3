#include <stdio.h>
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	ft_putchar(*str);
	while(*str++ != '\0')
		ft_putchar(*str);
}
