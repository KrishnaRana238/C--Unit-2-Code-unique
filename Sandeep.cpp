#include <iostream>
#include <cstring>
#include <cctype>


int countConsonants(const char* word) {
    int count = 0;
    while (*word) {
        char currentChar = tolower(*word);
        if (currentChar >= 'a' && currentChar <= 'z' && currentChar != 'a' &&
            currentChar != 'e' && currentChar != 'i' && currentChar != 'o' && currentChar != 'u') {
            count++;
        }
        word++;
    }
    return count;
}

int main() {
    char text[1000];
    
    
    cin.getline(text, sizeof(text));
    
    
    char* token = strtok(text, " ");
    int totalConsonants = 0;
    
    while (token != nullptr) {
        
        int consonantCount = countConsonants(token);
        totalConsonants += consonantCount;
        
        
        token = strtok(nullptr, " ");
    }
    
    
    cout << totalConsonants << std::endl;
    
    return 0;
}
