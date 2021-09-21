#include <iostream>
#include <string>
using namespace std;



class Student{
  private:
    string name;
    int id;
    int gradeDate;
  public:
    void setName(string nameIn);
    void setId(int idIn);
    void setGradeDate(int dateIn);
    string getName();
    int getId();
    int getGrade();
    void print();
};

void Student::setName(string nameIn){
  name = nameIn;
}

void Student::setId(int idIn){
  id = idIn;
}

void Student::setGradeDate(int dateIn){
  gradeDate = dateIn;
}

void Student::print(){
     cout<<name<<" "<<id<<" "<<gradeDate;
}

string Student::getName(){
  return name;
}

int Student::getId(){
  return id;
}

int Student::getGrade(){
  return gradeDate;
}

int main(){
  Student s1;
  s1.setName("Ahmed Sabry");
  s1.setId(15);
  s1.setGradeDate(2014);
  cout<<"Using Student:: Function PRint\n";
  s1.print();
  cout<<"\nUsing student access Function\n";
  cout <<"\nStudent Name = "<<s1.getName();
  cout <<"\nStudent id = "<<s1.getId();
  cout <<"\nStudent Grade = "<<s1.getGrade();
}
