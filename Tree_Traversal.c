#include<stdio.h>  
#include<malloc.h> 
struct node 
{ 
	int data; 
	struct node *left; 
	struct node *right; 
}; 
struct node *tree=NULL;
void create_tree(struct node *); 
struct node *insertElement(struct node *, int); 
void preorderTraversal(struct node *); 
void inorderTraversal(struct node *);
void postorderTraversal(struct node *);  
struct node *deleteElement(struct node *, int);
int main() 
{ 
	int option, val; 
	struct node *ptr;
	do
	{
		printf("\n _________________MAIN MENU_____________________________ ");  
		printf("\n _______________________________________________________ "); 
		printf("\n 1. Insert Element");  
		printf("\n 2. Preorder Traversal");  
		printf("\n 3. Inorder Traversal");  
		printf("\n 4. Postorder Traversal");
		printf("\n 5. Delete an element");
		printf("\n 6. Exit");  
		printf("\n\n Enter your option : ");  
		scanf("%d", &option);  
		switch(option)  
		{
			case 1:    
				printf("\n Enter the value of the new node : ");    
				scanf("%d", &val);    
				tree = insertElement(tree, val);    
				break;   
			case 2:    
				printf("\n The elements of the tree are : \n");    
				preorderTraversal(tree);    
				break;   
			case 3:    
				printf("\n The elements of the tree are : \n");    
				inorderTraversal(tree);    
				break;   
			case 4:    
				printf("\n The elements of the tree are : \n");    
				postorderTraversal(tree);    
				break;
			case 5:    
				printf("\n Enter the element to be deleted : ");    
				scanf("%d", &val);
				tree = deleteElement(tree, val);    
				break;
			} 
	}
	while(option!=6); 
	return 0;  
}
struct node *insertElement(struct node *tree, int val)
{
	struct node *ptr, *nodeptr, *parentptr; 
	ptr = (struct node*)malloc(sizeof(struct node)); 
	ptr->data = val;
	ptr->left = NULL;
	ptr->right = NULL;
	if(tree==NULL) 
	{  
		tree=ptr;  
		tree->left=NULL;
		tree->right=NULL;
	} 
	else 
	{  
		parentptr=NULL;  
		nodeptr=tree;  
		while(nodeptr!=NULL)  
		{   
			parentptr=nodeptr;   
			if(val<nodeptr->data)
				nodeptr=nodeptr->left;
			else    
				nodeptr = nodeptr->right;
		}  
		if(val<parentptr->data)
			parentptr->left = ptr;
		else   
			parentptr->right = ptr;
	} 
return tree; 
} 
void preorderTraversal(struct node *tree) 
{
	if(tree != NULL) 
	{  
		printf("%d\t", tree->data);
		preorderTraversal(tree->left);
		preorderTraversal(tree->right);
	}

}
void inorderTraversal(struct node *tree)
{
	if(tree != NULL)
	{
		inorderTraversal(tree->left);
		printf("%d\t", tree->data);
		inorderTraversal(tree->right);
	}

}
void postorderTraversal(struct node *tree)
{
	if(tree != NULL)
	{
		postorderTraversal(tree->left);
		postorderTraversal(tree->right);
		printf("%d\t", tree->data);
	}

}
struct node *deleteElement(struct node *tree, int val)
{
	struct node *cur, *parent, *suc, *psuc, *ptr;
	if(tree->left==NULL)
	{
		printf("\n The tree is empty ");
		return(tree);
	}
	parent = tree;
	cur = tree->left;
	while(cur!=NULL && val!= cur->data)
	{
		parent = cur;
		cur = (val<cur->data)? cur->left:cur->right;
	}
	if(cur == NULL) 
	{  
		printf("\n The value to be deleted is not present in the tree");  
		return(tree);  
	} 
	if(cur->left == NULL)
		ptr = cur->right;
	else if(cur->right == NULL)
		ptr = cur->left;
	else 
	{    
		psuc = cur;  
		cur = cur->left;
		while(suc->left!=NULL)
		{   
			psuc = suc;   
			suc = suc->left;
		}  
		if(cur==psuc)  
		{
			suc->left = cur->right;
		}
		else
		{
			suc->left = cur->left;
			psuc->left = suc->right;
			suc->right = cur->right;
		}  
		ptr = suc; 
	}  
	if(parent->left == cur)
		parent->left=ptr;
	else  
		parent->right=ptr;
	free(cur); 
	return tree; 
}