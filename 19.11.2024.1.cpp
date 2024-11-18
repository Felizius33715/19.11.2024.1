#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

void countAndSortCharacters(const std::string& text) {
    std::map<char, int> frequency;

    for (char c : text) {
        frequency[c]++;
    }

    std::vector<std::pair<char, int>> freqVector(frequency.begin(), frequency.end());

    std::sort(freqVector.begin(), freqVector.end(),[](const auto& a, const auto& b) { return a.second > b.second; });

    std::cout << "[OUT]: " << std::endl;

    for (const auto& pair : freqVector) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::string inputText;
    std::cout << "[IN]: ";
    std::getline(std::cin, inputText);
    countAndSortCharacters(inputText);
    return 0;
}