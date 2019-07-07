//Header file for Student Class
#pragma once 
#include<string>

class Student
{
    private:
    std::string firstname,lastname;
    int age;
    std::string address;
    std::string city;
    std::string phonenumber;

    public:
    //Default Constructor
    Student();
    //valued constructor
    Student(std::string firstname, std::string lastname, int age, std::string address, std::string phonenumber);
    //Destructor
    ~Student();
	void SitInClass();
    //Accessors
    std::string GetFirstname();
    std::string GetLastname();
    int GetAge();
    std::string GetAddress();
    std::string GetCity();
    std::string GetPhoneNumber();

};