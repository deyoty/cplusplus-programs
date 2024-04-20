#include <iostream>
#include <random>
using namespace

int main() {
    // Initialize random number generator
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dis(0, 11);
    
    // Generate a random integer between 0 and 11
    int daysUntilExpiration = dis(gen);
    
    // Use switch statement to handle different scenarios
    switch (daysUntilExpiration) {
        case 0:
           cout << "Your subscription has expired." <<endl;
            break;
        case 1:
           cout << "Your subscription expires within a day!" <<endl;
           cout << "Renew now and save 20%!" <<endl;
            break;
        
           cout << "Your subscription expires in " << daysUntilExpiration << " days." <<endl;
           cout << "Renew now and save 10%!" <<endl;
            break;
        
           cout << "Your subscription will expire soon. Renew now!" <<endl;
            break;
        default:
           cout << "You have an active subscription." <<endl;
            break;
    }
    
    return 0;
}
