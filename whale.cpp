#include <ctype.h>

#include <iostream>
#include <vector>
// #include <algorithm>
#include <string>

int main() {
  const std::vector<char> vowels = {'e', 'a', 'o', 'i', 'u'}; // vowels ordered by most used to find fast and reduce iterations.
  std::vector<char> result;
  const std::string text = "A whale Of a deal!";

  for (size_t i = 0; i < text.length(); i++) {
    const char lowerChar = tolower(text[i]);

    // if (std::find(vowels.begin(), vowels.end(), text[i]) != vowels.end()) {
    //   std::cout << text[i] << std::endl;
    // }

    for (int j = 0; j < vowels.size(); j++) {
      if (lowerChar == vowels[j]) {
        result.push_back(lowerChar);
        break;
      }
    }

    if (lowerChar == vowels.front() || lowerChar == vowels.back()) {
      result.push_back(lowerChar);
    }
  }

  for (char c : result) {
    std::cout << c;
  }

  std::cout << std::endl;
}
