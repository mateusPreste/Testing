#include <string>
#include "student.h"

typedef unsigned int uint;

Student::Student(std::string &first, std::string &last, uint ssn, uint schoolId, uint classId)
	: Person(first, last, ssn)
{

}

Student::~Student()
{

}

void Student::setSchoolId(uint school)
{
	schoolId = school;
}

uint Student::getStudentId() const
{
	return schoolId;
}

void Student::setClassId(uint classid)
{
	classId = classid;
}

uint Student::getClassId() const
{
	return classId;
}
