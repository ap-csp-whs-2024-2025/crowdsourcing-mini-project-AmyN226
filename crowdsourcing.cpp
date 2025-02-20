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
    std::vector<std::string> songArtist = {};
    std::vector<int> songDuration = {};

    int songsNum;
    std::cout << "How many songs would you like to store?";
    std::cin >> songsNum;

    int counter = 0;
    std::string songartist;
    std::string songName;
    int duration;

    while (counter < songsNum)
    {
        std::cout << "What is the name of the song?";
        std::cin >> songName;
        songNames.push_back(songName);
        std::cout << "What is the name of the artist?";
        std::cin >> songartist;
        songArtist.push_back(songartist);
        std::cout << "What is the duration in secs";
        std::cin >> duration;
        songDuration.push_back(duration);

        counter = counter + 1;

    }

    

    std::vector<int> totalDuration(std::vector<int> songDuration);
    {
        int Counter = 0;
        int length = songDuration.size();
        int totalDurations = 0;

        while (Counter < length)
        {
            totalDurations = totalDurations + songDuration[Counter];
            Counter = Counter + 1;
        }
        return totalDurations;
    }

    std::cout << "The total duration is " << totalDuration << "secs" << std::endl;

    return 0;
}
