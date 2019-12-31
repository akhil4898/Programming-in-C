#include<stdio.h>
int sum(int, int);
int subtract(int, int);
int multiply(int, int)
int divide(int, int);
int main(viod) {		
	int first_no, second_no;
	char operator;
	printf("Enter the first_no and second_no \n");
	scanf("%d %d", &first_no, &second_no);
	printf("Enter the operator that you want to perform :\n"
			"ex : +, -, *, /\n");
	scanf("%c", &operator);
	sum(first_no, second_no);
	subtract(first_no, second_no);
	mutiply(first_no,second_no);
	divide(first_no,second_no);
	return 0;

}

int sum(int first_no, int second_no) {
	int sum = first_no + second_no;
	printf("%d", sum);
 	return 0;
}



int subtract(int first_no, int second_no) {
	int subtract = first_no - second_no;
	printf("%d", subtract);
	return 0;
}


int multiply(int first_no, int second_no) {
	int mutiply = first_no * second_no;
	printf("%d", multiply);	
	return 0;
}


int divide(int first_no, int second_no) {
	int divide = first_no / second_no;
	printf("%d", divide);
	return 0;
}




