#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> data = { "Ilia", "Austin", "Jeremias", "Luis", "Raymond", "Christopher", "Benny", "Bob"};

    for (int i = 1; i < data.size(); i += 2)
    {
        std::cout << data[i] << " ";
    }

 
}
