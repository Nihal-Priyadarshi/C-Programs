#include<stdio.h>
#include<math.h>

int a[15]={0},N;

void nextvalue(k)
{
	int j;
	
	stept:
		a[k]=(a[k]+1)%(N+1);
		
		if(a[k]==0)
		return ;
		
		for(j=0;j<k;j++){
			if(a[k]==a[j] || abs(a[k]-a[j])==abs(k-j))
			goto stept;
		}

	return ;
}


void display(){
	int i;
	printf("\nOne of the solution for %d queens problem is :\n",N);
	for(i=0;i<N;i++){
		printf("%d\t",a[i]);
	}
}


void nqueens(int k)
{
	
	stepr:
	nextvalue(k);
	if(a[k]==0)
	return ;
	
	if(k==N-1){
	display();
     }
     
	else{
	
	nqueens(k+1);
}
   
    goto stepr;
}


void main()
{
	int i;
	printf("Enter number of Queens : ");
	scanf("%d",&N);
	nqueens(0);
	
	
}
