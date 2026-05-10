#include <fstream>
#include <iostream>
#include <limits>

int calculate(long long origin, long long integer, int counter){
    if(integer == 1)
    {
        std::cout << origin << " ended with " << integer << " in " << counter << " moves" << std::endl;
        return counter;
    }
    else if(integer % 2 != 0)
    {
        if(integer > (std::numeric_limits<long long>::max() - 1) / 3)
        {
            std::cout << "overflow danger at " << integer << std::endl;
            return true;
        }
        return calculate(origin, integer*3 + 1, counter+1);
    }
    else if(integer % 2 == 0) return calculate(origin, integer / 2, counter+1);
    else std::cout << "cannot reached" << std::endl;
    return -1;
}


int main() {
    std::cout << "Hello C++ on Arch!" << std::endl;

    std::ofstream file("collatz.csv");
    if(!file){
        std::cout << "file created successfully" << std::endl;
        return 1;
    }
    file << "origin,moves\n";
    bool condition = false;
    int counter = 0;
    // for(int i = 0; i < (std::numeric_limits<int>::max()) && !condition; i++){
    for(int i = 1; i < 10000 && !condition; i++){
        counter = calculate(i, i, 1);
        file << i << "," << counter << "\n";
    }
    file.close();
    std::cout << "CSV written suvvessfully" << std::endl;
    return 0;
}

