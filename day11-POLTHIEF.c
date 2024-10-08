#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            printf("%d \n",(x-y));
        }
        else if(x<y)
        {
            printf("%d \n",(y-x));
        }
        else
        printf("0 \n");
        t--;
    }
	// your code goes here
	return 0;
}



       
        