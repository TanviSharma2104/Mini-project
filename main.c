#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct patient{
	int id;
	char patientName[50];
	char patientAddress[50];
	char disease[50];
	char date[12];
}p;

struct doctor{
	int id;
	char name[50];
	char address[50];
	char specialize[50];
	char date[12];

}d;

File *fp;

int main(){
	int ch;

	while(1){
		system("cls");
		printf("<== Hospital Management System ==>\n");
		printf("1.Admit Patient\n");
		printf("2.Patient List\n");
		printf("3.Discharge Patient\n");
		printf("4.Add Doctor\n");
		printf("5.Doctors List\n");
		printf("0.Exit\n\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);

		switch(ch){
			case 0;
				exit(0);
			case 1:
				admitPatient();
				break;
			case 2:
				patientList();
				break;
			case 3:
				dischargePatient();
				break;
			case 4:
				addDoctor();
				break;
			case 5:
				doctorList();
				break;
			default:
				printf("Invalid choice!!...\n\n");


		}
		printf("\n\nPress Any Key To Continue...");
		getch();


	}
	return 0;
}


void admitPatient(){
	char mydate[12];
	time_t t=time(null);
	struct tm tm=*localtime(&t);
	sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	strcpy(p.date,mydate);
	
	fp=fopen("patient.txt","ab");

	printf("Enter Patient id: ");
	scanf("%d",&p.id);

	printf("Enter Patient name: ");
	fflush(stdin);
	gets(p.patientName);

	printf("Enter Patient Address: ");
	fflush(stdin);
	gets(p.patientAddress);

	printf("Enter Patient Disease: ");
	fflush(stdin);
	gets(p.disease);

	printf("\nPatient Added Successfully");

	fwrite(&p, sizeof(p),1,fp);
	fclose(fp);

}
