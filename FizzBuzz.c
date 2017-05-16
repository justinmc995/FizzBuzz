#include <stdio.h>

int main() {
	/* Do FizzBuzz */
	int i = 1;
	while (i <= 100) {
		if (i % 15 == 0) {printf("FizzBuzz");}
		else if (i % 3 == 0) {printf("Fizz");}
		else if (i % 5 == 0) {printf("Buzz");}
		else {printf("%d", i);}
		printf("\n");
		i = i + 1;
	}
	
	/* Exit */
	return 0;
}