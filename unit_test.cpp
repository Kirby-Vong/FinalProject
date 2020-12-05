#include "gtest/gtest.h"

//units test includes go here
#include "LightArmor_tests.hpp"
#include "HeavyArmor_tests.hpp"
#include "Ranged_tests.hpp"
#include "Melee_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}