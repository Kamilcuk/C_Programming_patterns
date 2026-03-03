#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
        int data;
        struct TreeNode* left;
        struct TreeNode* right;
}TreeNode;

TreeNode* initTreeNode(){
        return NULL;
}

TreeNode* createTreeNode(int data){
        TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data = data;
        return newNode;
}

void insertTreeNode(TreeNode** root, int data){
        if(*root == NULL){
                *root = createTreeNode(data);
                return;
        }

}
int main(void){
        TreeNode* root = initTreeNode();
        insertTreeNode(&root, 16);
        printf("%d\n", root->data);
        free(root);
        return 0;
}
