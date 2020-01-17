#include "task6.h"

ULL fib_iter(int K, int M, int N) {
	if (N == 1)
		return M;
	else
		return fib_iter(M, K + M, N - 1);
}

ULL fib2(int N){
	return fib_iter(0, 1, N);
}



