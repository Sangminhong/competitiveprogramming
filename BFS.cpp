#include "pch.h"
#include <iostream>
#include <queue>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996)

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	c[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x <<" "<< endl;
		for (unsigned int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!c[y]) {
				q.push(y);
				c[y] = true;
			}

		}
	}


}

int main() {
	
	// 1�� 2�� �����մϴ�.
	a[1].push_back(2);
	a[2].push_back(1);

	// 1�� 3�� �����մϴ�.
	a[1].push_back(3);
	a[3].push_back(1);

	// 2�� 3�� �����մϴ�.
	a[2].push_back(3);
	a[3].push_back(2);

	// 2�� 4�� �����մϴ�.
	a[2].push_back(4);
	a[4].push_back(2);

	// 2�� 5�� �����մϴ�.
	a[2].push_back(5);
	a[5].push_back(2);

	// 3�� 6�� �����մϴ�.
	a[3].push_back(6);
	a[6].push_back(3);

	// 3�� 7�� �����մϴ�.
	a[3].push_back(7);
	a[7].push_back(3);

	// 4�� 5�� �����մϴ�.
	a[4].push_back(5);
	a[5].push_back(4);

	// 6�� 7�� �����մϴ�.
	a[6].push_back(7);
	a[7].push_back(6);

	bfs(1);



	return 0;
}