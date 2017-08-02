# include <stdio.h>
# include <stdlib.h>

# define STATION_COUNT = 77;

struct weatherstation {
	int id;
	char name[30];
};

struct weathermeasurement {
	int id;
    char date[10];
    int quality;
    float min5cm;
    float min2m;
    float avg2m;
    float max2m;
    float relHumidity;
    int avgWindForce;
    float maxWindForce;
    float sunshine;
    float avgClouded;
    float rainfall;
    float avgAirPressure;
};


void loadStations(char path[100], struct weatherstation* pStation) {
	FILE *file = fopen(path, "r");

	do {
		fscanf(file, "%d;%s", &(pStation->id), &(pStation->name));

		pStation++;
	} while(!feof(file));
	
	fclose(file);
}

void printStations(struct weatherstation stations[], int length) {
	int i;

	for (i = 0; i < length; i++) {
		printf("%d: %s\n", stations[i].id, stations[i].name);
	}
}

struct weathermeasurement searchMeasurement(char path[100], struct weathermeasurement *pMeasurement, int searchId, char searchDate[10]) {
	FILE *file = fopen(path, "r");

	do {
		fscanf(file, "%d;%10s;%d;%f;%f;%f;%f;%f;%d;%f;%f;%f;%f;%f", &pMeasurement->id,
                                                                &pMeasurement->date,
                                                                &pMeasurement->quality,
                                                                &pMeasurement->min5cm,
                                                                &pMeasurement->min2m,
                                                                &pMeasurement->avg2m,
                                                                &pMeasurement->max2m,
                                                                &pMeasurement->relHumidity,
                                                                &pMeasurement->avgWindForce,
                                                                &pMeasurement->maxWindForce,
                                                                &pMeasurement->sunshine,
                                                                &pMeasurement->avgClouded,
                                                                &pMeasurement->rainfall,
                                                                &pMeasurement->avgAirPressure);
	} while(!feof(file) && searchId != pMeasurement->id && searchDate != pMeasurement->date);
	
	fclose(file);
}

void printMeassurement(struct weathermeasurement *pMeasurement) {
	printf( "\n");
    printf( "Id:                        %s\n", pMeasurement->id);
    printf( "Datum:                        %s\n", pMeasurement->date);
    printf( "Qualitaet:                    %5d\n", pMeasurement->quality);
    printf( "Min 5cm:                      %5.1f\n", pMeasurement->min5cm);
    printf( "Min 2m:                       %5.1f\n", pMeasurement->min2m);
    printf( "Mittel 2m:                    %5.1f\n", pMeasurement->avg2m);
    printf( "Max 2m:                       %5.1f\n", pMeasurement->max2m);
    printf( "Relative Feuchte:             %5.1f\n", pMeasurement->relHumidity);
    printf( "Mittlere Windstaerke:         %5d\n", pMeasurement->avgWindForce);
    printf( "Maximale Windgeschwindigkeit: %5.1f\n", pMeasurement->maxWindForce);
    printf( "Sonnenschein:                 %5.1f\n", pMeasurement->sunshine);
    printf( "Mittlerer Bedeckungsgrad:     %5.1f\n", pMeasurement->avgClouded);
    printf( "Niederschlagshoehe:           %5.1f\n", pMeasurement->rainfall);
    printf( "Mittlerer Luftdruck:          %5.1f\n", pMeasurement->avgAirPressure);
}

void main() {
	struct weatherstation weatherstations[77];
	struct weathermeasurement measurement;
	int searchId;
	char searchDate[10];

	loadStations("Wetterstationen.txt", weatherstations);
	printStations(weatherstations, 77);

	printf("ID: ");
	scanf("%d", &searchId);
	fflush(stdin);
	printf("Date: ");
	scanf("%s", &searchDate);

	searchMeasurement("Wettermessungen.txt", &measurement, searchId, searchDate);
	printMeassurement(&measurement);

	system("pause");
}