#include <stdio.h>

int add (int a, int b);
int subtract (int a, int b);
int mutiply (int a, int b);
float devide (int a, int b);

void main (){
	printf("Calculation: ");
	printf("\n===============");
	int num1, num2;
	printf("\n1. Input Number: ");
	scanf("%d %d", &num1, &num2);
	
	int result = add(num1 ,num2);
	printf("%d", result);
	
	int result1 = subtract(num1, num2);
	printf("%d", result1);
	
	int result2 = mutiply(num1, num2);
	printf("%d", result2);
	
	int result3 = devide(num1, num2);
	printf("%d", result3);
	 
	printf("\n6. Exit");
}

int add (int a, int b){
	printf("2. Calculation Sum: ");
	return (a + b);	
}
int subtract (int a, int b){
	printf("\n3. Calculation Substraction: ");
	return (a - b);
}
int mutiply (int a, int b){
	printf("\n4. Calculation Multiplication: ");
	return (a * b);
}
float devide (int a, int b){
    printf("\n5. Calculation Division: ");
    return (a / b);
}



