#include "task6.h"

ULL fib_iter(ULL K, ULL M, int N) {
	if (N == 1)
		return M; 
	else
		return fib_iter(M, K + M, --N);
}

ULL fib2(int N){
	if (N <= 0)
		return 0;
	else if (N == 1)
		return 1;

	return fib_iter(0, 1, N--);
}



