#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *left;
struct Node *right;
};
struct Node *maketree()
{
int inputdata;
struct Node *p;
printf("Enter data or -1 to terminate\n");
scanf("%d", &inputdata);
if (inputdata == -1)
return NULL;
p = (struct Node *)malloc(sizeof(struct Node));
p->data = inputdata;
printf("Enter the left child of %d or -1 if no left child\n", inputdata);
p->left = maketree();
printf("Enter the right child of %d or -1 if no right child\n", inputdata);
p->right = maketree();
return p;
}
void mpreorder(struct Node *t)
{
if (t != NULL)
{
printf("%d->", t->data);
mpreorder(t->left);
mpreorder(t->right);
}
}
void mpostorder(struct Node *t)
{
if (t != NULL)

{
mpostorder(t->left);
mpostorder(t->right);
printf("%d->", t->data);
}
}
void inorder(struct Node *t)
{
if (t != NULL)
{
inorder(t->left);
printf("%d->", t->data);
inorder(t->right);
}
}
int main()
{
struct Node *root;
root = maketree();
printf("Preorder Traversal \n");
mpreorder(root);
printf("\n");
printf("Postorder Traversal \n");
mpostorder(root);
printf("\n");
printf("Inorder Traversal \n");
inorder(root);
printf("\n");
return 0;
}