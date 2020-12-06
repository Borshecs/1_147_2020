#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person
{
public:
    string name;
    int age;
    int averagescore;

    Person(string n, int a, int averagescore)
    {
        name = n;
        age = a;
        averagescore = b;
    }
    Person(string n, int averagescore)
    {
        name = n;
        age = 18;
        averagescore = 3.9;
    }
    Person()
    {
        name = "Bob";
        age = 18;
        averagescore = 4.1;

    }
    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{
    Person tom("Tom", 22);
    cout << "Name: " << tom.name << "\tAge: " << tom.age << endl;
    Person sam("Sam");
    cout << "Name: " << sam.name << "\tAge: " << sam.age << endl;
    Person bob = Person();
    cout << "Name: " << bob.name << "\tAge: " << bob.age << endl;
    return 0;
}