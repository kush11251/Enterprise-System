#include "src/adapters/DatabaseAdapter.h"

typedef struct DatabaseAdapter {
    void *dbHandle;
} DatabaseAdapter;

DatabaseAdapter* DatabaseAdapter_create() {
    DatabaseAdapter *databaseAdapter = malloc(sizeof(DatabaseAdapter));
    // initialize dbHandle
    return databaseAdapter;
}