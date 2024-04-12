#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime(int num){
	int x;
	for(x = 2; x <= (num / 2); x = x + 1){
		if((num % x) == 0){
			return false;
		}//if
	}//for
	return true;
}//prime

int main(int argc, int *argv[]){
	if (argc > 2){
		printf("Too many args\n");
		return 1;
	} else if (argc < 1){
		printf("Too few args\n");
	} else{
		int arg1 = argv[1];
		bool isPrime = prime(arg1);
		if (isPrime == true){
			printf("number is prime\n");
		}else{
			printf("Number is not prime\n");
		}//iner if
	}//else
	return 0; 
}//main