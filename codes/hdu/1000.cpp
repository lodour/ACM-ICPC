#include <iostream>
#include <cstdio>
using namespace std;

int main() {
#ifdef MANGOGAO
	freopen("data.in", "r", stdin);
#endif

	int a, b;
	while (~scanf("%d%d", &a, &b))
		printf("%d\n", a + b);

	return 0;
}