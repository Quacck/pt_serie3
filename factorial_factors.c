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

unsigned long long ausrufezeichen(int a){
	unsigned long long produkt=1;
	for (int i=1; i<=a; i++){
		produkt*=i;
	}
	printf("a! = %llu\n",produkt);
	return produkt;
}

int main(int argc, char * argv[]){
	unsigned long long n = ausrufezeichen(atoi(argv[1]));
	while (n>1){
	for (int i=2; i<=n; i++) {
		if (n%i==0 && is_prime(i)){
		printf("%d\n",i);
		n=n/i;
		break;	
		}
	}

	
	}
return 0;
}

