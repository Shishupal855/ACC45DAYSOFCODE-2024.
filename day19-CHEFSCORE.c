#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,x,y,v;
	    scanf("%d %d %d",&n,&x,&y);
	    
	    if(y%x==0 || y==0)
	        printf("yes\n");
	   else
	    printf("no\n");
	}
	return 0;
}

	    
	  