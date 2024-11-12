// 2 time 


/*********    1:  container -> sequence container -> Array**********/

/*
timecomplexity:
  erase() : o(n)
  begin() : o(1)
  end()   : o(1)
+
// */
// #include <iostream>
// #include <array>

// using namespace std;

// int main()
// {
//   // int basic[3] = {1, 2, 3};
//   // Array<type,size> arrayName = { };
//   array<int, 4> a = {1, 2, 3, 4}; // STL array also a static array

//   int size = a.size();

//   for (int i = 0; i < size; i++)
//   {
//     cout << a[i] << " ";
//   }
//   cout << endl;
//   cout << "Element at 2nd Index-> " << a.at(2) << endl;
//   cout << "Empty or not-> " << a.empty() << endl;  // ans Return in boolean(0,1)   // // O(1)
//   cout << "First Element-> " << a.front() << endl;   // O(1)
//   cout << "End Element-> " << a.back() << endl;   // O(1)
//   return 0;
// }

// /*********    2:  container -> sequence container -> vector**********/

// "size()" tells you how many elements you currently have.
// "capacity()" tells you how large the size can get before the vector needs to reallocate memory for itself  (A vector reallocates memory when the number of elements goes beyond its current capacity.)    //// Kitni memori ko assign hui pari hai

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> v; // Jab ek new vector create hota hai tab uska size hota hai 0;

//   // vector<type> a(size,initialise);
//   vector<int> a(5, 1);
//   cout << "Print a" << endl;
//   {
//     for (int i : a)
//     {
//       cout << i << " ";
//     }
//     cout << endl;
//   }

//   vector<int> last(a);  // vector name 'last' jiske ander 'a' vector ki all elemnt store kar dia 
//   cout << "Print last" << endl;
//   {
//       for (int i : last)
//       {
//         cout << i <<" ";
//       }
//       cout<<endl;
//   }

  // cout << "Capacity-> " << v.capacity() << endl;

  // v.push_back(1); // push_back funtion use for push an element
  // cout << "Capacity-> " << v.capacity() << endl;

  // v.push_back(2);
  // cout << "Capacity-> " << v.capacity() << endl;

  // v.push_back(3); // space before(2)*double so 2*2 = 4
  // cout << "Capacity-> " << v.capacity() << endl;
  // cout << "Size-> " << v.size() << endl;

  // cout << "Element at 2nd Index " << v.at(2) << endl;
  // cout << "First Element-> " << v.front() << endl;
  // cout << "First Element-> " << v.back() << endl;

  // cout << "before pop" << endl;
  // for (int i : v)
  // {
  //     cout << i << " ";
  // }
  // cout << endl;

  // v.pop_back();

  // cout << "after pop" << endl;
  // for (int i : v)
  // {
  //     cout << i << " ";
  // }
  // cout << endl;

  // cout << "size before clear-> " << v.size() << endl;
  // v.clear();
  // cout << "size after clear-> " << v.size() << endl; // After clearing size become 0

  // cout << "capacity before clear-> " << v.capacity() << endl;
  // v.clear();
  // cout << "capacity after clear-> " << v.capacity() << endl; // After clearing capacity not become 0

//   return 0;
// }

// /*********    3:  container -> sequence container -> Deque**********/

// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);

//     // for (int i : d)
//     // {
//     //     cout<<i<<" ";
//     // }

//     // d.pop_back();
//     // d.pop_front();
//     // cout<<endl;
//     // for (int i: d)
//     // {
//     //     cout<<i<<" ";
//     // }
// //     cout<<endl;
//     // cout<<"Print First Index Element -> "<<d.at(1)<<endl;
//     // cout<<"front "<<d.front()<<endl;    // O(1)
//     // cout<<"Back "<<d.back()<<endl;       // O(1)

// // // Erace karne ke bad size 0 ho jata hai but maxsize jitni startig mai hoti hai utni ending mai hoti hai
//     cout<<"Before Erase"<<d.size()<<endl;
//     // d.erase(d.begin());      // O(n)
//     // d.erase(d.begin(),d.begin()+1);      // O(n)
//     cout<<"After Erase"<<d.size()<<endl;

//     for (int i:d)
//     {
//        cout<<i<<endl;
//     }
//     return 0;
// }

// /*********    4:  container -> sequence container -> List**********/

// List ki implementation doubly link list ke baje sai hota hai 
//"List" is a doubly linklist
// Direct access is not possible (means do not able to use different type of operation  )   -> Direct access kar ke element nehi nikal sakte hum step by step uus element ke pas jana parenga  

// #include <iostream>
// #include <list>

// using namespace std;
// int main()
// {
//     list<int> l;

//     list<int> n(5, 100);
//     for (int i : n)
//     {
//         cout << i << " ";
//     }

//     // l.push_back(1);
//     // l.push_front(2);

//     // for (int i : l)
//     // {
//     //     cout << i << " ";
//     // }
//     // cout << endl;
//     // l.erase(l.begin());
//     // // l.erase(l.begin(),l.begin()+1); // error 
//     // cout << "After erase" << endl;
//     // for (int i : l)
//     // {
//     //     cout << i << " ";
//     // }
//     // cout << "Size of list->" << l.size() << endl;
//     return 0;
// }

// /*********    5:  container -> Containers Adaptors -> stack**********/

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<string> s;

//     s.push("love");
//     s.push("babber");
//     s.push("kumar");
//     cout << "Top Element-> " << s.top() << endl;

//     s.pop();

//     cout <<"Top Element-> " << s.top() << endl;
//     cout <<"Size of stack " << s.size() << endl;

//     cout<<"Empty or not "<<s.empty()<<endl;

//     return 0;
// }

// /*********    6:  container -> Containers Adaptors -> Queue**********/

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<string> s;

//     s.push("love");
//     s.push("babber");
//     s.push("kumar");
//     cout << "before pop Element-> " << s.front() << endl;

//     s.pop();

//     cout <<"after pop Element-> " << s.front() << endl;
//     cout <<"After pop Size of queue " << s.size() << endl;

//     // cout<<"Empty or not "<<s.empty()<<endl;

//     return 0;
// }

// /*********    7:  container -> Containers Adaptors -> Priority Queue**********/

// Default priority queue is alaways max_heap
// if we create max_heap always return maximum element
// if we create min_heap always return minimum element
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     // /******  Max Heap ******/
//     priority_queue<int> maxi;

//     // /* Max Heap*/
//     priority_queue<int ,vector<int> ,greater<int>> mini;
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     cout<<"size ->"<<maxi.size()<<endl;
//     int n = maxi.size();
//     for (int i = 0; i <n; i++)
//     {
//         cout<<maxi.top()<<" ";  // Print kya
//         maxi.pop();             // Bahar nikal dia
//     }
//     cout<<endl;

//     // /******  min Heap ******/

//     mini.push(1);
//     mini.push(3);
//     mini.push(2);
//     mini.push(0);
//     int m = mini.size();
//     for (int i = 0; i < m; i++)
//     {
//         cout << mini.top() << " "; // Print kya
//         mini.pop();                // Bahar nikal dia
//     }
//     cout << endl;

//     cout<<"khali hai kaya vai "<<mini.empty()<<endl;

//     return 0;
// }

// /*********    8:  container -> Associative Containers -> set **********/

// sare ke sare unique element store hota hai(means set ke andar agar 5 bar 5 store kia firvi oo ek hii bar store hoga )
// use BST
// not possible to momodify (Either insert of delete no modification)
// Return element in the sorted order

/* different between unorder_set and set is
Set is a container that stores sorted and unique elements.       Unordered_set does not sort and stores unique elements
Set is slow as compare with Unordered_set                        Unordered_set is fast as compare with  set
*/

// insert(),find(),error(),count() time complexity is log(n)  except all are 0(1)

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(1);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);
//     s.insert(0);
//     for (int i : s)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     // s.erase(s.begin());
//     // s.erase(s.begin());

//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);

//     for (int i : s)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << "5 is present or not ->" << s.count(5) << endl;
//     cout << "-5 is present or not ->" << s.count(-5) << endl;
//     set<int>::iterator itr = s.find(5);
//     for (auto it = itr; it != s.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
//     return 0;
// }

// /*********    9:  container -> Associative Containers -> Map **********/

// In 'map' data store in the form of key value ;
// All key are unique.
// one key point to one value. one key never pint to more then one value.
// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int, string> m;

//     m[1] = "babbar"; // 1 is key babbar is value
//     m[13] = "love";
//     m[3] = "kumar";

//     m.insert({5, "bheem"});

//     cout << "before erase" << endl;
//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << "finding 13-> " << m.count(13) << endl;
//     cout << "finding -13-> " << m.count(-13) << endl; // Corrected the key for clarity
//     m.erase(13);
//     cout << "after erase" << endl;
//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }

//     auto it = m.find(5);

//     for (auto i = it; i != m.end(); i++)
//     {
//        cout << (*i).first << endl; // Corrected 'end' to 'endl'
//     }

//     return 0;
// }

/**********    STL algo  ** */

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(6);
//     v.push_back(7);
//     cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 5) << endl;
//     cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;
//     cout << "lower bound->" << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
//     cout << "upper bound->" << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

//     int a = 3;
//     int b = 5;
//     cout << "max->" << max(a, b) << endl;
//     cout << "min->" << min(a, b) << endl;
//     swap(a, b);
//     cout << "a->" << a << endl;

//     string abcd = "abcd";
//     reverse(abcd.begin(), abcd.end());
//     cout << "string-> " << abcd<< endl;

//     rotate(v.begin(),v.begin()+1,v.end());
//     cout<<"After rotate <<endl";
//     for (int i:v)
//     {
//        cout<<i<<" ";
//     }

//     return 0;
// }