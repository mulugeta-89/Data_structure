#include <iostream>
struct Person {
	std::string name;
	int age;
	std::string occupation;
};
int main(){
	Person student;
	Person *student_ptr;
	student.name = "Mulugeta";
	student.age=20;
	student.occupation = "Student";
	
	std::string name = "shimels";
	std::string *name_ptr;
	name_ptr = &name;
	std::cout << *(name_ptr) << std::endl;
	
	student_ptr = &student;
//	std::cout << *(student_ptr) << std::endl;
	std::cout << student_ptr->name << std::endl;
	std::cout << student_ptr->age << std::endl;
	std::cout << student_ptr->occupation << std::endl;
}
