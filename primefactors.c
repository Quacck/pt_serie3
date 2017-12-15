#include "stdlib.h"
#include "stdio.h"

int is_prime(int a){
	
	for (int i=2; i<=a/2; i++){
		if (a%i==0){
		return 0;
		}		

	}
	return 1;
}

int main(int argc, char * argv[]){
	int n = atoi(argv[1]);
	for (int i=2; i<=n/2; i++) {
		if (n%i==0 && is_prime(i)){
		printf("%d\n",i);	
		}

	
	}
	if (is_prime(n)) {
	printf("%d\n",n);
	}

return 0;
}



