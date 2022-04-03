#include "header.h"
#include "func_decl.h"

void list_func()
{
    struct CustomerDetails s;
	FILE *f;
	int i;
	if ((f = fopen("out.txt", "r")) == NULL)
		exit(0);
	system("cls||clear");
	printf("%-10s %-15s %-20s %-15s %-15s %-20s %-10s %-10s\n", "ROOM","NAME","ADDRESS","PHONENUMBER","NATIONALITY","EMAIL","PERIOD","ARRIVALDATE");

	for (i = 0; i < 125; i++)
		printf("-");
	while (fread(&s, sizeof(s), 1, f) == 1)
	{
		printf("\n%-10s %-15s %-20s %-15s %-15s %-20s %-10s %-10s", s.roomnumber, s.name, s.address, s.phonenumber, s.nationality, s.email, s.period, s.arrivaldate);
	}
	printf("\n");
	for (i = 0; i < 125; i++)
		printf("-");

	fclose(f);
    printf("\nPress 'Enter' to go back to home page");
    getchar();
}
