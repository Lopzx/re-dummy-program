#include <iostream>
#include <string>
#include <Windows.h>


int main()
{
    int varInt = 123456;
    std::string varString = "DefaultString";
    char arrChar[128] = "Long char array right there ->";

    int* ptr2int = &varInt;
    int** ptr2ptr = &ptr2int;
    int*** ptr2ptr2 = &ptr2ptr;
    
    while (true) {
        std::cout << "Process ID: " << GetCurrentProcessId() << '\n';
        std::cout << "varInt          (0x" << ptr2int << ") = 0x" << varInt << '\n';
        std::cout << "varString       (0x" << &varString << ") = 0x" << varString << '\n';
        std::cout << "arrChar[128]    (0x" << &arrChar << ") = 0x" << arrChar << '\n' << std::endl;

        std::cout << "ptr2int         (0x" << ptr2ptr << ") = 0x" << ptr2int << '\n';
        std::cout << "ptr2ptr         (0x" << ptr2ptr2 << ") = 0x" << ptr2ptr << '\n';
        std::cout << "ptr2int         (0x" << &ptr2ptr2 << ") = 0x" << ptr2ptr2 << '\n';
        std::cout << "Press ENTER to print again" << '\n';
        getchar();
    }
    


    std::cout << "Hello World!\n";
    return 0;
}

