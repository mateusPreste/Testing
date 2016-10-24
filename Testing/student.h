#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "person.h"

class Student : public Person {
public:
	Student(std::string &, std::string &, unsigned int, unsigned int, unsigned int);
	~Student();

	void setSchoolId(unsigned int);
	unsigned int getStudentId() const;

	void setClassId(unsigned int);
	unsigned int getClassId() const;

private:
	unsigned int schoolId;
	unsigned int classId;
};

#endif