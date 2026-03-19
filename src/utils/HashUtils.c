#include "src/utils/HashUtils.h"
#include <string.h>

unsigned char* HashUtils_hash(const char *password) {
    unsigned char *hash = malloc(strlen(password));
    // simplify hash function for example purposes
    for (int i = 0; i < strlen(password); i++) {
        hash[i] = password[i] + 1;
    }
    return hash;
}