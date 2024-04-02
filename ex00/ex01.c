#include <unistd.h>


void ftputchar(char d)
{

	write(1, &d, 1);
}
int main(void)
{
	char	var;

	var = '5';
	ftputchar(var);
	return(0);
}

