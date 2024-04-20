#include <iostream>
#include <string>

int main() {
    // Declare and initialize the array with string elements
    std::string elements[] = {
        "B123",
        "C234",
        "A345",
        "C15",
        "B177",
        "G3003",
        "C235",
        "B179"
    };
    
    // Get the size of the array
    int size = sizeof(elements) / sizeof(elements[0]);
    
    // Iterate through each element of the array
    for (int i = 0; i < size; i++) {
        // Check if the element starts with the letter 'B'
        if (elements[i][0] == 'B') {
            // Output the element that starts with the letter 'B'
            std::cout << elements[i] << std::endl;
        }
    }
    
    return 0;
}

