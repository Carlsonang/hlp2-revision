#include <algorithm>
#include <utility>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <numeric>
#include <deque>
#include <initializer_list>

// COMPILE THIS FILE WITH THE FOLLOWING COMMAND LINE:
// g++ -pedantic-errors -std=c++17 functions.cpp && ./a.out && rm a.out
// TO SELECT FUNCTION INSERT A VALUE HERE                   ^

void count_func();                  // std::count, std::count_if
void find_func();                   // std::find, std::find_if
void element_func();                // std::max_element, std::min_element, std::min_max_element
void sort_func();                   // std::sort, std::sort_stable, std::is_sorted
void comparison_func();             // std::equal, std::less, std::greater, std::lexicographical_compare
void container_manipulation_func(); // std::copy, std::copy_if, std::for_each, std::transform, std::fill
void generate_func();               // std::generate
/* IMPORTANT */
void remove_func();      // std::remove, std::remove_if, std::erase
void reverse_func();     // std::reverse, std::reverse_copy
void search_func();      // std::binary_search
void bounds_func();      // std::lower_bound, std::upper_bound, std::equal_range
void accumulate_func();  // std::accumulate
void inner_func();       // std::inner_product
void iota_func();        // std::iota
void formatted_output(); // std::setw, std::setfill
void template_func();
void template_class_func();

int main(int argc, char const *argv[])
{
    if (argc != 2 || !isdigit(*argv[1]))
    {
        std::cout << "Select 1 to 17: " << std::endl;
        std::cout << "1. count" << std::endl;
        std::cout << "2. find" << std::endl;
        std::cout << "3. elements" << std::endl;
        std::cout << "4. sort" << std::endl;
        std::cout << "5. comparisons" << std::endl;
        std::cout << "6. container manipulation" << std::endl;
        std::cout << "7. generate" << std::endl;
        std::cout << "8. remove" << std::endl;
        std::cout << "9. reverse" << std::endl;
        std::cout << "10. search" << std::endl;
        std::cout << "11. bounds" << std::endl;
        std::cout << "12. accumulate" << std::endl;
        std::cout << "13. inner product" << std::endl;
        std::cout << "14. iota" << std::endl;
        std::cout << "15. formatted output" << std::endl;
        std::cout << "16. template functions" << std::endl;
        std::cout << "17. class templates" << std::endl;
    }
    else
    {
        std::string selection{argv[1]};
        switch (std::stoi(selection))
        {
        case 1:
            count_func();
            std::cout << std::endl;
            break;

        case 2:
            find_func();
            std::cout << std::endl;
            break;

        case 3:
            element_func();
            std::cout << std::endl;
            break;

        case 4:
            sort_func();
            std::cout << std::endl;
            break;

        case 5:
            comparison_func();
            std::cout << std::endl;
            break;

        case 6:
            container_manipulation_func();
            std::cout << std::endl;
            break;

        case 7:
            generate_func();
            std::cout << std::endl;
            break;

        case 8:
            remove_func();
            std::cout << std::endl;
            break;

        case 9:
            reverse_func();
            std::cout << std::endl;
            break;

        case 10:
            search_func();
            std::cout << std::endl;
            break;

        case 11:
            bounds_func();
            std::cout << std::endl;
            break;

        case 12:
            accumulate_func();
            std::cout << std::endl;
            break;

        case 13:
            inner_func();
            std::cout << std::endl;
            break;

        case 14:
            iota_func();
            std::cout << std::endl;
            break;

        case 15:
            formatted_output();
            std::cout << std::endl;
            break;

        case 16:
            template_func();
            std::cout << std::endl;
            break;

        case 17:
            template_class_func();
            std::cout << std::endl;
            break;

        default:
            break;
        }
    }
}

// std::count, std::count_if
// simple bool function to demonstrate std::count_if
bool isEven(int i)
{
    return i % 2 == 0;
}
void count_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    std::cout << "Demonstrating std::count" << std::endl;
    std::cout << "Functions from <algorithm>" << std::endl;
    std::cout << "Takes 3 parameters std::count(startOfArr, endOfArr, valueToCount)" << std::endl;
    // Input
    std::vector<int> list{10, 20, 30, 30, 20, 10, 10, 20};
    std::cout << "Input: ";
    for (auto &elem : list)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Use std::count to count the number of times 10 appears in the list
    std::cout << "Counting amount of times 10 appears" << std::endl;
    size_t count = std::count(list.begin(), list.end(), 11);
    std::cout << std::endl;
    // Output
    if (count)
    {
        std::cout << "10 was found " << count << " times in this container" << std::endl;
    }
    else
    {
        std::cout << "Element not found" << std::endl;
    }
    // Explanation
    std::cout << "std::count returns the number of times a specified value appears within a container" << std::endl;
    std::cout << std::endl;

    std::cout << "Demonstrating std::count_if" << std::endl;
    std::cout << "Functions from <algorithm>" << std::endl;
    std::cout << "Takes 3 parameters std::count(startOfArr, endOfArr, pred)" << std::endl;
    // Input
    std::vector<int> list2{1, 3, 4, 5, 8, 9, 10, 15};
    std::cout << "Input: ";
    for (auto &elem : list2)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    // Use std::count_if to count the number of times there is an even number
    std::cout << "Counting amount of times an even number appears" << std::endl;
    int count2 = std::count_if(list2.begin(), list2.end(), isEven);
    // Output
    if (count2)
    {
        std::cout << "There are " << count2 << " even numbers in this container" << std::endl;
    }
    else
    {
        std::cout << "There are no even numbers in this container" << std::endl;
    }
    // Explanation
    std::cout << "std::count_if takes in a pred for its 3rd parameter, which is a function that returns a boolean" << std::endl;
    std::cout << "When the boolean returns true, it increases the count" << std::endl;
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
    // Input
    std::vector<int> data{1, 3, 3, 7, 8, 9, 10, 13, 23, 41, 57, 78, 85, 91, 100};
    std::cout << "Input : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    // Usage
    std::vector<int>::iterator min_pos{std::min_element(data.begin(), data.end())};
    std::vector<int>::iterator max_pos{std::max_element(data.begin(), data.end())};
    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> minmax_pos{std::minmax_element(data.begin(), data.end())};

    // Explanation and output
    std::cout << "The minimum element retrieved by std::min_element is : " << *min_pos << std::endl;
    std::cout << "This element is at position : " << std::distance(std::begin(data), min_pos) << std::endl;
    std::cout << "The maximum element retrieved by std::min_element is : " << *max_pos << std::endl;
    std::cout << "This element is at position : " << std::distance(std::begin(data), max_pos) << std::endl;
    std::cout << "The min and max element retrieved by std::minmax_element is a pair of : " << *minmax_pos.first << " and " << *minmax_pos.second << std::endl;
    std::cout << "This elements are at position : " << std::distance(std::begin(data), minmax_pos.first) << " and " << std::distance(std::begin(data), minmax_pos.second) << std::endl;
}

// std::sort, std::sort_stable, std::is_sorted
void sort_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    std::vector<int> data{5, 3, 6, 8, 9, 19, 199, 21, 25};
    // Input
    std::cout << "Input : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    std::cout << "The container is" << ((std::is_sorted(std::begin(data), std::end(data))) ? " " : " not ") << "sorted" << std::endl;

    // Default sort (Ascending)
    std::sort(data.begin(), data.end());
    std::cout << "Sorted : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    std::cout << "The container is" << ((std::is_sorted(std::begin(data), std::end(data))) ? " " : " not ") << "sorted" << std::endl;

    // Function sort
    std::sort(data.begin(), data.end(), std::greater());
    std::cout << "Sorted by greater : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    std::cout << "The container is" << ((std::is_sorted(std::begin(data), std::end(data))) ? " " : " not ") << "sorted" << std::endl;
    std::cout << "By default, it only checks ascending order" << std::endl;
    std::cout << "The container is" << ((std::is_sorted(std::begin(data), std::end(data), std::greater())) ? " " : " not ") << "sorted by descending order" << std::endl;
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
// Moves the elements to the end of the container and returns the index of the first element to be removed
void remove_func()
{
    std::cout << "This function is : " << __PRETTY_FUNCTION__ << std::endl;
    std::vector<int> data{1, 3, 3, 7, 8, 9, 10, 8, 13, 23, 41, 8, 57, 78, 8, 85, 91, 100};
    std::cout << "Input : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    std::vector<int>::iterator removethis = std::remove(std::begin(data), std::end(data), 8);
    std::cout << "Removed 8 : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    data.erase(removethis, data.end());
    std::cout << "Erasing : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    removethis = std::remove_if(std::begin(data), std::end(data), isEven);
    std::cout << "Removed even numbers : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    data.erase(removethis, data.end());
    std::cout << "Erasing : ";
    for (auto const &elem : data)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
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
    std::vector<int> data{1, 2, 4, 4, 4, 7, 8, 4, 9, 65, 453423, 4123};
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
    std::vector<int> data2{2, 3, 4, 5, 0};
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
    int result = 0;
    result = std::inner_product(data1.begin(), data1.end(), data2.begin(), result);
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
    int initial_value = 10;
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
    // Output
    std::cout << "Output (setw): " << std::setw(10) << num << std::endl;
    std::cout << "std::setw(10) sets the field width of the output stream to 10" << std::endl;
    std::cout << "Output (setfill): " << std::setw(10) << std::setfill('0') << num << std::endl;
    std::cout << "std::setfill('0') will fill in the extra spaces with the value '0' " << std::endl;
    std::cout << "Output (left): " << std::setw(10) << std::setfill(' ') << std::left << num << " next value lies here" << std::endl;
    std::cout << "std::left will set allignment to the left side of the prepared space set by setw" << std::endl;
}

// Strictly typed
// Templates are instantiated at compile time
// Function overloading is also compile time
template <typename T>
T add2(T a, T b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

template <typename T>
T add2ref(T &a, T &b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

template <typename T>
T add2ptr(T *a, T *b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return *a + *b;
}

template <typename T>
T add2refptr(T *&a, T *&b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return *a + *b;
}

template <typename T>
T add2crefptr(T *const &a, T *const &b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return *a + *b;
}

template <typename T>
T add2ptrptr(T (*a)[5], T **b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return **a + **b;
}

template <typename T1, typename T2>
T1 add2v2(T1 a, T2 b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

template <typename T1 = int, typename T2, typename T3>
T1 add2v3(T2 a, T3 b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

template <typename T1, typename T2, typename T3 = double>
T3 add2v4(T1 a, T2 b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return a + b;
}

// double add2(double a, double b)
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
//     return a + b;
// }

void template_func()
{
    int ia{1}, ib{2};
    double da{1.4}, db{3.6};
    float fa{0.5f}, fb{1.5f};

    // FAIR AND BALANCED
    std::cout << "Templates are strictly typed" << std::endl;
    std::cout << add2(ia, ib) << " is an int" << std::endl;
    std::cout << add2(da, db) << " is a double" << std::endl;
    std::cout << add2(fa, fb) << " is a float" << std::endl;
    std::cout << std::endl;

    // POINTERS AND ARRAYS
    int *pia{&ia}, *pib{&ib};
    int d1arr[5]{1, 2, 3, 4, 5};
    int d2arr[1][5]{1, 2, 3, 4, 5};
    int **ppia{&pia};

    std::cout << add2ptr(pia, pib) << std::endl;
    std::cout << add2ptr(d1arr, pia) << std::endl;
    std::cout << "Array is decayed into a pointer" << std::endl;
    std::cout << add2ptrptr(d2arr, ppia) << std::endl;
    std::cout << "However, if you have a 2d array, only the top level is decayed" << std::endl;
    std::cout << "This results in some weird unpronouncable thing which looks like T (*a)[5]" << std::endl;
    std::cout << std::endl;

    std::cout << "The following uses references" << std::endl;
    std::cout << add2refptr(pia, pib) << std::endl;
    std::cout << "Look in the code to see comments about arrays and ptrs with references" << std::endl;
    // THE FOLLOWING CODE DOES NOT COMPILE
    // std::cout << add2refptr(d1arr, pia) << std::endl;
    // When using references, not even arrays will decay and will be 100% strict

    int const *cpia{&ia}, *cpib{&ib};
    int const cia{ia}, cib{ib};
    int const *const cpcia{&cia}, *const cpcib{&cib};

    std::cout << add2(cia, ia) << std::endl;
    std::cout << add2(cia, ib) << std::endl;

    std::cout << add2ref(ia, ib) << std::endl;
    // std::cout << add2ref(cia, ib) << std::endl;

    std::cout << add2refptr(pia, pib) << std::endl;
    std::cout << add2refptr(cpia, cpib) << std::endl;
    std::cout << add2crefptr(cpcia, cpcib) << std::endl;
    std::cout << add2ptr(cpcia, cpcib) << std::endl; // Without references top level const is also ignored
    // std::cout << add2refptr(cpcia, cpcib) << std::endl; // THIS DOESNT RUN CAUSE REFERENCES IS 100% STRICT

    // UNFAIR AND FUCKED UP
    std::cout << add2v2(ia, db) << " returns an int" << std::endl;
    std::cout << add2v2(db, ia) << " returns a double" << std::endl;
    std::cout << std::endl;

    // EXPLICIT OUTPUT
    std::cout << add2v3<double>(ia, db) << " returns an double" << std::endl;
    std::cout << add2v3<double>(db, ia) << " returns a double" << std::endl;
    std::cout << add2v3<double, int, int>(db, ia) << " returns a double" << std::endl;

    std::cout << add2v3(ia, db) << " returns an int" << std::endl;
    std::cout << add2v3<double>(db, ia) << " returns a double" << std::endl;
    std::cout << std::endl;

    // DEFAULT TYPE OUTPUT
    std::cout << add2v4(ia, db) << " returns a double" << std::endl;
    std::cout << add2v4(db, ia) << " returns a double" << std::endl;
}

template <typename T1>
class my_vector
{
public:
    // Default
    my_vector() : data{}, size{}, space{}
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        data = new T1[0]{};
    }

    // Non-Default
    my_vector(size_t n) : data{}, size{}, space{}
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        data = new T1[n]{};
    }

    // Single arg constructor
    my_vector(std::initializer_list<T1> const &other)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        size = other.size();
        space = other.size();
        data = new T1[other.size()];
        for (size_t i{}; i < other.size(); ++i)
        {
            data[i] = other.begin()[i];
        }
    }

    // Destructor
    ~my_vector()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        delete[] data;
    }

    // Accessor

    T1 const &operator[](size_t index) const
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return data[index];
    }

    T1 &operator[](size_t index)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return data[index];
    }

    T1 *begin()
    {
        return data;
    }

    T1 *end()
    {
        return data + size;
    }

    template <typename U>
    friend std::ostream &operator<<(std::ostream &os, my_vector<U> &info)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        U *start = info.begin(), *ending = info.end();
        while (start != ending)
        {
            os << *start++ << ' ';
        }
        os << std::endl;
        return os;
    }

private:
    T1 *data;
    size_t size = 0;
    size_t space = 0;
};

void template_class_func()
{
    my_vector<int> info2{1, 2, 3, 4, 5};
    int test = info2[1] += test;
    std::cout << test << std::endl;
    info2[1] = 5;
    std::cout << info2[1] << std::endl;
    std::cout << info2 << std::endl;
}