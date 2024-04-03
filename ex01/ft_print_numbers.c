#include <unistd.h>

	void ft_putchar(char c)
{

	write (1, &c, 1);
}
void ft_print_numbers(void)
{
	int		u;

	u = 48;
	while (u < 58)
	{
		ft_putchar(u);
		u ++;
	}

}
int main(void)
{
	ft_print_numbers();
	return (0);
}