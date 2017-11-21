#include <stdio.h>
#include <stdlib.h>

#define N 93
typedef unsigned long long int t_type;


t_type fib(t_type n, t_type* vector){

	if(n <= 1){
		return n;
	}

	else if(vector[n-1] != 0){
		return vector[n-1];
	}

	else{
		vector[n-1] = fib(n-1, vector) + fib(n-2, vector);
		return vector[n-1];
	}
}

int main(){
	t_type n, aws, size;
	t_type *vector = (t_type*)calloc(N, sizeof(t_type));

	do{
		scanf("%llu", &n);
		if(n > N)printf("Choose a smaller number!\n");
	}while(n > N);

	printf("Processing...\n");
	size = 0;
	aws = fib(n, vector);
	printf("Fibonacci of %llu = %llu\n", n, aws);
	
	free(vector);

	return 0;
}
