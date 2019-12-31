#include<stdio.h>
int sample(int);
int main(){
	int n = 0, x;
	printf("Enter the value of n = \n");
	scanf("%d", &n);
	x = sample(n);
	printf("The value of s is = %d \n", x );
}

int sample(int n){
	int i =0, s = 0, r, p;
	while(n > 0){
		r = n % 10;
		printf("Before The value of r = %d\n", r);
		p = 8 ^ i;
		printf("Before The value of p = %d\n", p);
		s = s + p * r;
		printf("Before The value of i = %d\n", i);
		printf("Before The value of s = %d\n", s);
		i++;
		n = n / 10;
		printf("-----------------------------------");
		printf("After The value of i = %d\n", i);
		printf("After The value of r = %d\n", r);
		printf("After The value of p = %d\n", p);
		printf("After The value of n = %d\n", n);
	}
	return s;
}


