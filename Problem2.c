/*

Each new term in the Fibonacci sequence is generated by adding the 
previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not 
exceed four million, find the sum of the even-valued terms.

*/

#include <stdlib.h>
#include <stdio.h>

int main( void ) {
	long a = 1;
	long b = 1;
	long result = 0;
	long evens = 0;
	long sum = 0;

	while(result < 4000000) {
		result = a + b;

		a = b;
		b = result;

		if(result % 2 == 0) {
			evens++;
			sum += result;
			printf("[ %d ]\n", result);
		}
		else {
			printf("%d\n", result);
		}
	}
	
	printf("{ final fib: %d even count: %d }\n\n", result, evens);
	printf("{ Sum of all evens: %d }\n\n", sum);		
	
return 0;
}