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

int totalDuration(std::vector<int> songDuration)
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

double averageDuration (std::vector<int> songDuration)
{
    return (double) totalDuration(songDuration)/length(songDuration);
}


void printlongestDuration (std::vector<std::string> songNames, std::vector<std::string> songArtist, std::vector<int>songDuration)
{
    int indexMax = 0;
    int maxDuration = songDuration[0];
    int curr_index = 0;

    while (curr_index < length(songNames))
    {
        if (songDuration[curr_index] > maxDuration)
        {
            indexMax = curr_index;   
            maxDuration = songDuration[curr_index];    
        }
        curr_index = curr_index + 1;
    }

    std::cout << "Longest song: " << songNames[indexMax] << " by " << songArtist[indexMax] << " for " << songDuration[indexMax] << " seconds\n";
}


void printshortestDuration (std::vector<std::string> songNames, std::vector<std::string> songArtist, std::vector<int>songDuration)
{
    int indexMin = 0;
    int minDuration = songDuration[0];
    int curr_index = 0;

    while (curr_index < length(songNames))
    {
        if (songDuration[curr_index] < minDuration)
        {
            indexMin = curr_index;   
            minDuration = songDuration[curr_index];    
        }
        curr_index = curr_index + 1;
    }

    std::cout << "Shortest song: " << songNames[indexMin] << " by " << songArtist[indexMin] << " for " << songDuration[indexMin] << " seconds\n";
}



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



   



    std::cout << "The total duration: " << totalDuration (songDuration) << std::endl;
    std::cout << "Avg Duration: " << averageDuration(songDuration) << std::endl;
    printlongestDuration(songNames, songArtist, songDuration);
    printshortestDuration(songNames, songArtist, songDuration);
    return 0;
}
