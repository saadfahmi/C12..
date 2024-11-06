#include "ft_list.h"
#include <stdio.h>
/*t_list *ft_create_elem(void *data){

    t_list* new_node;
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node){


        new_node->data = data;
        new_node->data = NULL;

    }
    return(new_node);

} */

    /*void ft_display(t_list *begin_list){
    while(begin_list != NULL){

        printf("%d", *(int *)begin_list->data);
        begin_list = begin_list->next;

    }

void ft_list_push_back(t_list **begin_list, void *data){

    t_list *Node;
    Node = *begin_list;
    if(Node)
    {

        while(Node->next)
        Node = Node->next;
        Node->next = ft_create_elem(data);



    }
    else 
    *begin_list = ft_create_elem(data);




}
