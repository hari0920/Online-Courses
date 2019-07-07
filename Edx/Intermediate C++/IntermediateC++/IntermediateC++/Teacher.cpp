//Implementation for Teacher Class
#include "Teacher.h"
#include <iostream>

//Constructor
Teacher::Teacher()
{
    //sets the values to default
    firstname = "Ramshankar";
    lastname = "Hariharan";
    age = 53;
    address = "ennadikannu";
    phonenumber = "987654321";
}

//Constructor based on values passed
Teacher::Teacher(std::string firstname, std::string lastname, int age, std::string address, std::string phonenumber)
{
    firstname = firstname;
    lastname = lastname;
    age = age;
    address = address;
    phonenumber = phonenumber;
}
//Destructor
Teacher::~Teacher()
{
}

void Teacher::GradeStudent()
{
    std::cout<<"Student has been graded"<<std::endl;
}

void Teacher::SitInClass()
{
    std::cout<<"Sitting at front of class"<<std::endl;
}
//Getter Functions
std::string Teacher::GetFirstname()
{
    return firstname;
}

std::string Teacher::GetLastname()
{
    return lastname;
}

int Teacher::GetAge()
{
    return age;
}

std::string Teacher::GetAddress()
{
    return address;
}

std::string Teacher::GetPhoneNumber()
{
    return phonenumber;
}