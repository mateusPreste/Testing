#include <string>
#include "student.h"

typedef unsigned int uint;

Student::Student(std::string &first, std::string &last, uint ssn, unsigned int schoolId, unsigned int classId)
	: Person(first, last, ssn)
{

}

Student::~Student()
{

}

void Student::setSchoolId(unsigned int school)
{
	schoolId = school;
}

unsigned int Student::getStudentId() const
{
	return schoolId;
}

void Student::setClassId(unsigned int classid)
{
	classId = classid;
}

unsigned int Student::getClassId() const
{
	return classId;
}
