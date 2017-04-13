#include <stdio.h>
#include <math.h>
#include <time.h>

#define INF 1000000000
#define LOCAL

void daffodil() {
	for (int i = 100; i <= 999; i++) {
		int s = 0;
		int number = i;
		for (int j = 0; j < 3; j++) {
			int digit = number % 10;
			s += digit * digit * digit;
			number /= 10;
		}
		if (s == i) printf("%d\n", i);
	}
}

void hanxin() {
	int kcase = 0, a, b, c, n;
	FILE *fin, *fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	// freopen("data.in", "r", stdin);
	while(fscanf(fin, "%d", &a) == 1) {
		// scanf("%d", &a);
		fscanf(fin, "%d", &b);
		fscanf(fin, "%d", &c);
		#ifdef LOCAL
		fprintf(fout, "%d %d %d\n", a, b, c);
		#endif
		int found = 0;
		for(int i = 10; i <=100; i++) {
			if ((i-a)%3 == 0 && (i-b)%5 == 0 && (i-c)%7 == 0) {
				fprintf(fout, "Case %d: %d\n", ++kcase, i);
				found = 1;
				break;
			}
		}
		if (found == 0) fprintf(fout, "Case: %d: No answer\n", ++kcase);
	}
	// fclose(fin);
	fclose(fout);
}

void triangle() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		int noOfSpace = n - i;
		for (int x = 0; x < noOfSpace; x++)
			printf(" ");
		for (int z = 0; z < 2 * n - 1 - 2 * noOfSpace; z++)
			printf("#");
		for (int y = 0; y < noOfSpace; y++)
			printf(" ");
		printf("\n");
	}
}

void subsequence() {
	int kcase = 0;
	long long n, m;
	FILE *fin, *fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	while(fscanf(fin, "%lld", &n) == 1) {
		fscanf(fin, "%lld", &m);
		#ifdef LOCAL
		fprintf(fout, "%lld %lld\n", m, n);
		#endif
		if (n == 0 && m == 0) break;
		double s = 0.0;
		for (int i = n; i <= m; i++) {
			s += 1.0 / i * 1.0 / i;
		}
		printf("Case %d: %.5f\n", ++kcase, s);
	}
}

void decimal() {
	int kcase = 0, a, b, c;
	FILE *fin, *fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	// freopen("data.in", "r", stdin);
	while(fscanf(fin, "%d", &a) == 1) {
		// scanf("%d", &a);
		fscanf(fin, "%d", &b);
		fscanf(fin, "%d", &c);
		if (a == b && b == c && c == 0) break;
		printf("%.*f\n", c, (double)a/b);
	}
	fclose(fin);
	fclose(fout);
}

void permutation() {
	for (int i = 123; i <= 987/3; i++) {
		int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		int numbers[3] = {i, i*2, i*3};
		bool repeat = false;
		for (int j = 0; j < 3; j++) {
			int number = numbers[j];
			int x = number/100, y = number%10, z = number/10%10;
			if (x != 0 && y != 0 && z != 0) {
				if (count[number/100] == 0)
					count[number/100] = 1;
				else {
					// printf("R %d %d %d\n", i, 2*i, 3*i);
					repeat = true;
					break;
				}
				if (count[number%10] == 0)
					count[number%10] = 1;
				else {
					// printf("R %d %d %d\n", i, 2*i, 3*i);
					repeat = true;
					break;
				}
				if (count[number/10%10] == 0)
					count[number/10%10] = 1;
				else {
					// printf("R %d %d %d\n", i, 2*i, 3*i);
					repeat = true;
					break;
				}
			} else {
				repeat = true;
				break;
			}
		}
		if (repeat) continue;
		else printf("%d %d %d\n", i, i*2, i*3);
	}
}

int main() {
	// Practices
	// daffodil();
	// hanxin();
	// triangle();
	// subsequence();
	// decimal();
	permutation();
	// 7744
	// for (int i = 0;; i++)
	// {
	// 	int n = i * i;
	// 	if (n < 10000) continue;
	// 	if (n > 99999) break;
	// 	int hi = n / 100;
	// 	int lo = n % 100;
	// 	if (hi/10 == hi%10 && lo/10 == lo%10) printf("%d\n", n);
	// }

	// factorial and System time
	// int n, S = 0;
	// const int MOD = 1000000;
	// scanf("%d", &n);
	// for (int i = 1; i <= n; i++) {
	// 	int factorial = 1;
	// 	for (int j = 1; j <= i; j++) {
	// 		factorial = (factorial * j) % MOD;
	// 	}
	// 	S = (S + factorial) % MOD;
	// }
	// printf("%d\n", S % MOD);
	// printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);

	// Input and output with redirection
	// #ifdef LOCAL
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	// int x, n = 0, min = INF, max = -INF, s = 0;
	// while(scanf("%d", &x) == 1) {
	// 	s += x;
	// 	n ++;
	// 	if (x < min) min = x;
	// 	if (x > max) max = x;
	// }
	// printf("%d %d %.3f\n", min, max, (double)s/n);

	// Input and output with file in and out
	// FILE *fin, *fout;
	// fin = fopen("data.in", "rb");
	// fout = fopen("data.out", "wb");
	// int x, n = 0, min = INF, max = -INF, s = 0;
	// while(fscanf(fin, "%d", &x) == 1) {
	// 	s += x;
	// 	n ++;
	// 	if (x < min) min = x;
	// 	if (x > max) max = x;
	// }
	// fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
	// fclose(fin);
	// fclose(fout);

	return 0;
}