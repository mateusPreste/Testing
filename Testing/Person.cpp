#include <string>
#include "person.h"

using namespace std;

Person::Person(string &name, string &last, unsigned int age)
	:firstName(name), lastName(last), tage(age) {

}

Person::~Person() {

}

void Person::setFirstName(std::string & first)
{
	firstName = first;
}

string Person::getFirstName() const
{
	return firstName;
}

void Person::setLastName(std::string &last)
{
	lastName = last;
}

string Person::getLastName() const
{
	return lastName;
}

void Person::setAge(unsigned int age)
{
	tage = age;
}

unsigned int Person::getAge() const
{
	return tage;
}
