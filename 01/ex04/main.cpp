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
    if (!av[2][0] || !av[3][0])
        return (std::cout << "Invalid Input: Please provide :\n<filename> string1 string2\n", 1);
    std::string fileName = av[1];
    inFile.open(fileName.c_str(), std::ios::in);
    if (!inFile.is_open())
        return (std::cout << "Please providea valid file.\n", 1);
    fileName += ".replace";
    outFile.open(fileName.c_str());
    if (!outFile.is_open())
        return (std::cout << "An Error Occured While Opening The New File\n", 1);
    int at = 0;
    int pos = 0;
    while (!inFile.eof())
    {
        at = 0;
        pos = 0;
        getline(inFile, str);
        str += "\n";
        while ((pos = str.find(av[2], at), pos != -1))
        {
            at = pos + 1;
            str.erase(pos, strlen(av[2]));
            str.insert(pos, av[3]);
        } 
        outFile.write(str.c_str(), str.length());
    }
    
    return 0;
}
