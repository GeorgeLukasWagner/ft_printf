#include "ft_printf.h"
#include "./libft/libft.h"
#include <stdio.h>

int main()
{
	char *str = "string the sequel";
	ft_printf("String adress is %p, and it have inside %s, size of %d\n", str, str, (int)ft_strlen(str));
	printf("String adress is %p, and it have inside %s, size of %d\n", str, str, (int)ft_strlen(str));
}