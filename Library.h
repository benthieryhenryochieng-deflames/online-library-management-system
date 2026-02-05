#include "User.h"

User::User(int id, string name) : userId(id), name(name) {}

int User::getId() const {
    return userId;
}

string User::getName() const {
    return name;
}

