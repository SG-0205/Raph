#include <unistd.h>



void ft_putchar(char c)
{

	write(1, &c, 1);
}
 int main(void)
{
	char	var;

	var = 'z';
	ft_putchar(var);
	return (0);
}