//Header file for Course Class which is parent to Student and Teacher Classes
#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"

class Course
{
	private:
	//array of students
	std::vector<Student> students_in_course;
	//single teacher object
	Teacher instructor_of_course;
	std::string coursename; //name of the course 

	public:
	//Constructor
	Course();
	//Valued Constructor
	Course(std::vector<Student> s, Teacher t);
	//Destructor
	~Course();

};