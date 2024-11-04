#include "ft_list.h"
void ft_list_push_front(t_list **begin_list, void *data){


    t_list *new_node;
    if(*begin_list){

        new_node = ft_create_elem(data);
        new_node->next = *begin_list;
        *begin_list = new_node;

    }

    else
    new_node = ft_create_elem(data);
}
/* void diplay(t_list* n){

    while(n != NULL){



        printf("%d", *(int *)n->data);
        n->next;

    }

}


t_list *ft_create_elem(void *data){

    t_list* new_node;
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node){


        new_node->data = data;
        new_node->data = NULL;

    }
    return(new_node);

}*/