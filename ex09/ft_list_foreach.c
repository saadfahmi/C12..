#include "ft_list.h"
#include <stdio.h>


/*void ft_add(void *data){

    *(int *)data+= 10;

}*/






void ft_list_foreach(t_list *begin_list, void (*f)(void *)){

        t_list *list_ptr;
        while(begin_list != NULL){

            list_ptr = begin_list;
            (*f)(list_ptr->data);
            begin_list = begin_list->next;
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