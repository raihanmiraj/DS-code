#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *createNode(int data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left  =NULL;
    node->right=NULL;
    return node;
}
void printPreOrder(struct node * node){
    if(node==NULL)return;
printf("%d ", node->data);
printPreOrder(node->left);
printPreOrder(node->right);
}
void printInOrder(struct node * node){
    if(node==NULL)return;
    printInOrder(node->left);
    printf("%d ", node->data);
    printInOrder(node->right);
}
void printPostOrder(struct node *node){
    if(node==NULL)return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    printf("%d ", node->data);
}
int main(){
struct node *root = createNode(1);
root->left = createNode(2);
root->right = createNode(3);
root->left->left = createNode(4);
root->left->right = createNode(5);
// root->right->left = createNode(23);
// root->right->right = createNode(33);

printf("Pre Order\n");
printPreOrder(root);
printf("\nIn Order\n");
printInOrder(root);
printf("\nPost Order\n");
printPostOrder(root);

}