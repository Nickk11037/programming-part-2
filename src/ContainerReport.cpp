#include "../include/ContainerReport.hpp"

#include <iostream>

void showContainerComparison() {
    std::cout << std::endl;

    std::cout << "Container comparison" << std::endl;

    std::cout << "list: fast middle insertion"
              << std::endl;

    std::cout << "deque: indexed access available"
              << std::endl;

    std::cout << "forward_list: low memory usage"
              << std::endl;
}