#include "header.h"
#include "func_decl.h"

int login(char *username, char *password)
{
	char user[10] = "user\n";
	char pass[10] = "pass\n";
	return (strcmp(username, user) == 0) && (strcmp(password, pass) == 0);
}
