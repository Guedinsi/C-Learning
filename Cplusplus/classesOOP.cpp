#include <iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout<<"Name - " << Name << std::endl;
        std::cout<<"Company - " << Company << std::endl;
        std::cout<<"Age - " << Age << std::endl;
    }
};

int main() {
    Employee employee1;
    employee1.Name = "Guedin";
    employee1.Company = "Utfpr";
    employee1.Age = 21;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Guedinsi";
    employee2.Company = "Utfpr";
    employee2.Age = 31;
    employee2.IntroduceYourself();
}