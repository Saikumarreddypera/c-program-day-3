#include <stdio.h>
#include <math.h>

// function to check if a number - n is perfect or not
// returns 1 if n is perfect
// returns 0 if n is not perfect
int isPerfect(long long int n) {

	long long int dsum = 0;	// sum of divisors
	long long int i;

	// the loop finds all diviors of n
	for (i = 1; i <= sqrt(n); ++i) {
		if (n % i == 0) {

			if (i == n / i) {
				dsum += i;
			}
			else {
				dsum += i;
				dsum += n / i;
			}

		}
	}

	// we are only counting proper diviors of n (less than n)
	// so we need to substract n from the final sum
	dsum = dsum - n;

	if (dsum == n) return 1;
	else		return 0;

}

int main() {

	long long int n, i, temp;
	printf("Enter n: ");
	scanf("%d", &n);

	i = 1;

	// iterating all numbers from 1
	// and checking if the number is perfect or not
	while (n > 0) {

		if (isPerfect(i) == 1) {
			printf("%d ", i);
			n = n - 1;
		}
		i = i + 1;

	}

	printf("\n");

}
