#include <algorithm>
#include <utility>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

void count_func();                  // std::count, std::count_if
void find_func();                   // std::find, std::find_if
void element_func();                // std::max_element, std::min_element, std::min_max_element
void sort_func();                   // std::sort, std::sort_stable, std::is_sorted
void comparison_func();             // std::equal, std::less, std::greater, std::lexicographical_compare
void container_manipulation_func(); // std::copy, std::copy_if, std::for_each, std::transform, std::fill
void generate_func();               // std::generate
void remove_func();                 // std::remove, std::remove_if
void reverse_func();                // std::reverse, std::reverse_copy
void search_func();                 // std::binary_search
void bounds_func();                 // std::lower_bound, std::upper_bound, std::equal_range
void accumulate_func();             // std::accumulate
void inner_func();                  // std::inner_product
void iota_func();                   // std::iota
void formatted_output();            // std::setw, std::setfill

int main(int argc, char const *argv[])
{
    count_func();
    find_func();
    element_func();
    sort_func();
    comparison_func();
    container_manipulation_func();
    generate_func();
    remove_func();
    reverse_func();
    search_func();
    bounds_func();
    accumulate_func();
    inner_func();
    iota_func();
    formatted_output();
    return 0;
}

// std::count, std::count_if
void count_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    // Input
    std::vector<int> data{1, 2, 4, 56, 7, 8, 9, 65, 453423, 4123};
    std::cout << "Input : ";
    for (auto &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Looking for 2
    std::cout << "std::find : 2" << std::endl;
    // Output
    std::cout << "Output : The value 2 appeared " << std::count(data.begin(), data.end(), 2) << " time(s)." << std::endl;
    // Explanation
    std::cout << "std::find will find the number of the values I'm looking for." << std::endl;
}

// std::find, std::find_if
void find_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::max_element, std::min_element, std::min_max_element
void element_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::sort, std::sort_stable, std::is_sorted
void sort_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    std::vector<int> data{1, 2, 5, 4, 3, 20, -2};
    std::cout << "Input: ";
    for (auto &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Check if sorted

    std::cout << "Is the data sorted? ";
    std::is_sorted(data.begin(), data.end()) ? std::cout << "Yes!" : std::cout << "No!";
    std::cout << std::endl;

    std::cout << "Sorting...." << std::endl;
    std::sort(data.begin(), data.end());

    for (auto &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    std::cout << "Is the data sorted? ";
    std::is_sorted(data.begin(), data.end()) ? std::cout << "Yes!" : std::cout << "No!";
    std::cout << std::endl;
}

// std::equal, std::less, std::greater
void comparison_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::copy, std::copy_if, std::for_each, std::transform, std::fill
void container_manipulation_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::generate
void generate_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::remove, std::remove_if
void remove_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::reverse, std::reverse_copy
void reverse_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::binary_search
void search_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::lower_bound, std::upper_bound, std::equal_range
void bounds_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::accumulate
void accumulate_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::inner_product
void inner_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::iota
void iota_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::setw, std::setfill
void formatted_output()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}