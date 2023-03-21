// bugs introduced: DS
#include <iostream>

int main()
{
    // Variables
    int a = 0, b = 1;
    int sum_even = 0
    
    // While in a range
    while (b < 4000000) {
        // Commence fibonacci sequence
        if (b % 2 = 0) {
            sum_even += b;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    
    // Print result
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
