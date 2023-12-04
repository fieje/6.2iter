#include <iostream>
#include <iomanip>

void fillArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements for the array:\n" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(5) << arr[i];
    }
    std::cout << std::endl;

}

int sumOddIndexedElements(const int arr[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int findIndexOfLargestEven(const int arr[], int size) {
    int maxEvenIndex = -1;
    int maxEven = 1;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
            maxEvenIndex = i;
        }
    }

    return maxEvenIndex;
}

int main() {
    int size;

    std::cout << "Enter the size of the array: "<< std::endl;
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n"<< std::endl;
        return 1;
    }

    int* arr = new int[size];

    fillArray(arr, size);
    printArray(arr, size);

    int result = sumOddIndexedElements(arr, size);
    std::cout << "Sum of elements with odd indices: " << result << std::endl;

    int maxEvenIndex = findIndexOfLargestEven(arr, size);
    if (maxEvenIndex != -1) {
        std::cout << "Index of the largest even element: " << maxEvenIndex << std::endl;
    } else {
        std::cout << "No even elements in the array\n" << std::endl;
    }

    delete[] arr;

    return 0;
}

