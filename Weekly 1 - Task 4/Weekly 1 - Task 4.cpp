// Weekly 1 - Task 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int answer;

int main()
{
    std::cout << " Which of the following drinks are your favorite?\n\t 1. Coffee \n\t 2. Tea \n\t 3. Coca Cola \n Select between 1 to 3:  ";
    std::cin >> answer;
    if (answer == 1) {
        std::cout << " Coffee is delicious";
    }
    else if (answer == 2) {
        std::cout << " Tea gives peace of mind.";
    }
    else if (answer == 3) {
        std::cout << " Coke will give you a white smile.";
    }
}
