#include "src/controllers/UserController.h"
#include "src/services/UserService.h"

int main() {
    UserController *userController = UserController_create();
    UserService *userService = UserService_create();
    userController->login(userController, "username", "password");
    return 0;
}