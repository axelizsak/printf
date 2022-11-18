#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_pchar(int c)
{
	write (1, &c, 1);
	return (1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write (1, s++, 1);
}

int	ft_pstr(char *s)
{
	if (!*s)
	{
		ft_putstr("empty string");
		return (1);
	}
	while (*s)
		write (1, s++, 1);
	return (1);
}

void    ft_convert_hexa(unsigned long n, const char type)
{
        if (n >= 16)
        {
                ft_convert_hexa(n / 16, type);
                ft_convert_hexa(n % 16, type);
        }
        else
        {
                if (n <= 9)
                        ft_pchar(n + '0');
                else
                {
                        if (type == 'x')
                                ft_pchar(n - 10 + 'a');
                        else if(type == 'X')
                                ft_pchar(n - 10 + 'A');
                }
        }
}

int     ft_phexa(unsigned long n, const char type)
{
        if (n == 0)
                ft_pchar('0');
        else
                ft_convert_hexa(n, type);
        return (1);
}

int	ft_type(va_list ap, const char type)
{
	int	i;

	i = 0;
	if (type == 'p')
	{
		ft_pstr("0x");
		i += 2;
		i += ft_phexa(va_arg(ap, unsigned long), 'x');
	}
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int	i;
	int	print;

	va_start(ap, s);
	i = 0;
	print = 0;
	while (s[i])
	{
		if (s[i] == 37)
		{
			print += ft_type(ap, s[i + 1]);
			i++;
		}
		else
			print += ft_pchar(s[i]);
		i++;
	}
	va_end(ap);
	return (print);
}

int	main()
{
	int	i;
	i = 50;

	printf("%p\n", &i);
	ft_printf("%p\n", &i);
}
