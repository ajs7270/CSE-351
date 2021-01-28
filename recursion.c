#include <stdio.h>
int mystery2(int n);

int main(){
	for(int i = 0; i< 1000; i++){
		printf("%dth : %d\n",i,mystery2(i));
	}

	return 0;
}


int mystery2(int n) {
	if (n <= 1) {
		return 2 * n;
	} else if (n < 300) {
		for (int j = n * n; j > n * n / 2; j--) {
			//print("idk what to put in this print statement");
		}
		return mystery2(n / 2);
	} else if (n > 5000) {
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (i >= 3) {
				break;
			} else {
				res += mystery2(n / 3);
			}
		}
		return res;
	} else {
		return mystery2(n / 2) * mystery2(n / 3);
	}
}
