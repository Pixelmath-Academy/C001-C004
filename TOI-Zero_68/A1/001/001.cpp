#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::cin >> A >> B;
    
    std::cout << "Hello " << A << " " << B << std::endl;
    
    std::string C = A.substr(0, 2) + B.substr(0, 2);
    std::cout << C << std::endl;
    
    return 0;
} 