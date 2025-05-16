#include <bits/stdc++.h>
using namespace std;

class Student {
private:
  int salary;

public:
  Student(int salary) { this->salary = salary; }
  void getSalary() { cout << "Salary: " << salary << endl; }
  friend void updateSalary(Student &obj); // Friend Function initialization !!
};

void updateSalary(Student &obj) { obj.salary *= 2; } // friend function !!

int main() {
  Student s1(1200000);
  updateSalary(s1);
  s1.getSalary();
  return 0;
}
