#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include "src/models/User.h"

typedef struct UserService UserService;

UserService* UserService_create();
void UserService_login(UserService *self, const char *username, const char *password);

#endif