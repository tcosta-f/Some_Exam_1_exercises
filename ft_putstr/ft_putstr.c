#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
	return ;
}

/* int main()
{
	char *str = "ola";

	ft_putstr(str);
	return (0);
} */