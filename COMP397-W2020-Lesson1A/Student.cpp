#include "Student.h"
#include <iostream>

Student::Student(std::string name, int age, std::string studentID)
	:Person(name, age)
{
	m_studentID = std::move(studentID);
}

Student::~Student()
{
}

void Student::studies()
{
	std::cout << getName() << " with a studentID of: " << m_studentID << " is studying!" << std::endl;
}

std::string Student::getAddress()
{
	return "some international address";
}
