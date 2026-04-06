#include <iostream>

int main() {
    
    std::string name = "Nikk";
    std::string group = "Group-1"; 
    int age = 18;
    double score = 80;
    bool is_student = true;

    
    std::cout << "=== Student Information ===" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Group: " << group << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Score: " << score << std::endl;
    std::cout << "Is Student: " << (is_student ? "Yes" : "No") << std::endl;

    return 0;
}
