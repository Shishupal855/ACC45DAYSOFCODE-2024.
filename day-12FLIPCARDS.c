#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    if(x>(n-x))
	        printf("%d\n",n-x);
	    else 
	        printf("%d\n",x);
	}
	return 0;
}
