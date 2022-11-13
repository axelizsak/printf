#include <unistd.h>
#include <stdio.h>

int     ft_pchar(int c)
{
        write (1, &c, 1);
        return (1);
}

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int     ft_pnbr(int n)
{
        long    ln;

        ln = n;
        if (ln < 0)
        {
                ft_pchar('-');
                ln *= -1;
        }
        if (ln <= 9)
                ft_pchar(ln + '0');
        else
        {
                ft_pnbr(ln / 10);
                ft_pnbr(ln % 10);
        }
        return (1);
}

void    ft_pfnbr(float n)
{
	int	a;
	int	i;

	a = (int)n;
	ft_pnbr(a);
	write(1, ".", 1);
	i = ft_intlen(a);
	while (i > i - n)
	{
		n = (n - a) * (10);
		a = (int)n;
		ft_pnbr(a);
		i--;
	}
}

int	main()
{
	int	a;

	a = 033;
	ft_pfnbr(a);
	printf("%d\n", 33);
	printf("%i\n", 33);

}
