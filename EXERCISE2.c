#include <stdio.h>
#include <string.h>

int main()
{
    char s[51],w[51];
    int n,a[51],i,j,k=0,l,found=0,t=0;
    printf("Please enter the string: ");
    gets(s);
    printf("Please enter the word that you want to find: ");
    gets(w);
    for(i=0;s[i];i++) //Checking the frequency of the word
    {
    	if(s[i]==' ')
    	{
    		a[k++]=i;
		}
	}
	a[k++]=i;
	j=0;
	for(i=0;i<k;i++) 
	{
		n=a[i]-j;
		if(n==strlen(w))
		{
			t=0;
			for(l=0;w[l];l++)
			{
				if(s[l+j]==w[l])
				{
					t++;
				}
			}
			if(t==strlen(w))
		    {
				found++;
		    }
		}
		j=a[i]+1;
	}
	 printf("The word %d finded %d times",w,found);
     return 0;
}
