//Implementation for Student Class
#include "Student.h"
#include <iostream>

//Constructor
Student::Student()
{
    //sets the values to default
    firstname="Hariharan";
    lastname="Ramshankar";
    age=23;
    address="nittbomb";
    phonenumber="123456789";
}

//Constructor based on values passed
Student::Student(std::string firstname, std::string lastname, int age, std::string address, std::string phonenumber)
{
    firstname=firstname;
    lastname = lastname;
    age = age;
    address = address;
    phonenumber = phonenumber;
}
//Destructor
Student::~Student()
{

}

//Getter Functions
std::string Student::GetFirstname()
{
    return firstname;
}

std::string Student::GetLastname()
{
    return lastname;
}

int Student::GetAge()
{
    return age;
}

std::string Student::GetAddress()
{
    return address;
}

std::string Student::GetCity()
{
	return city;
}

std::string Student::GetPhoneNumber()
{
    return phonenumber;
}

void Student::SitInClass()
{
	std::cout << "Sitting at back of class" << std::endl;
}