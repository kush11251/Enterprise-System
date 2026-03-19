#include "src/services/UserService.h"
#include "src/utils/HashUtils.h"

typedef struct UserService {
    User *user;
} UserService;

UserService* UserService_create() {
    UserService *userService = malloc(sizeof(UserService));
    return userService;
}

void UserService_login(UserService *self, const char *username, const char *password) {
    User *user = User_create(username, password);
    if (HashUtils_hash(password) == user->passwordHash) {
        printf("Login successful\n");
    } else {
        printf("Invalid credentials\n");
    }
}