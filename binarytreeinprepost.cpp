#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * left;
    struct node * right;
};
struct node*  newnode(int data) {
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->left = NULL;
newnode->right = NULL;
};

void inOrder(struct node * node){
if(node==NULL)return;
inOrder(node->left);
printf("%d ", node->data);
inOrder(node->right);
}
void preOrder(struct node * node){
if(node==NULL)return;
printf("%d ", node->data);
preOrder(node->left);
preOrder(node->right);
}
void postOrder(struct node* node){
if(node==NULL)return;
postOrder(node->left);
postOrder(node->right);
printf("%d ", node->data);
}
int main(){
	struct node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);

	printf("\nPreorder traversal of binary tree is \n");
	preOrder(root);

	printf("\nInorder traversal of binary tree is \n");
	inOrder(root);

	printf("\nPostorder traversal of binary tree is \n");
	postOrder(root);

	getchar();
	return 0;
}