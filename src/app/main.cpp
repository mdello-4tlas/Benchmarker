//
// Created by altaero on 5/8/25.
//

#include "board.h"

#include "tests.h"

#include <cstdint>

[[noreturn]]
int main()
{
    board::init();

    [[maybe_unused]] uint32_t cycles {};
    cycles = test_cyccnt_loop_aligned_0(1);
    while (true)
    {

    }
}
