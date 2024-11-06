#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
	GradeBook gradeBook1 ("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2 ("cs102 Data Structures in C++");
	
	cout<<"Obj1 created for: " <<gradeBook1.getCourseName()
	<<"\nObj2 created for: "<<gradeBook2.getCourseName()
	<<endl;
}

