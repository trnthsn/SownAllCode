#include<ifstream>
using namespace std;

void housesOfHogwarts(const char* path) 
{
    ifstream file("Gryffindor.txt");
    if (file.is_open()) {
    cout << "File is opened.\n";
} else {
    cout << "Error, file is not opened.\n";
}
    
    
}

int main()
{
    housesOfHogwarts;
    return 0;
}