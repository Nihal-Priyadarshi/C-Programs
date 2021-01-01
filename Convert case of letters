#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];
   int i,choose;
   printf("\nEnter a string : ");
   gets(s);
   printf("\nchoose any one option: \n");
   printf("1) convert to lowercase\n");
   printf("2) convert to uppercase\n");
   printf("3) convert uppercase letters to lowercase and vice versa\n");
   scanf("%d",&choose);
   switch(choose)
   {
   	case 1:
   		for (i = 0; s[i]!='\0'; i++)
		{
      	 if(s[i] >= 'A' && s[i] <= 'Z')
		   {
        	 s[i] = s[i] + 32;
		   }
   		}
   		printf("\nString in Lower Case = %s", s);
   		break;
   	case 2:
   		for (i = 0; s[i]!='\0'; i++)
		{
      	 if(s[i] >= 'a' && s[i] <= 'z')
		   {
        	 s[i] = s[i] - 32;
      	   }
   		}
   		printf("\nString in Upper Case = %s", s);
   		break;
   	case 3:
   		for (i = 0; s[i]!='\0'; i++)
   		{
   		if(s[i] >= 'A' && s[i] <= 'Z')
		   {
        	 s[i] = s[i] + 32;
		   }
   		else if(s[i] >= 'a' && s[i] <= 'z')
		   {
        	 s[i] = s[i] - 32;
      	   }
		}
		printf("\nstring in their opposite case = %s", s);
   		break;
   	case 4:
   		printf("you have chosen wrong option.");
   		break;
   } 
   return 0;
}
