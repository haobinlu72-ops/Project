#include<iostream>
#include<cstdlib>
using namespace std;

const int N = 500005;
int num[N];
int sum[N];
int n;

int main() {
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}
	sum[0] = num[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + num[i];
	}

	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((sum[j] - sum[i] + num[i])*2 == (j-i+1) && j - i + 1 > result)
				result = j - i + 1;
		}
	}

	printf("%d", result);
	system("pause");
	return 0;
}
