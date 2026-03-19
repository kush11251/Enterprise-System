#include "src/models/User.h"
#include "src/utils/HashUtils.h"

typedef struct User {
    char *username;
    unsigned char *passwordHash;
} User;

User* User_create(const char *username, const char *password) {
    User *user = malloc(sizeof(User));
    user->username = strdup(username);
    user->passwordHash = HashUtils_hash(password);
    return user;
}