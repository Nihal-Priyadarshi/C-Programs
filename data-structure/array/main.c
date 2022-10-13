#include<stdio.h>
#include<stdlib.h>


int display(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}

int insertatpos(int a[], int num){
	int x;
	printf("Enter the number to be inserted : ");
	scanf("%d",&x);
	int pos;
	printf("Enter the position to insert : ");
	scanf("%d",&pos);
	for(int i=num-1;i>=pos-1;i--)
		a[i+1] = a[i];
	a[pos-1] = x;
	num++;
	display(a,num);
}

int insertatfirst(int a[], int num){
	int x;
	printf("Enter the number to be inserted at first : ");
	scanf("%d",&x);
	for(int i=num-1;i>=0;i--)
		a[i+1] = a[i];
	a[0] = x;
	printf("\n\nThe number %d had insterted in the array\n\n");
	num++;
	display(a,num);
}
int insertatlast(int a[], int num){
	int x;
	printf("Enter the num to be inserted at the last : ");
	scanf("%d",&x);
	a[num] = x;
	printf("\n\nThe number %d had inserted in the array\n\n");
	num++;
	display(a,num);
}

int insertion(int a[], int num){
	int option;
AA:
	printf("\t\t--Insertion types--\n");
	printf("\n\t1.At first\n\t2.At last\n\t3.At a random index");
	printf("\n\nEnter your option : ");
	scanf("%d",&option);
	switch(option){
		case 1:
			system("clear");
			insertatfirst(a,num);
			break;
		case 2:
			system("clear");
			insertatlast(a,num);
			break;
		case 3:
			system("clear");
			insertatpos(a,num);
			break;
		default:
			system("clear");
			goto AA;
			break;
	}
}
int deletatfirst(int a[], int num){
	for(int i=0;i<num-1;i++)
		a[i] = a[i+1];
	num--;
	printf("\nThe first element in the arrray - deleted successfully :)\n\n");
	display(a,num);
}
int deletatlast(int a[], int num){
	num--;
	printf("\nThe Last element in the arrray - deleted successfully :)\n\n");
	display(a,num);
}
int deletatpos(int a[], int num){
	int pos;
	printf("Enter the position need to be deleted : ");
	scanf("%d",&pos);
	for(int i=pos-1;i<num-1;i++)
		a[i] = a[i+1];
	num--;
	printf("\nThe position %d element in the arrray - deleted successfully :)\n\n",pos);
	display(a,num);
}
int deletion(int a[], int num){
	int option;
BB:
        printf("\t\t--Deletion types--\n");
        printf("\n\t1.At first\n\t2.At last\n\t3.At a random index");
        printf("\n\nEnter your option : ");
        scanf("%d",&option);
        switch(option){
                case 1:
                        system("clear");
                        deletatfirst(a,num);
                        break;
                case 2:
                        system("clear");
                        deletatlast(a,num);
                        break;
                case 3:
                        system("clear");
                        deletatpos(a,num);
                        break;
                default:
                        system("clear");
                        goto BB;
                        break;
        }
}

int search(int a[],int num){
	int x,flag,index;
	printf("Enter the number to be searched : ");
	scanf("%d",&x);
	for(int i=0;i<num;i++){
		if(a[i]==x){
			flag = 0;
			index = i;
		}
	}
	if(flag == 0)
		printf("\nThe element %d found in the index %d",x,index);
	else{
		printf("\nThe element %d not found in the array\n\n");
		display(a,num);
	}
}

int main(){
	int num;
	int a[100],option;
	system("clear");
	printf("Enter the number of elements in the array : ");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		printf("Enter the element for A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	system("clear");
A:	
	printf("\t\t--Array operations--\n");
	printf("\n\t1.Insertion\n\t2.Deletion\n\t3.Searching");
	printf("\n\nEnter your option : ");
	scanf("%d",&option);
	switch(option){
		case 1:
			system("clear");
			insertion(a,num);
			break;
		case 2:
			system("clear");
			deletion(a,num);
			break;
		case 3:
			system("clear");
			search(a,num);
			break;
		default:
			system("clear");
			printf("invalid option, Please enter a valid one\n\n");
			goto A;
	}
	int opt;
op:
	printf("\n\nWana to try again (y(1)/n(2)): ");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			goto A;
			//system("main.exe");
			break;
		case 2:
			system("clear");
			printf("Thankyou Have a great day ");
			break;
		default:
			printf("Invalid input enter a valid one " );
			goto op;
			break;

	}
}
