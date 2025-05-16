#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  string name;
  double *cgptr;
  Student(string name, double cgpa) {
    this->name = name;
    cgptr = new double;
    *cgptr = cgpa;
  }
  Student(Student &obj) {
    this->name = obj.name;
    cgptr = new double;
    *cgptr = *obj.cgptr;
  }
  void getInfo() {
    cout << "Name: " << name << endl;
    cout << "CGPA: " << *cgptr << endl;
  }
  void updateCgpa(double cgpa) { *cgptr = cgpa; }
};
int main() {

  Student s1("Adarsh", 9.92);
  Student s2(s1);
  s2.updateCgpa(10);
  s2.getInfo();
  s1.getInfo();
  return 0;
}
