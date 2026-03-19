#include "src/controllers/UserController.h"
#include "src/models/User.h"

typedef struct UserController {
    UserService *userService;
} UserController;

UserController* UserController_create() {
    UserController *userController = malloc(sizeof(UserController));
    userController->userService = UserService_create();
    return userController;
}

void UserController_login(UserController *self, const char *username, const char *password) {
    self->userService->login(self->userService, username, password);
}