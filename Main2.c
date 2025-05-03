#include"bst.h"
int main(){
    struct TreeNode*node=NULL;
    node=insert(node,50);
    node=insert(node,10);
    node=insert(node,56);
    node=insert(node,5);
    node=insert(node,65);
    node=insert(node,120);
    node=insert(node,95);
    inorder(node);
    node=delete(node,65);
    inorder(node);

}