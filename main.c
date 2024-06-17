#include "push_swap.h"

int main(int ac, char **av)
{    
    // init pointers to NULL to avoid segfault
    t_stack_node *head = NULL;
    t_stack_node *b = NULL;
    t_stack_node *a = NULL;

    head = create_list(ac, av);

    if (head == NULL)
        return (0);

    if (ac < 2)
        return 0;

    b = create_stack_b(&b);
    a = create_stack_a(&head);

    if (!check_doubles(&a) || !check_valid_caracters(&a))
        return 0;

    push_swap(&a, &b);
    
    return 0;
}