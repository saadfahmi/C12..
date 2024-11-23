#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
void	ft_list_reverse_fun(t_list *begin_list)
{
            t_list *list_ptr;
            t_list *other_list_ptr;
            t_list *swap;
            list_ptr = begin_list;
            while(list_ptr != NULL)
            {
                    other_list_ptr = list_ptr->next;
                    while(other_list_ptr != NULL)
                    {
                            swap = list_ptr->next;
                            list_ptr->data = other_list_ptr->data;
                            other_list_ptr->data = swap;
                            other_list_ptr = other_list_ptr->next;








                    }
                    list_ptr = list_ptr->next;





            }


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