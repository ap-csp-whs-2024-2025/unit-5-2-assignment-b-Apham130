#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    std::vector<std::string> names = {"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"};
    std::vector<int> numbers = {100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80};
    
    for (int curr_index = 0; curr_index < names.size(); curr_index = curr_index + 1)
    {
        std::cout << names[curr_index] << " ";
    }
    std::cout << std::endl;

    for (int curr_index = 0; curr_index < numbers.size(); curr_index = curr_index + 1)
    {
        if (numbers[curr_index] > 0)
        {
            std::cout << numbers[curr_index] << " ";
        }
    }
    std::cout << std::endl;

    int sum = 0;
    for (int curr_index = 0; curr_index < numbers.size(); curr_index = curr_index + 1)
    {
        sum = sum + numbers[curr_index];
    }
    std::cout << sum << "\n";
   

    return 0; 
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}