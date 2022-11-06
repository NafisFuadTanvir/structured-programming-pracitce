#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];	
	int i;
	
	printf("Enter the string: ");
    gets(a); 
	for(i=0;a[i]!= NULL;i++)
	{
		 
		if(i==0)
		{
			if((a[i]>='a' && a[i]<='z'))
				a[i]=a[i]-32;  
			continue;  
    	}
		if(a[i]==' ')
		{
			 
			i++;
			 
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;  
				continue;  
			}
		}
		else
        {
               if(a[i]>='A' && a[i]<='Z')
				  a[i]=a[i]+32;  
            }
               }
	    printf("now the string is: %s\n",a);
	
	return 0;
}