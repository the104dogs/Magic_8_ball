#include <iostream>
#include <cstdlib>

int main() {

std::cout << "MAGIC 8-BALL: " << std::endl;

srand(time(NULL));
int answer = std::rand() % 10;

if (answer == 0) {
    std::cout << "It is certain." << std::endl;

}
else if (answer == 1) {
    std::cout << "It is certain." << std::endl;

}
else if (answer == 2) {
    std::cout << "It is decidely so." << std::endl;

}
else if (answer == 3) {
    std::cout << "Without a doubt." << std::endl;

}
else if (answer == 4) {
    std::cout << "Yes - definitely." << std::endl;

}
else if (answer == 5) {
    std::cout << "You may rely on it." << std::endl;

}
else if (answer == 6) {
    std::cout << "As I see it, yes." << std::endl;

}
else if (answer == 7) {
    std::cout << "Most likely." << std::endl;

}
else if (answer == 8) {
    std::cout << "Outlook good." << std::endl;

}
else if (answer == 9) {
    std::cout << "Reply hazy, try again." << std::endl;

}
else {
    std::cout << "Very doubtful." << std::endl;

}

std::cout << answer << std::endl;

}