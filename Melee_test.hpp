#ifndef __MELEE_TESTS_HPP__
#define __MELEE_TESTS_HPP__

#include <iostream>

#include "gtest/gtest.h"
#include "Warrior.hpp"
#include "Weapons.hpp"
#include "Melee.hpp"

using namespace std;

TEST(MeleeTestSet, Fav_UnFav_State_Test) {
	Warrior* userClass = new Warrior();
	Weapons* meleeWeapon = userClass -> AddWeapon(10, "Great Sword");
	EXPECT_EQ(meleeWeapon -> getState(), false);
	meleeWeapon -> Favorite();
	EXPECT_EQ(meleeWeapon -> getState(), true);
	meleeWeapon -> Unfavorite();
	EXPECT_EQ(meleeWeapon -> getState(), false);
}

TEST(MeleeTestSet, GetFunctionsTest) {
	Warrior* userClass = new Warrior();
	Weapons* meleeWeapon = userClass -> AddWeapon(21, "Rusty Sword");
	EXPECT_EQ(meleeWeapon->getAttack(), 21);
	EXPECT_EQ(meleeWeapon->getDefense(), 0);
}

TEST(MeleeTestSet, DisplayTest) {
	Warrior* userClass = new Warrior();
	Weapons* meleeWeapon = userClass -> AddWeapon(99, "Excaliber");
	cout << "EXPECTS: " << "Excaliber" << endl;
	cout << "ACTUAL: ";
	meleeWeapon -> Display();

	meleeWeapon -> Favorite();
	cout << "EXPECTS: " << "\033[1;33m ** \033[0m" << "Excaliber" << "\033[1;33m ** \033[0m" << endl; 
	cout << "ACTUAL: ";
	meleeWeapon -> Display();
}

#endif //__MELEE_TESTS_HPP__
