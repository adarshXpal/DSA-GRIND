#include <bits/stdc++.h>
using namespace std;

class Person {
public:
  string name;
  int age;
  Person(string name, int age) {
    this->name = name;
    this->age = age;
    cout << "Parent constructor !!" << endl;
  }
  ~Person() { cout << "Parent Destructor !!" << endl; }
};

class Student {
public:
  int salary;
  int childno;
  Student(int salary, int childno) {
    this->salary = salary;
    this->childno = childno;
    cout << "parent child constructor!!" << endl;
  }
  ~Student() { cout << "Child Destructor !!" << endl; }
};

class Topper : public Person, public Student {
public:
  int rank;
  Topper(string name, int age, int salary, int childno, int rank)
      : Person(name, age), Student(salary, childno) {
    this->rank = rank;
    cout << "hybrid constructor !!" << endl;
  }
  ~Topper() { cout << "Child Child Destructor !!" << endl; }

  void getInfo() {
    cout << name << " " << age << " " << salary << " " << childno << " " << rank
         << endl;
  }
};

int main() {
  Topper t1("Adarsh", 21, 1200000, 2, 1);
  t1.getInfo();
  return 0;
}
