#include <iostream>
#include <string>

int main() {
    int num;
    std::cin>>num;
    std::cin.ignore();
    
    for(int i = 0;i<num;i++)
    {
        std::string input;
        
    std::getline(std::cin, input);  // Read the whole line

    // Check if the string has at least 4 characters
    
        // Swap the first and fourth characters manually
        char temp = input[0];    // Store the first character
        input[0] = input[4];     // Replace first with fourth
        input[4] = temp;         // Replace fourth with stored first

       std::cout << input << std::endl;
    }

    return 0;
}
