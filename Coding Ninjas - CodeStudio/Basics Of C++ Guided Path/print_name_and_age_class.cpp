#include<iostream>
#include<string>
using namespace std;

class Person {
    private:
    string name;
    int age;
    public:
    void SetValue(string n, int a) {
        this->name = n;
        this->age = a;
    }
    void GetValue() {
        cout << "The name of the person is " << this->name << " and the age is " << this->age << "." << endl;
    }
};

int main() {

	string name;
    cin >> name;
    int age;
    cin >> age;
    Person p1;
    p1.SetValue(name, age);
    p1.GetValue();
    return 0;
}