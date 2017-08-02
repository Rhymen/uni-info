#include <stdio.h>
#include <stdlib.h>


void main() {
	int votesA = 100000,
		votesB = 80000,
		votesC = 20000,
		seatsA = 1,
		seatsB = 1,
		seatsC = 1,
		tempA,
		tempB,
		tempC,
		seats = 10,
		i;

	for (i = 0; i < seats; i++) {
		tempA = votesA / seatsA;
		tempB = votesB / seatsB;
		tempC = votesC / seatsC;

		if(tempA > tempB) {
			if(tempA > tempC) {
			   seatsA++;
			} else {
			   tempC++;
			}
		} else {
			if (tempB > tempC) {
			   seatsB++;
			} else {
			   tempC++;
			}
		}
	}

	printf("A: %d\nB: %d\nC: %d\n", seatsA, seatsB, seatsC);

	system("pause");
}
