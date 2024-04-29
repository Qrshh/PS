#include "../includes/push_swap.h"

void    print_list(t_stack *head)
{
    t_stack *tmp;

    tmp = head;
    while(tmp != NULL)
    {
        ft_putnbr_fd(tmp->value, 1);
        ft_putendl_fd("", 1);
        tmp = tmp->next;
    }
}