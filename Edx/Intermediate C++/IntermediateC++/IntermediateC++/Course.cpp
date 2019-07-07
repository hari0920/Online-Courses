//file with course details
#include "Course.h"
Course::Course()
{
	coursename = "Default course";
	students_in_course = *new std::vector<Student>(3);
	instructor_of_course = Teacher::Teacher();
}

Course::Course(std::vector<Student> s, Teacher t)
{
	students_in_course = s;
	instructor_of_course = t;
}

Course::~Course()
{

}