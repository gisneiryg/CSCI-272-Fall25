#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person{
    private:
        int studentID;
        
    public:
        Student(string n, int id) : Person(n), studentID(id){
            cout << "student constructor \n";
        }
        ~Student(){
            cout << "student destrcutor\n";
        }
        void showInfo() const{
            showName();
            cout << "ID: " << studentID << endl;
        }
};
#endif
