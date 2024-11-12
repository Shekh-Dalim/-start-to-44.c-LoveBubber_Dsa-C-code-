// 1 time

/************ 1:Q:Length of String********* */

// #include <iostream>
// using namespace std;
// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout << "Enter your name: ";
//     cin >> name;

//     // Print before the null character
//     // name[2] = '\0';
//     // cout << "Your name is: " << name << endl;

//     // count the number of string
//     int count = getLength(name);
//     cout << "Number of string is: " << count;
//     return 0;
// }

/************ 2:Q:Reverse of String********* */

// #include <iostream>
// using namespace std;
// void Reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1; // Length of string
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }
// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout << "Enter your name: ";
//     cin >> name;

//     // Print before the null character
//     // name[2] = '\0';
//     cout << "Your name is: " << name << endl;

//     // count the number of string
//     int count = getLength(name);
//     cout << "Number of string is: " << count << endl;
//     Reverse(name, count);

//     cout << "Reverce array is: "<<name;
//     return 0;
// }

/*************** 3:Q Check Palimdrom (ME) *********** */
// #include <iostream>
// using namespace std;

// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// bool isPalindrome(char arr[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         if (arr[s] != arr[e])
//         {
//             return false;
//             break;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// int main()
// {
//     char name[20];
//     cout << "Enter your name: ";
//     cin >> name;

//     int count = getLength(name);
//     cout << "Number of characters in the string: " << count << endl;

//     if (isPalindrome(name, count))
//     {
//         cout << "The string is a palindrome." << endl;
//     }
//     else
//     {
//         cout << "The string is not a palindrome." << endl;
//     }

//     return 0;
// }

/*************** 3:Q Check Palimdrom in avoiding case sensative  (LOvebubber) *********** */

// #include <iostream>
// using namespace std;
// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// bool checkPalindrome(char a[], int n)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (toLowerCase(a[s]) != toLowerCase(a[e]))
//         {
//             return 0;
//             break;
//         }
//         else
//         {

//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// void Reverse(char name[], int n)
// {
//     int s = 0;
//     int e = n - 1; // Length of string
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }
// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout << "Enter your name: ";
//     cin >> name;

//     // Print before the null character
//     // name[2] = '\0';
//     cout << "Your name is: " << name << endl;

//     // count the n umber of string
//     int count = getLength(name);
//     cout << "Number of string is: " << count << endl;
//     Reverse(name, count);

//     cout << "Reverce array is: " << name << endl;

//     cout << "Palimdrom or not: " << checkPalindrome(name, count) << endl;

//     // cout<<"CHARACTER is "<<toLowerCase('b')<<endl;
//     // cout<<"CHARACTER is "<<toLowerCase('C')<<endl;
//     return 0;
// }

/************ leetcode_125 Q:4:Valid Palimdrom ********** */
// #include <iostream>
// #include <string>
// using namespace std;

// // Function to check if a character is alphanumeric
// bool valid(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//     {
//         return true;
//     }
//     return false;
// }

// // Function to convert an uppercase character to lowercase
// char toLowerCase(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         return ch - 'A' + 'a'; // Convert uppercase to lowercase
//     }
//     return ch; // If already lowercase or a digit, return as is
// }

// // Function to check if a string is a palindrome
// bool checkPalindrome(string temp)
// {
//     int s = 0;
//     int e = temp.length() - 1;
//     while (s <= e)
//     {
//         if (temp[s] != temp[e])
//         {
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// // Main function to clean the string and check if it's a palindrome
// int main()
// {
//     string str = "A man, a plan, a canal: Panama";  // Input string
//     string temp = ""; // Temporary string to store valid characters

//     // Remove invalid characters and convert to lowercase
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (valid(str[i]))
//         {
//             temp.push_back(toLowerCase(str[i]));
//         }
//     }

//     // Check if the cleaned string is a palindrome
//     if (checkPalindrome(temp))
//     {
//         cout << "The string is a palindrome!" << endl;
//     }
//     else
//     {
//         cout << "The string is not a palindrome." << endl;
//     }

//     return 0;
// }

/************ leetcode_186 Q:5:Reverse word in a string  ********** */
// #include <iostream>
// using namespace std;

// string reverseWord(string temp) {
//     int s = 0;
//     int e = temp.length() - 1;

//     while (s < e) {
//         swap(temp[s++], temp[e--]);
//     }
//     return temp;
// }

// string reverseEachWord(string st) {
//     int start = 0;
//     for (int i = 0; i <= st.length(); i++) {
//         // When we encounter a space or the end of the string
//         if (i == st.length() || st[i] == ' ') {
//             string word = st.substr(start, i - start);  // Extract the word   * substr(start, length)
//             word = reverseWord(word);  // Reverse the word
//             st.replace(start, i - start, word);  // Replace the original word with the reversed one  *: replace(pos, len, new_str)
//             start = i + 1;  // Move to the next word
//         }
//         else{
//             continue;
//         }
//     }
//     return st;
// }

// int main() {
//     string input = "my name is love";
//     string reversedWords = reverseEachWord(input);

//     cout << "Reversed string: " << reversedWords << endl;
//     return 0;
// }

/******************* HW Q:6:Return maximum occuring character in an input array  *****************/
// #include <iostream>
// using namespace std;

// char getMaxOccCharacter(string s)
// {
//     int arr[26] = {0};

//     // step-1  Create an array to count occurrences of characters
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];

//         int number = 0;
//         number = ch - 'a'; // LowerCase
//         arr[number]++;
//     }

//     // step-2  Find the character with the maximum occurrence
//     int maxi = -1;
//     int ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;       // Store the index of the character
//             maxi = arr[i]; // Update the maximum count
//         }
//     }

//     // step-3  Convert the index back to character
//     char finalAns = 'a' + ans; // Convert index to character (assuming all are lowercase)
//     return finalAns;
// }

// int main()
// {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s; // Read the input string

//     char maxOccCharacter = getMaxOccCharacter(s);                       // Call the function
//     cout << "Maximum occurring character: " << maxOccCharacter << endl; // Output the result

//     return 0;
// }

// /******************* Q:7:Replace space  *****************/

/* ---------------------------use extra temp arr   TC- O(n²)---------------------------*/

// #include <iostream>
// #include <vector>
// using namespace std;

// string RepPlace(string str)
// {
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

// int main()
// {
//     string str;
//     cout << "Enter the string: ";
//     getline(cin, str); // To capture the entire line including spaces
//     string modifiedStr = RepPlace(str);
//     cout << "Modified string: " << modifiedStr << endl;

//     return 0;
// }

/* ---------------------------repace in same array (TC - O(n)) ---------------------*/
// #include <iostream>
// using namespace std;

// string replaceSpace(string st)
// {
//     string replacement = "@40";
//     for (int i = 0; i < st.length(); i++)
//     {
//         if (st[i] == ' ')
//         {
//             // Replace the space with "@40"
//             st.replace(i, 1, replacement);
//             // Move the index forward by the length of the replacement minus 1
//             i += replacement.length() - 1; // correct
//         }
//     }
//     return st; // Return the modified string
// }

// int main()
// {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s); // Read the input string

//     // Call the function and print the result
//     cout << replaceSpace(s) << endl;

//     return 0;
// }

/*************** 1910 Q:8:Remove all occurence of substring  ********** */

// s.find(part):- It returns the position (index) of the first occurrence of the substring or character in the string. 
// s.erase(start_index, length)

// #include <iostream>
// #include <string>
// using namespace std;

// string removeOccurrences(string s, string part)
// {
//     // Continue removing 'part' from 's' as long as it is found in the string
//     while (s.length() != 0 && s.find(part) < s.length())
//     {
//         s.erase(s.find(part), part.length()); 
//     }
//     return s;
// }

// int main()
// {
//     // Input string and part to be removed
//     string s = "daabcbaabcbc";
//     string part = "abc";
    
//     // Call the removeOccurrences function
//     string result = removeOccurrences(s, part);
    
//     // Output the result
//     cout << "Resulting string: " << result << endl;
    
//     return 0;
// }


/****************  (Having some error not run in lletcode side )567 Q:9:Permutation in string   ***************** */
// class Solution {
// private:
//     bool checkEqual(int a[26], int b[26]) {
//         for(int i = 0; i<26; i++){
//             if(a[i] != b[i])
//             return 0;
//         }
//         return 1;
//     }
// public:
// bool checkInclusion(string s1, string s2){

//     // character count array
//     int count1[26] = {0};
//     for(int i = 0; i<s1.length(); i++){
//         int index = s1[i] - 'a';
//         count1[index]++;
//     }
// }
// // traverse s2 string in window of size s1 length and compare
// int i = 0;
// int windowSize = s1.length();
// int count2[26] = {0};

// //running for first window

//     while (i < windowSize && i < s2.length()){
//     int index = s2[i] - 'a';
//     count2[index]++;
//     i++;
// }
// if(checkEqual(count1,count2)){
//     return 1;
// }

// //Aage window process karo
// while(i<s2.length()){
//     char newChar = s2[i];
//     int index = newChar - 'a';
//     count2[index]++;

//     char oldChar = s2[i-windowSize];
//     index = oldChar - 'a';
//     count2[index]--;

//     i++;

//     if(checkEqual(count1, count2))
//     return 1;
// }
// return 0;
// };

/************************** (Having some error)1047 Q:10:Remove all Adjacent  dublicate in string */

// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i = 0;
//         int ansIndex = 0;
//         int n = chars.size();

//         while(i<n)
//         {
//             int j =i+1;
//             while(j<n && chars[i]==chars[j])
//             {
//                 j++;
//             }
//             // yaha kab aaoge
//             // ya tob vector pura travese karega
//             // Ya der new/different character encounter kia hai

//             //oldChar store karlo
//             chars[ansIndex++] = chars[i];

//             int count = j-i;

//             if(count > 1){
//                 //converting counting into single digit and saving in answer
//                 string  cnt = to_string(count);
//                 for(char ch: cnt)
//                 {
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             i = j;
//         }
//             return ansIndex;
//     }
// };