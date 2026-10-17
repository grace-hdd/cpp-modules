#include <iostream>
#include <fstream>
#include <string>

/* file operations are handled using <fstream> header:
	- std::ifstream (input file stream): used for reading from file
	- std::ofstream (output file stream): used for writing to a file
	- .is_open: to check if a file opened successfully
*/

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Error: Invalid argument count.\n"
                  << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty()) {
        std::cerr << "Error: Target string (s1) cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open input file '" << filename << "'." << std::endl;
        return 1;
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create output file '" << outFilename << "'." << std::endl;
        inFile.close();
        return 1;
    }

	std::string line;
    while (std::getline(inFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outFile << line << std::endl;
    }

    return 0;
}