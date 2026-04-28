#pragma once

#include <cstdint>

class uuid final {
  private:
    static uint64_t current;

    uuid() = delete;

  public:
    static uint64_t get();
};
