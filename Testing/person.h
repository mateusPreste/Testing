#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
	Person(std::string &, std::string &, unsigned int);
	~Person();
	void setFirstName(std::string &);
	std::string getFirstName() const;
	void setLastName(std::string &);
	std::string getLastName() const;
	void setAge(unsigned int);
	unsigned int getAge() const;;
private:
	std::string firstName;
	std::string lastName;
	unsigned int tage;
};

#endif