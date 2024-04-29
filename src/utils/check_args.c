#include "../includes/push_swap.h"

int	ft_contains(int num, char **av, int i)
{
    i++;
    while(av[1])
    {
        if(ft_atoi(av[i]) == num)
            return(i);
        i++;
    }
    return(0);
}

int	ft_isnum(char *num)
{
    int i = 0;

    if(num[0] == '-')
        i++;
	while(num[i])
	{
		if(!ft_isdigit(num[i]))
			return(0);
		i++;
	}
	return(1);
}

void	ft_check_args(int ac, char **av)
{
	int	i = 0;
	long	tmp;
	char **args;

	if(ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while(args[i])
	{
		tmp = ft_atoi(args[i]);
		if(!ft_isnum(args[i]))
			ft_error("error");
		if(ft_contains(tmp, args, i))
			ft_error("error");
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error("error");
		i++;
	}
	if(ac == 2)
		ft_free(args);
	
}