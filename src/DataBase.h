#include <stdio.h>

typedef struct chessUser USER; 
typedef struct chessDatabase DATABASE; 

struct chessUser {
	char username[100];
	char password[100];
	bool isOnline; 
	char IPAddress[16]; // not sure how long this should be 
	USER *Next; 
	USER *Prev; 
	DATABASE *List; 
}; 

struct chessDatabase {
	USER *First;
	USER *Last;
	int length; 
}

/* Creata a User entry */
USER *CreateNewUser(void); 

/* Delete a user */
void DeleteUser(USER *user); 

/* Create a database */ 
DATABASE *CreateDataBase(DATABASE *database); 

/* Insert a User to the database */ 
void AppendUser(DATABASE *database, USER *user); 

