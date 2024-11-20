#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *Node;
    t_list *prev;
    Node = (*begin_list1);
    while(Node != NULL)
    {
        prev = Node;
        Node = Node->next;


    }
    prev->next = begin_list2;


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