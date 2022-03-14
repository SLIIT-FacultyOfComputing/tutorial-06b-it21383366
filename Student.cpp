#include "Student.h"
#include <string.h>
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char Name[]) {
  studentId = id;
  strcpy(name,Name);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student Id: " << studentId << endl;
  cout << "Student Name: " << name << endl;
}
