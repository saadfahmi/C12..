#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
    /*void ft_add(void *data)
{
   
    *(int*) data+= 10;
}
    void ft_strcmp(void *data1, void *data2)
{
        return(*(int *) data1 - *(int*) data2);

}*/
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void*data_ref, int (*cmp)())
{
        t_list *list_ptr;
        list_ptr = begin_list;
        while(list_ptr != NULL)
        {
            if((*cmp)(list_ptr->data, data_ref)== 0)
            (*cmp)(list_ptr->data);
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
