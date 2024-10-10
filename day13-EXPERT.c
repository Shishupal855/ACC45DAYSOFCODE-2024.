#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    int a=(y*100/x);
	    if(a>=50)
	    printf("yes");
	    else
	    printf("no");
	    printf("\n");
	    
	}
	return 0;
}

