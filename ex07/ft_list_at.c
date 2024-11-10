#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
t_list *ft_list_at(t_list *begin_list, unsigned int nbr){
    
    
    t_list *Node;


    unsigned int count;
    count = 0 ;
    while(Node != NULL)
    {
        if(count == nbr);
        return(Node);
        Node = Node->next;


        count++;




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