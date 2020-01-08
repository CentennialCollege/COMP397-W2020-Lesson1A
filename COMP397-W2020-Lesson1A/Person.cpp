#include "Person.h"

#include <utility>
#include <iostream>

Person::Person(std::string name, int age): m_name(std::move(name)), m_age(age)
{

}

Person::~Person()
= default;

void Person::saysHello()
{
	std::cout << m_name << " says Hello!" << std::endl;
}

std::string Person::getName()
{
	return m_name;
}

void Person::setName(std::string name)
{
	m_name = std::move(name);
}

int Person::getAge()
{
	return m_age;
}

void Person::setAge(int age)
{
	m_age = age;
}
