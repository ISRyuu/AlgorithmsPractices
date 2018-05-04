#include <stdio.h>
#include <stdlib.h>
#include "bstree.h"

int main(int argc, char **argv)
{
    /* struct t_node node; */
    /* node.rbt_color = RBT_COLOR_BLACK; */
    /* node.data = (void*)1; */

    /* T_node node_p = (T_node)malloc(sizeof(struct t_node)); */
    /* node_p->rbt_color = RBT_COLOR_RED; */
    /* node_p->data = (void*)2; */
        
    /* printf("%d %d\n", node.rbt_color, (int)node.data); */
    /* printf("%d %d\n", node_p->rbt_color, (int)node_p->data); */
    
    /* exit(0); */
    
    T_tree tree = create_tree();
    T_node n, m;
    T_node arra[10000];
    for (int i = 0; i < 10000; i++) {
        int k = arc4random() % 100000;
        //        arra[i] = k;
        /* if (arra[i] == 57) */
        /*     n = rbt_insert(tree, arra[i]); */
        /* else */
        /*     rbt_insert(tree, arra[i]); */
        arra[i] = rbt_insert(tree, k);
    }
    //    t_right_rotate(tree, n);
    /* for (int i = 0; i < 5; i++) { */
    /*     printf("--%d\n", arra[i]); */
    /*     T_node node = t_search(tree, arra[i]); */
    /*     t_delete(tree, &node); */
    /* } */
    
    for (int i = 0; i < 10000; i++ ) {
        int k = arc4random() % 10000;
        if (k > 10) {
            rbt_delete(tree, arra+i);
        }
    }
    
    printf("-----pre\n");
    print_tree_preorder(tree);
    printf("-----in\n");
    print_tree_inorder(tree);
    
    printf("max: %d\n", t_maximum(tree)->v);
    printf("2max: %d\n", t_predecessor(tree, t_maximum(tree))->v);
}
