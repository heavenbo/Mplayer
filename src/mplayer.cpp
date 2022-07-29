#include <iostream>
#include <fstream>
int main()
{
    int i = 7;
    std::string path = "../mp3/mplay.sh " + std::to_string(i);

    char *path_ = const_cast<char *>(path.c_str());
    std::cout << path_ << std::endl;
    std::system(path_);
    std::cout << "over" << std::endl;
    return 0;
}