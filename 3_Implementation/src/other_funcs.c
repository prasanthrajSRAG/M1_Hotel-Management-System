#include "header.h"
#include "func_decl.h"

int main();

void delete_func(char *roomnumber)
{
    struct CustomerDetails s;
	FILE *f, *t;
	int i = 1;
	if ((t = fopen("temp.txt", "w")) == NULL)
		exit(0);
	if ((f = fopen("out.txt", "r")) == NULL)
		exit(0);
	while (fread(&s, sizeof(s), 1, f) == 1)
	{
		if (strcmp(s.roomnumber, roomnumber) == 0)
		{
			i = 0;
			continue;
		}
		else
			fwrite(&s, sizeof(s), 1, t);
	}
	if (i == 1)
	{
		printf("\n\nRecords of Customer is not found!!\nThank you\nGoing back to login page");
		// remove("E:/file.txt");
		// rename("E:/temp.txt","E:/file.txt");
		getchar();
		impfunc(stdin);
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("out.txt");
	rename("temp.txt", "out.txt");
	printf("\nCustomer is successfully removed from our database....");
    printf("\nPress 'Enter' to go back to main menu");
	getchar();
	impfunc();
}

void search_func(char *roomnumber)
{
    struct CustomerDetails s;

	FILE *f;
	int flag = 1;
	f = fopen("out.txt", "r+");
	if (f == 0)
		exit(0);
    printf("COMPARING ROOMNUMBER: %s\n", roomnumber);
	while (fread(&s, sizeof(s), 1, f) == 1)
	{
		if (strcmp(s.roomnumber, roomnumber) == 0)
		{
			flag = 0;
			printf("\n\tRecord Found\n");
			printf("\n\t        Name: %s", s.name);
			printf("\n\t Room Number: %s", s.roomnumber);
			printf("\n\t     Address: %s", s.address);
			printf("\n\t Nationality: %s", s.nationality);
			printf("\n\tPhone number: %s", s.phonenumber);
			printf("\n\t       Email: %s", s.email);
			printf("\n\t      Period: %s", s.period);
			printf("\n\tArrival date: %s", s.arrivaldate);
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		printf("\nRecords of customer could not be found!");
	}
    printf("\nPress 'Enter' to go back to main menu");
	getchar();
	impfunc();
	fclose(f);
}
