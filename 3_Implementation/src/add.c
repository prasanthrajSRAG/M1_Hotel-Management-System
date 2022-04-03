#include "header.h"
#include "func_decl.h"

void add_func(struct CustomerDetails details)
{
	FILE *f;
	f = fopen("out.txt", "a+");
	if (f == 0)
	{
		f = fopen("out.txt", "w+");
		system("cls||clear");
		printf("Wait a minute while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getchar();
	}
    fwrite(&details, sizeof(details), 1, f);
    impfunc();
    printf("\n\t1 Booking is successfull\n");
    printf("\nPress 'Enter' to go back to home page");
    getchar();
	fclose(f);
}
