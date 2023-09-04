#include <iostream>
#include <cstring>

// Function to check if the book is available within the given price range
void checkAvailability(void* price, char* availability) {
    // Check if the availability status is 'Y' or 'y'
    if (std::strcmp(availability, "Y") == 0 || std::strcmp(availability, "y") == 0) {
        // Convert the price from void pointer to a float
        float bookPrice = *(static_cast<float*>(price));

        // Check if the price is within the valid range
        if (bookPrice > 0 && bookPrice < 2500.50) {
            std::cout << "Yes" << std::endl;
            return;
        }
    }

    // If any condition fails, print "No"
    std::cout << "No" << std::endl;
}

int main() {
    float price;
    char availability;

    // Input price and availability
    std::cin >> price;
    std::cin >> availability;

    // Call the function to check availability
    checkAvailability(&price, &availability);

    return 0;
}
