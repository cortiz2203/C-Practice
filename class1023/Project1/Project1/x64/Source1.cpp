#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> data = { "Ilia", "Austin", "Jeremias", "Luis", "Raymond", "Christopher", "Benny" };

    for (int i = data.size() - 1; i >= 0; i -= 2)
    {
        std::cout << data[i] << " ";
    }

    return 0;
}
