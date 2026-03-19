#ifndef USER_CONTROLLER_H
#define USER_CONTROLLER_H

#include "src/services/UserService.h"

typedef struct UserController UserController;

UserController* UserController_create();
void UserController_login(UserController *self, const char *username, const char *password);

#endif