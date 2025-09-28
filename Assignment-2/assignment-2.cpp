#include <iostream>
using namespace std;

int main(){

    int startingFollowers = 49800, totalFollowers,newFollowers;

    /// amount of new followers
    newFollowers = startingFollowers * 0.42;

    /// total amount of followers
    totalFollowers = startingFollowers + newFollowers;

    cout << "Kalen Deboer started 2024 with " << startingFollowers << "." << endl;
    cout << "He gained " << newFollowers << " followers after the Alabama announcement." << endl;
    cout << "He ended that week with " << totalFollowers << " total followers." << endl;
    
    return 0;
}