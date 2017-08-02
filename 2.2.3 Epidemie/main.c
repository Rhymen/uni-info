# include <stdio.h>
# include <stdlib.h>

void main() {
	int i,
		population = 2000, 
		sick = 10, 
		days = 25,
		immune = 0;
	int healthy = population - sick;
	float infectionRate = 0.6, 
		immnizationRate = 0.06;


	for (i = 1; i <= days; i++) {
		healthy -= infectionRate * (healthy * sick) / population;
		immune += immnizationRate * sick;
		sick = population - healthy - immune;
		printf("Tag:%3d Gesunde:%4d Kranke:%4d Immune:%4d\n", i, healthy, sick, immune);
	}

	system("pause");
}