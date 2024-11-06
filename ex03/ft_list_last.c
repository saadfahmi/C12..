#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
t_list *ft_list_last(t_list *begin_list){


    t_list *Node;
    if(begin_list){
    while(begin_list){


        Node = begin_list;
        begin_list = begin_list->next;
    }
    return(Node);
    }
    return(begin_list);

}



    /*void ft_display(t_list *begin_list){
    while(begin_list != NULL){

        printf("%d", *(int *)begin_list->data);
        begin_list = begin_list->next;

    }

}
t_list *ft_create_elem(void *data){

    t_list* new_node;
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node){
        new_node ->data = data;
        new_node ->data = NULL;





    }
    return(new_node);

} /*
