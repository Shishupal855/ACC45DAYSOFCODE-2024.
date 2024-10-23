#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int h,x,y;
	    scanf("%d %d %d", &h, &x, &y);
	    int r = h-y;
	    if( r%x == 0)
	    {
	        printf("%d\n", r/x + 1);
	    }
	    else
	    {
	        printf("%d\n",r/x +2);
	    }
	}
	return 0;
}
