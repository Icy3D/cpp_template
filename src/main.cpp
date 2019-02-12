#include <iostream>
#include "Example.h"

namespace icy3d {

/**
 * @brief application's entry point
 * @return 0 if successfully finished, non-zero value if crashed
 */
int main() {
    std::cout << "Hello, World!" << std::endl;

    Example example;
    int result = example.add(5, 7);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

}