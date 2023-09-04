#include <iostream>
#include <unordered_map>
#include <vector>

void findIntersection(int* arr1, int size1, int* arr2, int size2, int& sizeIntersection, int* intersection) {
    std::unordered_map<int, int> map1;

    // Create a map from arr1 with book IDs as keys and their positions as values
    for (int i = 0; i < size1; ++i) {
        map1[arr1[i]] = i;
    }

    sizeIntersection = 0; // Initialize the size of the intersection to 0

    for (int i = 0; i < size2; ++i) {
        if (map1.find(arr2[i]) != map1.end()) {
            // Book ID exists in both arrays
            intersection[sizeIntersection++] = arr2[i];
        }
    }
}

int main() {
    int size1, size2;

    // Input size and elements of the first array
    std::cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
    }

    // Input size and elements of the second array
    std::cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
    }

    int sizeIntersection;
    int intersection[std::max(size1, size2)]; // Create an array to store the intersection

    findIntersection(arr1, size1, arr2, size2, sizeIntersection, intersection);

    // Output the intersection
    if (sizeIntersection == 0) {
        std::cout << "No common IDs found." << std::endl;
    } else {
        for (int i = 0; i < sizeIntersection; ++i) {
            std::cout << intersection[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
