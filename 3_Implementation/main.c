#include "header.h"
#include "func_decl.h"

void impfunc() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main()
{ 
	int var = 0;
	time_t t;
	time(&t);
	char choice;

	int tries = 0;
	char username[10];
	char password[10];

	do
	{
		system("cls||clear");
		printf("\t*********  BANYANIN LOGIN CREDINTIALS  *********\n\n");
		printf("\tPROVIDE YOUR USERNAME: ");
		fgets(username, sizeof(username), stdin);
		printf("\tPROVIDE YOUR PASSWORD: ");
		fgets(password, sizeof(password), stdin);
        if (login(username, password)) {
			printf("\n\n\n\tWELCOME TO BANYANIN!!!! SUCCESSFULLY LOGINED\n");
			break;
		}
		else {
			printf("\n\tSORRY !!!!  LOGIN IS FAILED\n");
			tries++;
			impfunc();
			getchar();
		}
	} while (tries <= 2);

	if (tries > 2)
	{
		printf("Sorry You have enterd the mismatched login credentials for three times!!!\n");
		impfunc();
		getchar();
        return 0;
	}

	system("cls||clear");
	for(int rx = 3;rx>2;rx++)
	{
		system("cls||clear");
		for (var = 0; var < 80; var++)
			printf("-");
		printf("\n");
		printf("\t\t\t********** HOME PAGE ***********\n");
		printf("\n   \t\tCurrent date and time : %s", ctime(&t));
		for (var = 1; var < 80; var++)
			printf("-");
		printf("\n");
		printf("\n\t1 => Booking room");
		printf("\n\t2 => Show all Customer Record");
		printf("\n\t3 => Delete Customer Record");
		printf("\n\t4 => Search Customer Record");
		printf("\n\t5 => Exit\n\n");
		printf("\tProvide Your Option: ");
		choice = getchar();
		impfunc();
		choice = toupper(choice);
		switch (choice) // SWITCH STATEMENT
		{
		case '1': {
            struct CustomerDetails s;
            system("cls||clear");
            printf("Provide Customer Details:");
            printf("\n*********************");
            printf("\n\tProvide Room number: ");
            scanf("\n%s", s.roomnumber);
            impfunc();
            printf("\tProvide Name: ");
            scanf("%s", s.name);
            printf("\tProvide Address: ");
            scanf("%s", s.address);
            printf("\tProvide Phone Number: ");
            scanf("%s", s.phonenumber);
            printf("\tProvide Nationality: ");
            scanf("%s", s.nationality);
            printf("\tProvide Email: ");
            scanf(" %s", s.email);
            printf("\tProvide Periods(\'x\'days): ");
            scanf("%s", s.period);
            printf("\tprovide Arrival date(dd\\mm\\yyyy): ");
            scanf("%s", s.arrivaldate);
			add_func(s);
			break;
        }
		case '2':
			list_func();
			break;
		case '3': {
	        system("cls||clear");
	        char roomnumber[20];
            printf("Provide the Room Number of the hotel to be deleted from the database: ");
            scanf("%s", roomnumber);
			delete_func();
			break;
        }
		case '4': {
	        system("cls||clear");
            char roomnumber[20];
            printf("Provide Room number of the customer to be search from database: ");
            scanf("%s", roomnumber);
			search_func();
			break;
        }
		case '5':
			system("cls||clear");
			printf("\n\n\t **THANKS FOR VISITING **");
			printf("\n\t WE LOOK FORWARD TO WELCOMING YOU BACK");
			//	Sleep(2000);
			exit(0);
			break;
		default:
			system("cls||clear");
			printf("Wrong Input");
			printf("\n Press Enter to continue");
			getchar();
		}
	}
}

