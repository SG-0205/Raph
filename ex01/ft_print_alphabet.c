#include <unistd.h>

void ftputchar(char c)
{
	write(1, &c, 1);
}
void ft_print_alphabet(void)
{

	char	*var;
	int		i;

	i = 0;
	var = "abcdefghijklmnopqrstuvwxyz";
	while (i < 26)
	{
		ftputchar(var[i]);
		i++;
	}
}
int main(void)
{

	ft_print_alphabet();
	return(0);
}