#include <print>
#include <string>

int main() {
    int number = 42;
    double pi = 3.1415926;
    std::string name = "Alice";

    std::println("{:^40}", "OUTPUT REPORT");

    std::println("{:-<40}", "");

    std::println("{:<25}{}", "Integer value:", number);

    std::println("{:<25}{:.2f}", "Floating value:", pi);

    std::println("{:<25}{:>10}", "Name:", name);

    std::println("{:-<40}", "");

    return 0;
}