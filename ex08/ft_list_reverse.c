#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
void ft_list_reverse(t_list **begin_list){
    

        t_list *prev;
        t_list *next;
        t_list *current;
        current = (*begin_list);
        prev = NULL;
        next = NULL;
        while(current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;




        }

        *begin_list = prev;







}
/*t_list *ft_create_elem(void *data)
{


    t_list *new_node;
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node){
        new_node->data = data;
        new_node->next = NULL;





    }
    return(new_node);


}*/
/*void ft_display(t_list *head){

    while(head != NULL)
    {
        printf("%d", *(int *)head->data);
        head = head->next;




    }
}*/