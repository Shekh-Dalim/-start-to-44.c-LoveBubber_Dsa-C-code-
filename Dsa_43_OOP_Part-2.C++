// 2 timt

/********************    OOP Part-2  *******************/

/***************************  1: Encapsulation  **********************/
// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int age;
//     int height;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
// };
// int main()
// {
//     Student first;
//     cout<<"Sab sahi chal rha";
//     return 0;
// }

/**************  2:  Inheritance (useing public,private,protected) ********/

// #include <iostream>
// using namespace std;

// class Human
// {

// public:
//     int age;
//     int weight;
//     int height;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
//     int setweight(int w)
//     {
//         this->weight = w;
//     }
// };
// class Male : public Human      // Public 1
// // class Male : private Human     // Protected 2
// // class Male : protected Human   // Protected 3
// {

// public:
//     string color;

//     void sleep()
//     {
//         cout << "male Sleeping" << endl;
//     }
// };

// int main()
// {


//     // 1: PUBLIC TO PUBLIC DERIVATION ****************

//     // Male object1;
//     // cout << object1.age<<endl;
//     // cout << object1.weight<<endl;
//     // cout << object1.height<<endl;

//     // cout << object1.color<<endl;

//     // object1.setweight(84);
//     // cout<<object1.weight<<endl;
//     // object1.sleep();

//     //2:PUBLIC TO  PROTECTED DERIVATION ************

//     // Male m1;
//     // cout << m1.height << endl;

//     //3: PUBLIC TO  Private DERIVATION ************

//     // Male m1;
//     // cout << m1.height << endl;

//     return 0;
// }
   



                         
                         
/**************** 3:   Compile time polymorphism (Funtion overloading) *********************/
// 1: Funtion overloading with different number of argument.


// #include <iostream>
// using namespace std;

// class A
// {

// public:
//     void sayHelllow()
//     {
//         cout << "Hellow love Bubber 1" << endl;
//     }
//     // int sayHelllow()   // if we change only return type then through error
//     // {
//     //     cout << "Hellow love Bubber" << endl;
//     // }
//     void sayHelllow(string name)  // must to change the input argument 
//     {
//         cout << "Hellow love Bubber 2" << endl;
//     }
// };

// int main()
// {
//     A obj;
//     obj.sayHelllow();
//     return 0;
// }       

// /**************** 3:  Compile time polymorphism (Funtion overloading)  *********************/
// // 2: Funtion overloading with different types of argument.

// #include <iostream>
// using namespace std;

// // Operator Overloading
// class A
// {
// public:
//     // Corrected overloaded functions with different parameter types.
//     void sayHello()
//     {
//         cout << "Hello love Bubber" << endl;
//     }

//     void sayHello(char name)
//     {
//         cout << "Hello love " << name << endl;
//     }

//     void sayHello(string name)
//     {
//         cout << "Hello " << name << endl;
//     }
// };

// int main()
// {
//     A obj;
//     obj.sayHello();
//     obj.sayHello('d');
//     obj.sayHello("Dalim");

//     return 0;
// }

/**************** 3:   Compile time polymorphism (Funtion overloading)  *********************/
// 2: Funtion overloading with default argument can be called with 2 or 3 or 4 argument.

// #include <iostream>
// using namespace std;

// int add(int x, int y, int z = 0, int w = 0)
// {
//     return (x + y + z + w);
// }

// int main()
// {
//     cout<<add(10,20)<<endl;
//     cout<<add(10,20,30)<<endl;
//     cout<<add(10,20,30,40)<<endl;

//     return 0;
// }


/**************** 3:  Compile time polymorphism (Operator overloading)  *********************/


// #include <iostream>
// using namespace std;

// // Operator Overloading

// class B
// {
// public:
//     int a;
//     int b;

// public:
//     int add()
//     {
//         return a + b;
//     }

//     void operator+(B &obj)
//     {
//         int value1 = this->a;
//         int value2 = obj.a;
//         cout << "Output: " << value2 - value1 << endl;
//         cout << "Hellow Babber" << endl;
//     }
//     void operator()()
//     {
//         cout << "Mai Bracket hu " << this->a << endl;
//     }
// };

// int main()
// {
//     // Operator Overloading
//     B obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7; // Corrected to assign to 'a' instead of 'b'
//     obj1 + obj2;
//     obj1();


//     return 0;
// }


/**************** 3: Run time Polymorphism (Funtion overriding)  *********************/


// #include <iostream>
// using namespace std;

// // method overriding
// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "Speaking " << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void speak()  // if this speak() funtion not call then print "Speaking"
//     {
//         cout << "Barking " << endl;
//     }
// };

// int main()
// {
    
//     // Method Overloading

//      Dog obj;
//      obj.speak();

//     return 0;
// }



/************** 4: Abstruction ************/

#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0; // This makes Animal an abstract class
};

// Derived class
class Dog : public Animal {
public:
    void sound() override { // Implementing the pure virtual function
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void sound() override { // Implementing the pure virtual function
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound(); // Output: Woof! Woof!
    animal2->sound(); // Output: Meow! Meow!

    delete animal1;
    delete animal2;

    return 0;
}
