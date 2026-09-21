#include <iostream>
#include "addition.h"
#include "substraction.h"
#include "multiplication.h"
#include "division.h"

int main(){
    //initilization of the variable option to perform
    int option;

    std::cout << "MINI CALCULATOR\n";
    std::cout << "Enter [1] Addition\n";
    std::cout << "Enter [2] Substraction\n";
    std::cout << "Enter [3] Multiplication\n";
    std::cout << "Enter [4] Division\n";
    std::cout << "Enter a value to perform an operation: ";

    //accept and store the value into the variable option
    std::cin >> option;

    // switch case to perform various mathematical operation
    switch (option){
        case 1: {
            int a, b, ans;
            std::cout << "Enter a numerator: ";
            std::cin >> a;
            std::cout << "Enter a Denominator: ";
            std::cin >> b;

            ans = AddNum(a, b);
            std::cout << "Result: " << ans << std::endl;
            break;
        }

        case 2: {
            int a, b, ans;
            std::cout << "Enter a numerator: ";
            std::cin >> a;
            std::cout << "Enter a Denominator: ";
            std::cin >> b;

            ans = SubNum(a, b);
            std::cout << "Result: " << ans << std::endl;
            break;
        }

        case 3: {
            int a, b, ans;
            std::cout << "Enter a numerator: ";
            std::cin >> a;
            std::cout << "Enter a Denominator: ";
            std::cin >> b;

            ans = MulNum(a, b);
            std::cout << "Result: " << ans << std::endl;
            break;
        }

        case 4: {
            int a, b, ans;
            std::cout << "Enter a numerator: ";
            std::cin >> a;
            std::cout << "Enter a Denominator: ";
            std::cin >> b;

            if (b == 0) {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            } else {
                ans = DivNum(a, b);
                std::cout << "Result: " << ans << std::endl;
            }
            break;
        }

        default:
            std::cout << "Invalid option selected." << std::endl;
            break;
    }

    return 0;
}
