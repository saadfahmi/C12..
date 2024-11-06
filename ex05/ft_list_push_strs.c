#include "ft_list.h"
#include <stdio.h>
t_list *ft_create_elem(void *data){

    t_list* new_node;
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node){


        new_node->data = data;
        new_node->data = NULL;

    }
    return(new_node);

} 
t_list *ft_list_push_strs(int size, char **strs){

    t_list *Node;
    if(size <= 0)
    return(0);
    Node = ft_create_elem((void *)strs[size - 1]);
    Node ->next = ft_list_push_strs(size -1, strs);

    return(Node);
}
