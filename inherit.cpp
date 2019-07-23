#include <iostream>
using namespace std;

class People {
  private:
    string address;
  public:
    string name;
    string get_address() { return address;};
};

class Employee : public People {
  public:
    string id;
};

int main() {
  Employee emp1;
  emp1.id="1001"; cout << "Employee ID: " << emp1.id << endl;

return 0; };
