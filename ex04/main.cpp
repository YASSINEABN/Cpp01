#include <iostream>
#include <string>
#include <fstream>


void WriteTofile(std::string old , std::string neww , std::string line , std::ofstream& outputFile)
{
    long unsigned int index = 0; 
    while (index < line.length())
    {
        size_t pos = line.find(old,index);
        if(pos != std::string::npos)
        {
            outputFile << line.substr(index, pos - index) << neww;
            index =pos + old.length();
        }
        else 
        {
                outputFile << line.substr(index);
                break;
        } 
    }
}

int main(int argc , char **argv)
{
    if(argc < 2)
        std::cout << " required 3 args filename and old word with new"<< std::endl;
    else 
        {
            std::string filename = argv[1];
            std::string old = argv[2];
            std::string newW = argv[3];
            std::string newfile = filename + ".replace";
            std::string line ;

                    std::ifstream inputFile(filename.c_str());
                    std::ofstream outputFile(newfile.c_str());

                
                if (!inputFile.is_open() || !outputFile.is_open())
                {
                    std::cerr << "Error opening file: " << filename << std::endl;
                    return 1;
                }
                while (std::getline(inputFile , line))
                {
                    WriteTofile(old,newW,line,outputFile);
                      outputFile << std::endl;

                }
        }
            

            return 1;

}