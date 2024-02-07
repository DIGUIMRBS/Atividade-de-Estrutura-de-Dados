#include <iostream>
#include <deque>

int main() {
    std::string palavra;
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;
    std::deque<char> caracteres;
    for (char c : palavra) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            caracteres.push_back(c);
        }
    }
    bool palindromo = true;
    while (caracteres.size() > 1) {
        if (caracteres.front() != caracteres.back()) {
            palindromo = false;
            break;
        }
        caracteres.pop_front();
        caracteres.pop_back();
    }
    if (palindromo) {
        std::cout << "A palavra e um palindromo." << std::endl;
    } else {
        std::cout << "A palavra nao e um palindromo." << std::endl;
    }
    return 0;
}
