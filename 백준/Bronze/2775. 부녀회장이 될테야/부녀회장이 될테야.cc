#include <cstdio>
void apart(int k, int n,int arr[]) {

	for (int i = 0; i < k; i++) {
		int temp = 0;
		int j = 0;
		while (j<n) {
			temp += arr[j];
			arr[j] = temp;
			j++;
		}
	}
}

int main(void) {

	int t;
	int arr[14]={0,};

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {

		int k, n;
		scanf("%d %d", &k, &n);

		for (int j = 0; j < n; j++) 
			arr[j] = j+1;

			apart(k, n, arr);
			printf("%d\n", arr[n - 1]);
	}

	return 0;
}