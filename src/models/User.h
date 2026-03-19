#ifndef USER_H
#define USER_H

typedef struct User User;

User* User_create(const char *username, const char *password);

#endif