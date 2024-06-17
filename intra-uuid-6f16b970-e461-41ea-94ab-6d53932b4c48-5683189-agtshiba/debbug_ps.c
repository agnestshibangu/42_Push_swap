#include "push_swap.h"

void printList(t_stack_node **head) {
    
    t_stack_node *current = *head; 
    while (current != NULL) {
        ft_printf("%d -> ", current->nbr); 
        current = current->next; 
    }
    ft_printf("NULL\n");
}

void display_prev_values(t_stack_node **head)
{
    if (head == NULL)
    {
        ft_printf("The list is empty.\n");
        return;
    }

    t_stack_node *currentNode = *head;

    while (currentNode != NULL)
    {
        ft_printf("Value stored in 'prev' for node %d: ", currentNode->nbr);
        if (currentNode->prev != NULL)
            ft_printf("%d\n", currentNode->prev->nbr);
        else
            ft_printf("NULL\n");
        currentNode = currentNode->next;
    }
}

void debugPrintList(t_stack_node **head) {
    t_stack_node *current = *head;
    while (current != NULL) {
        ft_printf("Node value: %d, Prev: %d, Next: %d\n", current->nbr, (current->prev != NULL) ? current->prev->nbr : -1, (current->next != NULL) ? current->next->nbr : -1);
        current = current->next;
    }
}

void printf_for_shell_debbug(t_stack_node **a, t_stack_node **b)
{
    ft_printf("------------------ \n");
    ft_printf("STACK A :\n"); 
    printList(a);
    ft_printf("\n");
    ft_printf("STACK B :\n");
    printList(b);
    ft_printf("------------------ \n");
    ft_printf("\n");
    ft_printf("\n");
}

int if_list_is_sorted(t_stack_node **head)
{
    t_stack_node *currentNode = *head;

      while (currentNode != NULL)
    {
        ft_printf("Value stored in 'prev' for node %d: ", currentNode->nbr);
        if (currentNode->prev != NULL)
        {
            ft_printf("current %d\n", currentNode->nbr); 
            ft_printf("prev %d\n", currentNode->prev->nbr);   
            ft_printf("next %d\n", currentNode->next->nbr); 
        }
        else 
            ft_printf("NULL\n");
        currentNode = currentNode->next;
    }
    ft_printf("the list is sorted\\n");
    return (1);
}