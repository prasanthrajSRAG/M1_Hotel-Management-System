#ifndef _HEADER_H_
#define _HEADER_H_
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void list_func();
void delete_func();
void search_func();
int login(char *username, char *password);
void list_func();
void delete_func();
void search_func();
void impfunc();

struct CustomerDetails // STRUCTURE DECLARATION
{
	char roomnumber[15];
	char name[25];
	char address[30];
	char phonenumber[12];
	char nationality[18];
	char email[30];
	char period[5];
	char arrivaldate[20];
};

#endif
