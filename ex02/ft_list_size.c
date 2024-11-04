#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
int ft_list_size(t_list *begin_list){

    int count;
    t_list *Node;
    Node = begin_list;
    count = 0;
    while(Node != NULL){

        count++;
        Node = Node->next;

    }
    return(count);

}
    /*


    void ft_display(t_list *begin_list){
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

}
/*