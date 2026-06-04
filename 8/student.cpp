#include <iostream>
#include "student.h"

Student::Student(const char *name, int age, const char *id)
    : Human(name, age) {
    cout << "Student constructor" << endl;
    this->setStudentID(id);
}

Student::Student(const char *name, int age)
    : Human(name, age) {
    cout << "Student constructor" << endl;
    this->setStudentID(NULL);
}


const char *Student::getStudentID() {
    return this->id;
}

void Student::setStudentID(const char *id) {
    this->id = id;
}

void Student::print() {
    if (!this->id)
        cout << "Student) name: " << this->getName() << ", age: " << this->getAge() << ", id: unknown" << endl;
    else
        cout << "Student) name: " << this->getName() << ", age: " << this->getAge() << ", id: " << this->getStudentID() << endl;
}
