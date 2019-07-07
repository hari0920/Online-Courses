//Main File for the Intermediate C++ Assignemnt 
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
#include <iostream>
#include <stdio.h>

int main(int argc, char** argv)
{
	std::cout << "This is a demo program" << std::endl;
	//3 student objects
	Student Student1, Student2, Student3;
	std::vector<Student> all_students;
	Student1 = Student("vinni", "nagarajan", 25, "gatech", "999999999");
	Student2 = Student("balachander", "ramachandran", 24, "ucinn", "888888888");
	Student3 = Student("hari", "rams", 23, "ncsu", "111111111");
	all_students.push_back(Student1);
	all_students.push_back(Student2);
	all_students.push_back(Student3);
	//Teacher 
	Teacher teacher;
	teacher = Teacher("maha", "periyava", 95, "kailash", "0123456789");
	//Course Object
	Course Course1;
	Course1 = Course(all_students, teacher);
	//GRadeStudent
	teacher.GradeStudent();
	std::getchar();
}