#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
    std::ifstream inFile;
    std::ofstream outFile;
    std::string str;
    
    if (ac != 4)
        return (std::cout << "Invalid Input: Please provide :\n<filename> string1 string2\n", 1);
    std::string fileName = av[1];
    inFile.open(fileName.c_str(), std::ios::in);
    if (!inFile.is_open())
        return (std::cout << "Please providea valid file.\n", 1);
    fileName += ".replace";
    outFile.open(fileName.c_str());
    int at = 0;
    int pos = 0;
    while (!inFile.eof())
    {
        at = 0;
        pos = 0;
        getline(inFile, str);
        while ((pos = str.find(av[2], at), pos != -1))
        {
            at = pos;
            str.erase(pos, strlen(av[2]));
            str.insert(pos, av[3]);
        } 
        outFile.write(str.c_str(), str.length());
        outFile.write("\n", 1);
    }
    
    return 0;
}
