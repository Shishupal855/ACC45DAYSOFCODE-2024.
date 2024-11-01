#include <stdio.h>

int main(void) {
	int t; 
	scanf("%d", &t);
	while (t--){
	    int t,a,b,c,d;
	
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a<=c && b<=d)
	    printf("POSSIBLE\n");
	    else
	    printf("IMPOSSIBLE\n");
	}
	return 0;
}

