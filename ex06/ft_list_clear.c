#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>



/*void ft_and_print(void *data)
{

    printf("%d", *(int *)(data));
    free(data);

} */


void ft_list_clear(t_list *begin_list, void (*free_fct)(void *)){

    while(begin_list != 0)
    {
       begin_list = begin_list->data;
       begin_list = begin_list->next;


    }
    free(begin_list);

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