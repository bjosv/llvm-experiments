#include <iostream>
int main() {
    std::cout << __func__ << std::endl
              << __FUNCTION__ << std::endl
              << __PRETTY_FUNCTION__ << std::endl;
}
