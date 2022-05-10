#include <stdio.h> 
#include <math.h>
//exercise "simple calculator"
//sum, substration, multiplication,divide
// with int and  float
int main(){
	char ope;
	int n1;
	int n2;
	printf ("what do you want? + - * / ");
	scanf("%c", &ope);
	printf ("give me the first numbers\n");
	scanf ("%d", &n1);
	printf ("give me the second number\n");
	scanf ("%d", &n2);
	switch (ope){
		case '+':
			printf("%d + %d =\t%d\n", n1, n2, n1 + n2);
			break;
		case '-' :
			printf ("%d - %d = \t%d \n", n1, n2, n1 - n2);
			break;
		case '*' :
			printf("%d * %d =\t%d\n", n1, n2, n1 * n2);
			break;
		case '/' :	
			printf("%d / %d =\t%d\n", n1, n2, n1 / n2);
			break;
			
	}
	
	return 0;
}



