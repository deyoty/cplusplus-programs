#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For toupper

using namespace std;

// Function to count vowels in a string
int count_vowels(const string& str) {
    int vowel_count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' ||
            tolower(ch) == 'o' || tolower(ch) == 'u') {
            vowel_count++;
        }
    }
    return vowel_count;
}

// Function to count words in a string
int count_words(const string& str) {
    int word_count = 0;
    bool in_word = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!in_word) {
                word_count++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
    }
    return word_count;
}

// Function to reverse a string
string reverse_string(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalize_second_letter(const string& str) {
    string result;
    bool capitalize_next = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (capitalize_next) {
                result += toupper(ch);
                capitalize_next = false;
            } else {
                result += ch;
                capitalize_next = true;
            }
        } else {
            result += ch;
            capitalize_next = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("module_statement.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    getline(inputFile, fileData);

    cout << "Number of vowels in the statement: " << count_vowels(fileData) << endl;
    cout << "Number of words in the statement: " << count_words(fileData) << endl;
    cout << "Reversed statement: " << reverse_string(fileData) << endl;
    cout << "Statement with second letter capitalized: " << capitalize_second_letter(fileData) << endl;

    inputFile.close();
    return 0;
}
