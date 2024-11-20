#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/*int ft_strcmp(int *data1 ,int *data2)
{
        return(*(int *)data1 -*(int *)data2);




     
}*/
ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
                    t_list *list_ptr;
                    list_ptr = begin_list;
                    while(list_ptr != NULL)

    {
        if((*cmp)(list_ptr->data, data_ref) == 0)
        return(list_ptr);
        list_ptr = list_ptr->next;





    }
    return(NULL);




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



