#pragma once
#ifndef __STUDENT__
#define __STUDENT__

#include "Person.h"
#include <string>

class Student : public Person
{
public:
	Student(std::string name, int age, std::string studentID);
	~Student();

	void studies();

	std::string getAddress() override;
	
private:
	std::string m_studentID;
	std::string m_studentId;
};

#endif /* defined (__STUDENT__) */