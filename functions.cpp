#include <algorithm>
#include <utility>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <numeric>

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
    std::cout << std::endl;

    find_func();
    std::cout << std::endl;

    element_func();
    std::cout << std::endl;

    sort_func();
    std::cout << std::endl;

    comparison_func();
    std::cout << std::endl;

    container_manipulation_func();
    std::cout << std::endl;

    generate_func();
    std::cout << std::endl;

    remove_func();
    std::cout << std::endl;

    reverse_func();
    std::cout << std::endl;

    search_func();
    std::cout << std::endl;

    bounds_func();
    std::cout << std::endl;

    accumulate_func();
    std::cout << std::endl;

    inner_func();
    std::cout << std::endl;

    iota_func();
    std::cout << std::endl;

    formatted_output();
    std::cout << std::endl;
}

// std::count, std::count_if
void count_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
}

// std::find, std::find_if
void find_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    std::cout << "Functions from <algorithm>" << std::endl;
    std::cout << "Takes 3 parameters std::find(startOfArr, endOfArr, value)" << std::endl;
    // Input
    std::vector<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Input: ";
    for (auto &elem : list)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Use std::find to look for 5
    std::cout << "Looking for 5" << std::endl;
    auto found = std::find(list.begin(), list.end(), 5);
    // Output
    if (found != list.end())
    {
        std::cout << "Output: " << *found << " is found at index " << (found - list.begin()) << std::endl;
    }
    else
    {
        std::cout << "Element not found" << std::endl;
    }
    // Explanation
    std::cout << "std::find will return an iterator pointing to the first occurence of the specified value within the container, else return the end" << std::endl;
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
    // Input
    std::vector<int> data{1, 2, 4, 4, 4, 7, 8, 9, 65, 453423, 4123};
    std::cout << "Input : ";
    for (auto &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Looking for 4
    int key = 4;
    std::cout << "std::lower_bound, std::upper_bound, std::equal_range : " << key << std::endl;
    // Output
    std::vector<int>::iterator lower = std::lower_bound(data.begin(), data.end(), key);
    std::vector<int>::iterator upper = std::upper_bound(data.begin(), data.end(), key);
    std::cout << "Output : Lower bound at position " << std::distance(data.begin(), lower);
    std::cout << ", Upper bound at position " << std::distance(data.begin(), upper);
    std::cout << ", Count: " << std::distance(lower, upper) << std::endl;
    // Explanation
    std::cout << "std::lower_bound returns an iterator to the first element not less than the given value." << std::endl;
    std::cout << "std::upper_bound returns an iterator to the first element greater than the given value." << std::endl;
    std::cout << "std::equal_range returns a pair of iterators representing the range of elements with the given value." << std::endl;
}

// std::accumulate
void accumulate_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    // Input
    std::vector<int> data{1, 2, 3, 4, 5};
    std::cout << "Input : ";
    for (auto &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Accumulating the data
    int initial_value = 0;
    std::cout << "std::accumulate : ";
    // Output
    int result = std::accumulate(data.begin(), data.end(), initial_value);
    std::cout << "Output : Sum = " << result << std::endl;
    // Explanation
    std::cout << "std::accumulate computes the sum of the elements in the given range." << std::endl;
}

// std::inner_product
void inner_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    // Input
    std::vector<int> data1{1, 2, 3, 4, 5};
    std::vector<int> data2{1, 2, 3, 4, 5};
    std::cout << "Input : ";
    for (auto &elem : data1)
    {
        std::cout << elem << ' ';
    }
    std::cout << " and ";
    for (auto &elem : data2)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Computing the inner product
    std::cout << "std::inner_product : ";
    // Output
    int result = std::inner_product(data1.begin(), data1.end(), data2.begin(), 0);
    std::cout << "Output : Inner Product = " << result << std::endl;
    // Explanation
    std::cout << "std::inner_product computes the inner product of two sequences of elements." << std::endl;
}

// std::iota
void iota_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    // Input
    std::vector<int> data(10);
    int initial_value = 1;
    std::cout << "Input : ";
    for (size_t i = 0; i < data.size(); ++i)
    {
        std::cout << initial_value + i << ' ';
    }
    std::cout << std::endl;
    // Filling the sequence with increasing values
    std::cout << "std::iota : ";
    // Output
    std::iota(data.begin(), data.end(), initial_value);
    std::cout << "Output : ";
    for (auto &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Explanation
    std::cout << "std::iota fills the range with sequentially increasing values, starting with the given value." << std::endl;
}

// std::setw, std::setfill
void formatted_output()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    // Input
    int num = 123;
    std::cout << "Input : " << num << std::endl;
    // Formatting output
    std::cout << "std::setw, std::setfill : ";
    // Output
    std::cout << "Output : " << std::setw(10) << std::setfill('0') << num << std::endl;
    // Explanation
    std::cout << "std::setw sets the field width of the output stream, and std::setfill sets the fill character." << std::endl;
}