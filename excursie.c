#include <stdio.h>

#define NMAX 1001

char f[NMAX];

int main()
{
	unsigned short n, a, b, count;
	unsigned s, d;

	scanf("%hu", &n);

	if (n < 5 || n*(n+1)/2 % 3) printf("NU");
	else {
		s = n*(n+1)/6; 

		b = count = n;

		while (count) {
			a = b;
			d = s-a; 

			printf("%hu", a); f[a] = 1; count--;

			while (f[b] == 1 && b > 0) b--;

			while (d > b) {
				a = b;
				d = d - a;

				printf(" %hu", a); f[a] = 1; count--;

				while (f[b] == 1 && b > 0) b--;
			}

			if (d > 0) { printf(" %hu\n", d); f[d] = 1; count--; }
			else printf("\n");

			while (f[b] == 1 && b > 0) b--;
		}
	}

	return 0;
}
// scor 100
