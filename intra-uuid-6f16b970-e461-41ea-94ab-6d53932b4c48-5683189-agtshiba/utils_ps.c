#include "push_swap.h"

t_stack_node *find_min(t_stack_node **head)
{
    t_stack_node *current;
    t_stack_node *min_node = NULL;
    
    current = *head;
    long int min; // a changer par INT_MIN
    min = LONG_MAX;
    while (current != NULL) {
        if (current->nbr < min)
        {
            min = current->nbr;
            min_node = current;
        }
        current = current->next; 
    }
    return (min_node);
}

// t_stack_node *find_maxi(t_stack_node **head)
// {
//     t_stack_node *current; 
//     t_stack_node *max_node = NULL;
//     long int max; // a changer par INT_MIN
    
//     current = *head;
//     max = LONG_MIN;
//     while (current != NULL) {
//         if (current->nbr > max)
//         {
//             max = current->nbr;
//             max_node = current;
//         }
           
//         current = current->next; 
//     }
//     return (max_node);
// }

t_stack_node *find_maxi(t_stack_node **head)
{
    t_stack_node *current; 
    t_stack_node *max_node = NULL;
    int max; // Utilisation de int et INT_MIN

    current = *head;
    max = INT_MIN; // Initialisation à INT_MIN

    while (current != NULL) {
        if (current->nbr > max) {
            max = current->nbr;
            max_node = current;
        }
        current = current->next; 
    }

    return max_node; // Retourne le nœud avec la valeur maximale
}

int list_size(t_stack_node **head)
{
    t_stack_node *current; 
    int size;

    current = *head;
    size = 0;
    while (current != NULL) {
        size++;
        current = current->next; 
    }
    return (size);
}
    
t_stack_node* find_last_node(t_stack_node **headRef)
{
    t_stack_node *lastNode;

    lastNode = *headRef;
    if (headRef == NULL || *headRef == NULL)
        return NULL;
    while (lastNode->next != NULL)
        lastNode = lastNode->next;
    return lastNode;
}

