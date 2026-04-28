#pragma once

#include <cstdint>

class uuid {
  private:
    static uint64_t current;

    uuid() = delete;

  public:
    static uint64_t get();
};
