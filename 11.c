#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define COUNT 10

struct node {
  int data;
  struct node *left,*right;
};

struct node * create(){
  struct node * newNode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter Data for the node(Enter -1 for no node)\n");
  int x;
  scanf("%d",&x);
  if(x==-1){
    return 0;
  }
  newNode->data=x;
  printf("\nEnter left child of %d",x);
  newNode->left=create();
  printf("\nEnter right child of %d",x);
  newNode->right=create();
  return newNode;
}

void display(struct node * root, int space){
  if(root==NULL){
    return;
  }
    space += COUNT;
    display(root->right, space);
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
    display(root->left, space);
}

void print(struct node *root)
{
   display(root, 0);
}

struct node *deleteLeafNodes(struct node * root,int x){
  if (root == NULL) {
      return NULL;
   }
   root->left = deleteLeafNodes(root->left, x);
   root->right = deleteLeafNodes(root->right, x);
   if (root->data == x && root->left == NULL && root->right == NULL) {
      return NULL;
   }
   return root;
}

bool search(struct node *root,int key){
  if(root==NULL){
    return false;
  }

  if(root->data==key){
    return true;
  }
  bool l=search(root->left,key);
  if(l){
    return true;
  }

  bool r=search(root->right,key);
  if(r){
    return r;
  }
}
int main(){
  struct node *root;
  root=NULL;
  root=create();
  print(root);
  int key;
  printf("Enter value to be deleted from leafnode: ");
  scanf("%d",&key);
  deleteLeafNodes(root,key);
  print(root);

  int s;
  printf("Enter a key to be searched: ");
  scanf("%d",&s);


  if(search(root,s)){
    printf("\nElement found");
  }
  else{
    printf("\nElement not found");
  }

}
