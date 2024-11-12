// 2 time


/******************  Decimal to binary (loveBubber)************************/

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int i = 0; // Represents the place value in binary
//     while (n != 0)
//     {

//         int bit = n & 1; // Extracting the least significant bit

//         ans = (bit * pow(10, i)) + ans;

//         n = n >> 1; // Shift right by one bit
//         i++;        // Update 'i'' value
//     }

//     cout << " Answer is " << ans << endl;
//     return 0;
// }

//******************** */

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int i = 1; // Represents the place value in binary
//     while (n != 0)
//     {

//         int bit = n & 1; // Extracting the least significant bit

//         ans = (bit * i) + ans;

//         n = n >> 1;  // Shift right by one bit
//         i = i*10;    // Update 'i'' value
//     }

//     cout << " Answer is " << ans << endl;
//     return 0;
// }

/********************** HW write a code to convert -ve decimal number to binary ************************/
// #include <iostream>
// #include <bitset>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     if (n == 0)
//     {
//         cout << "Answer is 0" << endl;
//         return 0;
//     }

//     bool isNegative = n < 0;
//     unsigned int num;

//     if (isNegative)
//     {
//         num = ~(-n) + 1; // Two's complement for negative number
//     }
//     else
//     {
//         num = n;
//     }

//     string binaryRepresentation = "";

//     while (num != 0)
//     {
//         int bit = num & 1; // Extracting the least significant bit
//         binaryRepresentation = to_string(bit) + binaryRepresentation;
//         num = num >> 1; // Shift right by one bit
//     }

//     if (isNegative)
//     {
//         // Extend the binary representation to 32 bits and convert to two's complement
//         while (binaryRepresentation.length() < 32)
//         {
//             binaryRepresentation = "1" + binaryRepresentation;
//         }
//     }

//     cout << "Answer is " << binaryRepresentation << endl;
//     return 0;
// }

/*********** Binary to decimal(LoveBubber) **************/

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {

//         int digit = n % 10;

//         if (digit == 1)
//         {
//             ans = ans + pow(2, i);
//         }

//         n = n / 10;
//         i++;
//     }

//     cout << " Answer is " << ans << endl;
// }

/*********** Binary to decimal **************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + i;
        }

        n = n / 10;
        i = 2 * i;
    }

    cout << " Answer is " << ans << endl;
}
