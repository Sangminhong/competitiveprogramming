#include <iostream>
#include<queue>
#include<vector>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)

using namespace std;



int main()
{		
	int M, N;
	cin >> M>>N;

	
	static long long int prime_number[1000002];

	prime_number[1] = -1;
	prime_number[2] = 0;

	for (int i = 4; i <= N; i+=2) {
		prime_number[i] = -1;
	}
	
	
	for (long long int i = 2; i <= N; i++) {
		if (prime_number[i] == 0&&i>2) {
			for (long long int j = 0; i*i + i * j <=N; j+=2) {
				prime_number[i*i + i * j] = -1;
			}

		}
		if (M <= i && i <= N) {
			if (prime_number[i] == 0) {
				printf("%d\n", i); //endl은 속도가 느리다!!!
			}
		}
	}


	
	


	return 0;
}

