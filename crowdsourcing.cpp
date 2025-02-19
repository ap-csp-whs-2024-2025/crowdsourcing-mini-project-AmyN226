/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int main()
{
    std::vector<std::string> songNames = {};
    std::cout << "How many songs would you like to store?";
    int counter = 0;
    int songs;
    std::cin >> songs;
    std::string songName;

    while (counter < songs)
    {
        std::cout << "What is the name of the song?";
        std::cin >> songName;
        songNames.push_back(songName);

        counter = counter + 1;

    }


    return 0;
}
