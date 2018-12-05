#include <gtest/gtest.h>
#include <chrono>
#include "apple.h"

using namespace std::chrono;

TEST(apple_check, test_apple) {
    EXPECT_EQ(getApple(), "car");
}