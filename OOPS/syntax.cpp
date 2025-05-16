#include <bits/stdc++.h>
using namespace std;

class Teacher {
private:
  int salary;

public:
  string name;
  string dept;
  string subject;
  // Parameterized Contructor..
  Teacher(string name, string dept, string subject, double salary) {
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
  }
  Teacher(Teacher &obj) {
    this->name = obj.name;
    this->dept = obj.dept;
    this->subject = "Not initialized yet..";
    this->salary = obj.salary + 3;
  }

  void changeSubject(string newDept) { dept = newDept; }
  // setter
  void setSalary(double s) { salary = s; }
  // getter
  void getSalary() { cout << salary << endl; }
  void getInfo() {
    cout << name << " " << dept << " " << subject << " " << salary;
  }
};

int main() {
  Teacher t1("Adarsh", "Computer Science", "NLP", 84);
  /*t1.getInfo();*/
  Teacher t2(t1); // Copy constructor default..
  t2.getInfo();
  return 0;
}
