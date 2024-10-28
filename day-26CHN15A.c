#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,b,count=0;
        scanf("%d%d",&n,&b);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        a[i]=a[i]+b;
        for(int i=0;i<n;i++){
        if(a[i]%7==0)
        count++;}
        printf("\n%d",count);
    }
	return 0;
}



