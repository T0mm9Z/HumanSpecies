//============================================================================
// Name        : HumanSpecies.cpp
// Author      : Thomas Ziegler
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include "Person.h"

using namespace std;

int main() {
	cout << "Human Species rocks!" << endl; // prints Human Species rocks!
	shared_ptr<Person> P1 = make_shared<Person>(99, 180, 95, Person::EYECOLOR::BLUE, Person::GENDER::MALE, Person::HAIRCOLOR::BLOND, Person::ANCESTRY::EUROPE);

	cout << "Age: " << (int)P1->getAge() << endl;
	return 0;
}
