
#include<iostream>
#include<string>

#include "Person.h"
#include "Student.h"

void sayHello()
{
	std::cout << "Hello!" << std::endl;
}


int main()
{
	std::cout << "Hello, World!" << std::endl;

	sayHello();

	int one = 1;
	float oneF = 1.0f;

	int* one_p = nullptr;

	one_p = &one;

	std::cout << "one: " << one << std::endl;

	std::cout << "one_p (pointer): " << one_p << std::endl;

	std::cout << "one_p (value): " << *one_p << std::endl;

	const std::string myName = "Tom";

	std::cout << "myString: " << myName << std::endl;

	/*Person tom = Person(myName, 30);
	tom.saysHello();*/

	Student john = Student("John", 22, "123456789");

	john.saysHello();
	john.studies();
	
	return 0;
}