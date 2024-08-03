#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

void to_lowercase(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main() {
    std::string paragraph;
    std::map<std::string, int> word_count;

    std::cout << "Enter a paragraph: ";
    std::getline(std::cin, paragraph);

    std::istringstream stream(paragraph);
    std::string word;
    while (stream >> word) {
        // Remove punctuation from the beginning and end of the word
        word.erase(std::remove_if(word.begin(), word.end(), ::ispunct), word.end());
        to_lowercase(word);
        word_count[word]++;
    }

    std::cout << "\nWord Frequencies:\n";
    for (const auto &entry : word_count) {
        std::cout << entry.first << ": " << entry.second << '\n';
    }

    return 0;
}

