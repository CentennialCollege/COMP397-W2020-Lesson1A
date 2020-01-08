#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <string>

class Person
{
public:
	Person(std::string name = "unknown", int age = 0);
	virtual ~Person();

	void saysHello();

	// getters and setters
	std::string getName();
	void setName(std::string name);

	int getAge();
	void setAge(int age);

	virtual std::string getAddress() = 0;
	
private:
	std::string m_name;
	int m_age;
};


#endif /* defined (__PERSON__) */