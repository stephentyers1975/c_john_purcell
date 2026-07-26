#pragma once

typedef enum {
    READ = 1,
    WRITE = 2,
    APPEND = 4,
} flag_t;

void print_flag(flag_t flag);
