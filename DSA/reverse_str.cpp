#include <iostream>
#include <vector>

void reverseString(std::vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        std::swap(s[left++], s[right--]);
    }
}

int main() {
    std::vector<char> myString = {'h', 'e', 'l', 'l', 'o'};

    std::cout << "Original String: ";
    for (char ch : myString) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    reverseString(myString);

    std::cout << "Reversed String: ";
    for (char ch : myString) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;

    return 0;
}
