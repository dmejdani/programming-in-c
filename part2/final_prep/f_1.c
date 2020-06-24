#include <stdio.h>

int main() {
	int n, m;
	char c;

	scanf("%d %d %c", &n, &m, &c);

	int i, j;

	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			if ((i == 0 ) || (i == n - 1)) {
				if ((j < m - 1) && (j > 0)) {
					printf("%c", c);
				}

				else {
					printf(" ");
				}

				continue;
			}

			else if ((j == 0) || (j == m - 1)) {
				if ((i < n - 1) && (i > 0)) {
					printf("%c", c);
				}

				else {
					printf(" ");
				}

				continue;
			}

			else {
				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}