#include <iostream>
#include <string>

int main()
{
    // --- Project Initialization ---
    std::clog << "[SYSTEM LOG]: Guest Book Application Started." << std::endl;
    
    // Data input variables (From your original code)
    std::string fullName;
    int age2;
    
    // --- User Interface ---
    std::cout << "========================================" << std::endl;
    std::cout << "         VIRTUAL GUEST BOOK             " << std::endl;
    std::cout << "========================================" << std::endl;
    
    // 1. Get Full Name (Using your exact line)
    std::cout << "Please enter your full name: ";
    std::getline(std::cin, fullName);
    
    // Simple verification check using your error stream concept
    if (fullName.empty()) {
        std::cerr << "[ERROR]: Name cannot be empty! Resetting to 'Anonymous Guest'." << std::endl;
        fullName = "Anonymous Guest";
    }
    
    // 2. Get Age (Using your exact line)
    std::cout << "Please enter your age: ";
    std::cin >> age2;
    
    // Age validation check
    if (age2 <= 0) {
        std::cerr << "[ERROR]: Invalid age entered. Defaulting to 0." << std::endl;
        age2 = 0;
    }
    
    // --- Project Output / Summary ---
    std::cout << "\n========================================" << std::endl;
    std::cout << "          REGISTRATION SUMMARY          " << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Displaying the final result (Cleaned up version of your output line)
    std::cout << "Thank you for registering, " << fullName << "!" << std::endl;
    std::cout << "Verified Age: " << age2 << " years old." << std::endl;
    std::cout << "========================================" << std::endl;
    
    // --- Project Shutdown ---
    std::clog << "[SYSTEM LOG]: Guest '" << fullName << "' successfully saved to memory." << std::endl;
    
    return 0;
}