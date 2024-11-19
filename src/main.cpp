#include "FunctionsUtil.h"
#include <iostream>
#include <stdexcept>

int main() {
    try {
        std::cout << "Result: " << FunctionsUtil::process(10) << std::endl;
        std::cout << "Result: " << FunctionsUtil::process(7) << std::endl;
        std::cout << "Result: " << FunctionsUtil::process(-17) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }
    return 0;
}
