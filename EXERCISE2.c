//KANTZARIS THEOFANIS
//1117-2020-00062
#include <stdio.h>
#include <string.h>

int main()
{
    char s[51],w[51];
    int n,a[51],i,j,k=0,l,found=0,t=0;
    printf("Parakalw eisagete thn protash: ");
    gets(s);
    printf("Parakalw eisagete thn lejh pou thelete na brethei: ");
    gets(w);
    for(i=0;s[i];i++) //diadikasia gia na broume poses forew brethike h lejh
    {
    	if(s[i]==' ')
    	{
    		a[k++]=i;
		}
	}
	a[k++]=i;
	j=0;
	for(i=0;i<k;i++) //diadikasia gia na broume poses fores brethike h lejh
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
	 printf("H lejh '%s' brethike %d fores",w,found);
     return 0;
}
