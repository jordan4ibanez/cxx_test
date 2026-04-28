#include "uuid.hpp"

uint64_t uuid::current = 0;

uint64_t uuid::get() {
    const uint64_t thisOne = uuid::current;
    uuid::current++;
    return thisOne;
}