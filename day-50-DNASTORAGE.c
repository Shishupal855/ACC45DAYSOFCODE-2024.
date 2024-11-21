#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T--) {
	    int n;
	    scanf("%d", &n);
	    char x[n];
	     scanf("%s", x);
	    for(int i=0; i<n; i+=2) {
	    if (x[i]=='0' && x[i+1]=='0') {
	    printf("A");
	    } else if (x[i]=='1' && x[i+1]=='1') {
	    printf("G");
	    } else if (x[i]=='1' && x[i+1]=='0') {
	    printf("C");
	    } else if (x[i]=='0' && x[i+1]=='1') {
	    printf("T");
	    }
	    }
	    printf("\n");
	}
     	return 0;
}
