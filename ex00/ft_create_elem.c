// add #include <sdtio.h> for main // 
#include "ft_list.h"
#include <stdlib.h>
/*void diplay(t_list* n){

    while(n != NULL){



        printf("%d", *(int *)n->data);
        n->next;

    }

}
*/

t_list *ft_create_elem(void *data){

    t_list* new_node;
    new_node = (t_list*)malloc(sizeof(t_list));
    if(new_node){


        new_node->data = data;
        new_node->data = NULL;

    }
    return(new_node);

}
/*int main(){

    t_list *Node;
    int a = 4242;
    void *ptr = &a;
    Node = ft_create_elem(ptr);
    display(node);
    return 0;

}*/