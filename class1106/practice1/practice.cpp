#include <iostream>
#include <string>
#include <vector>

enum class Role {
    Sales,
    Manager,
    Accounting
};

struct Employee {
    std::string name;
    int age;
    Role role;
};

int main() {
    std::vector<Employee> employees;

    employees.push_back({ "ilia", 30, Role::Sales });
    employees.push_back({ "Austin", 25, Role::Manager });
    employees.push_back({ "Luiz", 28, Role::Accounting });

    for (int i = 0; i < employees.size(); i++) {
        std::cout << employees[i].name << std::endl;
    }

}

