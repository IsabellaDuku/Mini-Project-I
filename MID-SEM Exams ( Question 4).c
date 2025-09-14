#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int bp, total = 0;
	float average;
	int i;
	// Use for loop to get 4 systolic BP readings
	for (i = 1; i <= 4; i++) {
		printf("Enter systolic BP reading %d (mmHg):", i);
		scanf ("%d", &bp);
		total += bp;
	}
	// Calculate average 
	
	average = total /4.0;
	
	// Display results
	printf("\nTotal BP: %d mmHg\n", total);
	printf("Average BP: %.2f mmHg\n", average);
	return 0;
}
