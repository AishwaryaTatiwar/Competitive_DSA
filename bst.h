#include<stdlib.h>
#include<stdio.h>
struct TreeNode{
    int data;
    struct TreeNode*left;
    struct TreeNode*right;
};

struct TreeNode*createNode(){
    struct TreeNode*ptr;
    ptr=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    return ptr;
}

struct TreeNode* inorder(struct TreeNode*node){
    if(node!=NULL){
        inorder(node->left);
        printf("%d ",node->data);
        inorder(node->right);
    }
    return node;
}

struct TreeNode* preorder(struct TreeNode*node){
    if(node!=NULL){
        printf("%d ",node->left);
        preorder(node->left);
        preorder(node->right);
    }
    return node;
}

struct TreeNode* postorder(struct TreeNode*node){
    if(node!=NULL){
         preorder(node->left);
        preorder(node->right);
        printf("%d ",node->data);
    }
    return node;
}

struct TreeNode*search(struct TreeNode*node,int key){
    if(node==NULL){
        printf("Empty tree");
        return NULL;
    }
    else{
        if(key<node->data){
            return search(node->left,key);
        }
        else if(key>node->data){
            return search(node->right,key);
        }
        else if (key==node->data){
            return node;
        }
    }
}


struct TreeNode*insert(struct TreeNode*node,int key){
    if(node==NULL){
        node=createNode();
        if(node==NULL){
            printf("Allocation failed");
            return NULL;
        }
        else{
            node->data=key;
            node->left=node->right=NULL;
       }
    }
    else{
        if(key<node->data){
            node->left=insert(node->left,key);
        }
        else if(key>node->data){
            node->right=insert(node->right,key);
        }
    }
    return node;

}

struct TreeNode*inorderSuccessor(struct TreeNode*root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;

}

struct TreeNode*delete(struct TreeNode*node,int key){
    if(node==NULL){
        return NULL;
    }
    else if(key<node->data){
        node->left=delete(node->left,key);
    }
    else if(key>node->data){
        node->right=delete(node->right,key);
    }
    else{
        struct TreeNode*temp;
        if(node->left==NULL && node->right==NULL){
            temp=node;
            free(temp);
            return NULL;
        }
        else if(node->left==NULL && node->right!=NULL){
           temp=node;
           free(temp);
           node=node->right;
        }
        else if(node->left!=NULL && node->right==NULL){
           temp=node;
           free(temp);
           node=node->left;
        }
        else{
            temp=inorderSuccessor(node->right);
            node->data=temp->data;
            node->right=delete(node->right,temp->data);

        }
    }
    return node;
}