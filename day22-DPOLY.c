#include <stdio.h>

int main(void) {
	
	int tests, terms, coeff, degree;
	
	scanf("%d", &tests);
	
	for (int t = 0; t < tests; t++) {
	    
	    scanf("%d", &terms);
	    degree = 0;
	    
	    // Iterating from highest to lowest power
	    for (int n = 0; n < terms; n++) {
	        
	        scanf("%d", &coeff);
	        
	        // Stopping on finding non-0 variable
	        if (coeff != 0) {
	            degree = n;
	        }
	    }
	    
	    // Reporting the degree
	    printf("%d\n", degree);
	}

}