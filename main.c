/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	float npr, usd, inr, eur, jpy;
	FILE *file;

	// moltal value
	float rate_usd = 0.0075;
	float rate_inr = 0.60;
	float rate_eur = 0.0069;
	float rate_jpy = 1.10;


	printf("Enter amount in NPR: ");
	if (scanf("%f", &npr) != 1) {
		printf(" invalid input.\n");
		return 1;
	}


	usd = npr * rate_usd;
	inr = npr * rate_inr;
	eur = npr * rate_eur;
	jpy = npr * rate_jpy;


	printf("\nConverted Amounts:\n");
	printf("USD: %.2f\n", usd);
	printf("INR: %.2f\n", inr);
	printf("EUR: %.2f\n", eur);
	printf("JPY: %.2f\n", jpy);

	// file ma save garna
	file = fopen("conversion_history.txt", "a");  // append mode ma garnu parxa
	if (file == NULL) {
		perror("khulena feri try");
		return 1;
	}

	fprintf(file, "NPR: %.2f => USD: %.2f, INR: %.2f, EUR: %.2f, JPY: %.2f\n",
	        npr, usd, inr, eur, jpy);
	fclose(file);

	printf("\nb Conversion saved to 'conversion_history.txt'\n");

	return 0;
}
