#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <string>
int main(int argc, char const *argv[])
{
    std::ifstream ifs{"test.txt"};
    std::vector<std::string> data{std::istream_iterator<std::string>{ifs}, std::istream_iterator<std::string>{}};
    std::cout << "Output: ";
    for (auto elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}
