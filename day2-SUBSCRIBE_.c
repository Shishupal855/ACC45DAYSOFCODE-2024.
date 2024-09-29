#include <stdio.h>

int main(void) {
    int t,n,x;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&n,&x);
        if(n<=6)
        printf("%d\n",x);
        else if (n>6 && n%6==0)
        printf("%d\n",(n/6)*x);
        else
        printf("%d\n",((n/6)+1)*x);
    }
	return 0;
}
 
