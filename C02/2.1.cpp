/* Chapter 2.1 - Insertion Sort */
// Requires compilation with C++11
// Needs error checking for edge cases and for when size of input is 0 or 1

#include <iostream>
#include <vector>

std::vector<double> insertionSort(std::vector<double> a)
{
    double temp;
    for (int j = 0; j < a.size(); j++)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            if (a.at(i + 1) <= a.at(i))
            {
                temp = a.at(i + 1);
                a[i + 1] = a.at(i);
                a[i] = temp;
            }
        }
    }
    return a;
}
/*
int main()
{
    std::vector<double> b(8);
    b = {7, 2, 3, 1, 9, 3, 1, 0};
    std::vector<double> c(8);
    c = insertionSort(b);
    for (int i = 0; i < c.size(); i++)
    {
        std::cout << c.at(i) << std::endl;
    }
    return 0;
}
*/
