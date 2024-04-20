#include <iostream>
#include <random>
using namespace std;

int main() {
    // Initialize random number generator
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 11);
    
    // Generate a random integer between 0 and 11
    int daysUntilExpiration = dis(gen);
    
    // Check the subscription status and output the appropriate message
    if (daysUntilExpiration > 10) {
        cout << "You have an active subscription." << endl;
    } else if (daysUntilExpiration > 5) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else if (daysUntilExpiration > 1) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else {
        cout << "Your subscription has expired." << endl;
    }
    
    return 0;
}
