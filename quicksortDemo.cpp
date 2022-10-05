#include <generic.h>
#include <quickSort.h>

int main()
{
    const int MAX_ELEMENTS = 10;
    int arr[MAX_ELEMENTS];
    double arrD[MAX_ELEMENTS];

    //Filling up the array with random numbers;
    for (int i = 0; i < MAX_ELEMENTS; ++i)
    {   
        arr[i] = algo::random_range(1, 100);
        arrD[i] = algo::random_range(1.0, 99.99);
    }

    std::cout << "Before Sorting:\n";
    algo::printList(arr, MAX_ELEMENTS);
    algo::quickSort(arr, 0, MAX_ELEMENTS - 1);
    std::cout << "After Sorting:\n";
    algo::printList(arr, MAX_ELEMENTS);


    std::cout << "\n\nBefore Sorting:\n";
    algo::printList(arrD, MAX_ELEMENTS);
    algo::quickSort(arrD, 0, MAX_ELEMENTS - 1);
    std::cout << "After Sorting:\n";
    algo::printList(arrD, MAX_ELEMENTS);
    return 0;
}
