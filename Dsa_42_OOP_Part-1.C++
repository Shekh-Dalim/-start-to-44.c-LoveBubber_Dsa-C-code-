//2 timt



/***********************     OOP  part-1    **********************/

//  Public Private Protected
//  Getter and Setter
//  Static and Dynamic
//  Constractor
//  Parameteriest Constructor
//  This keyword
//  Copy Constractor
//  Shallow and Deep copy
//  Copy Assignment Operator
//  Destructor
//  Static keyword

/*

1: If in class is empty then size or of 'a' is 1 for identification ;
2: If in class there is intiger type then size or of a is depend on ineteger type(int ,char,bool,....) for identification ;

*/

// #include <iostream>
// using namespace std;
// class Hero
// {

// public:
//     int health;   // Properties
// };

// int main()
// {
//     // Static Allocation
//     Hero a;  // a is an valriable hero type ka
//     a.health;
//     // a.getHealth;  // when we use getter then this way also write in Static

//     // Dynamically Allocation
//     Hero *b = new Hero;
//     Hero *b = new Hero(); // Correct
//     (*b).health;
//     // b->getHealth;  // when we use getter then this way also write in Dynamic

//     cout << "size: " << sizeof(a) << endl; // h1 = size of property if prperty is empty the size is
//     return 0;
// }

/*------------- getter setter-----------------*/

// Private memeber ko mai class ke bahar acess nehi kar sata iss case mai mai getter and setter use karangai

// #include <iostream>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char level;

//     void print()
//     {
//         cout << level << endl;
//     }

//     int getHealth()
//     {
//         return health;
//     }
//     char getLevel()
//     {
//         return level;
//     }

//     // void sethealth(int h, char pswd)
//     // {
//     //     if (pswd == h)
//     //     {
//     //         health = h;
//     //     }
//     // }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }
// };

// int main()
// {

//     Hero ramesh;

//     ramesh.setHealth(70);
//     ramesh.setLevel('A');

//     cout << "Health is : " << ramesh.getHealth() << endl;
//     cout << "Level is : " << ramesh.getLevel() << endl;

//     cout<<sizeof(ramesh);

//     return 0;
// }

/*----------- Static and Dynamic -----------*/

// #include <iostream>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char level;

//     void print()
//     {
//         cout << level << endl;
//     }

//     int getHealth()
//     {
//         return health;
//     }
//     char getLevel()
//     {
//         return level;
//     }

//     // void sethealth(int h, char pswd)
//     // {
//     //     if (pswd == h)
//     //     {
//     //         health = h;
//     //     }
//     // }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }
// };

// int main()
// {

//     // Static
//     Hero a;
//     a.setHealth(70);
//     a.setLevel('A');
//     cout << "level is: " << a.getLevel() << endl;
//     cout << "level is: " << a.level << endl;
//     cout << "health is: " << a.getHealth() << endl;
//     // cout << "health is: " << a.health << endl;  // not run due to private member

//     // Dynamically
//     // use (*b)
//     Hero *b = new Hero;
//     b->setHealth(79);
//     b->setLevel('B');
//     cout << "level is: " << (*b).level << endl;
//     cout << "health is: " << (*b).getHealth() << endl;

//     // or ->

//     cout << "level is: " << b->level << endl;
//     cout << "health is: " << b->getHealth() << endl;

//     return 0;
// }

// /*------------  Default Construtor ----------*/

// #include <iostream>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char level;

//     Hero()
//     {
//         cout << "when object created constructor call automatically" << endl;
//     }
// };

// int main()
// {

//     // object create statically
//     // Hero a;  // when object call constructor call autometically

//     // object create Dinamically
//     Hero *p = new Hero;  // correct without bracket
//     // Hero *p = new Hero(); // correct with bracket

//     return 0;
// }

/*------------  Parameterise Construtor ----------*/

// This is a pointer point to the currect object
// When we declare any constructor, the default constructor 'dies'

// #include <iostream>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char level;
//     // Hero(){

//     // }

//     Hero(int health)
//     {
//         cout << "this-> " << this << endl;
//         this->health = health;
//     }

//     Hero(int health,char level)
//     {
//         this->level = level;
//         this->health = health;
//     }

//     int getHealth()
//     {
//         return health;
//     }
//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }
//       // Define the print method
//     void print()
//     {
//         cout << "Health: " << health << ", Level: " << level << endl;
//     }
// };

// int main()
// {

//     Hero ramesh(10);
//     // cout << "Adress of ramesh: " << &ramesh << endl;
//     ramesh.print();

//     Hero temp(22,'B');
//     temp.print();

//     // Dynamically
//     // Hero *h = new Hero(11);
//     // h->print();

//     return 0;
// }

/*------------  Copy Construtor ----------*/

// #include <iostream>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char level;

//    // Parameterise constructor
//     Hero(int health, char level)
//     {
//         this->level = level;
//         this->health = health;
//     }

//     // Copy constructor
//     Hero(Hero &temp)  //use pass by reference otherwise you will trap in loop 56:17
//     {
//         cout<<"Copy constructor call: "<<endl;
//         this->level = temp.level;
//         this->health = temp.health;
//     }

//     // Define the print method
//     void print()
//     {
//         cout << "Health: " << this->health << ", Level: " << this->level << endl;
//     }
// };

// int main()
// {

//     Hero S(70, 'c');
//     S.print();

//     Hero R(S); // "When I write a statement like this, the copy constructor gets called."
//     R.print();

//     return 0;
// }

// /*----------  Shallow copy -------------*/

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char *name;
//     char level;

//     Hero()
//     {
//         cout<<"Simple constructor called"<<endl;
//         name = new char[100];
//     }

//     // Parameterise constructor
//     Hero(int health, char level)
//     {
//         this->level = level;
//         this->health = health;
//     }

//     int getHealth()
//     {
//         return health;
//     }
//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }

//     // Define the print method
//     void print()
//     {
//         cout<<endl;
//         cout<<"Name: "<<this->name<<",";
//         cout << "Health: " << health << ", Level: " << level << endl;
//     }
//     void setName(char name[]){
//         strcpy(this->name,name);
//     }
// };

// int main()
// {

//     Hero hero1;
//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babber";
//     hero1.setName(name);

//     hero1.print();

//     //use default copy constructor
//     Hero hero2(hero1);  // call default copy constructor
//     // Hero hero2 = hero1;  // call default copy constructor
//     hero2.print();

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     return 0;
// }

// /*---------- Deep copy -------------*/

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char *name;
//     char level;

//     Hero()
//     {
//         cout<<"Simple constructor called"<<endl;
//         name = new char[100];
//     }

//     // Parameterise constructor
//     Hero(int health, char level)
//     {
//         this->level = level;
//         this->health = health;
//     }

//     // Copy constructor
//     Hero(Hero &temp) // use pass by reference otherwise you will trap in loop 56:17
//     {
//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch,temp.name);
//         this->name = ch;

//         cout << "Copy constructor call: " << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     int getHealth()
//     {
//         return health;
//     }
//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }

//     // Define the print method
//     void print()
//     {
//         cout<<endl;
//         cout<<"Name: "<<this->name<<",";
//         cout << "Health: " << health << ", Level: " << level << endl;
//     }
//     void setName(char name[]){
//         strcpy(this->name,name);
//     }
// };

// int main()
// {

//     Hero hero1;
//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babber";
//     hero1.setName(name);

//     hero1.print();

//     //use default copy constructor
//     Hero hero2(hero1);  // call default copy constructor
//     // Hero hero2 = hero1;  // call default copy constructor
//     hero2.print();

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     return 0;
// }

// /*---------- Copy assignment operator -------------*/

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char *name;
//     char level;

//     Hero()
//     {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }

//     // Parameterise constructor
//     Hero(int health, char level)
//     {
//         this->level = level;
//         this->health = health;
//     }

//     // Copy constructor
//     Hero(Hero &temp) // use pass by reference otherwise you will trap in loop 56:17
//     {
//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch;

//         cout << "Copy constructor call: " << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     int getHealth()
//     {
//         return health;
//     }
//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }

//     // Define the print method
//     void print()
//     {
//         cout << endl;
//         cout << "Name: " << this->name << ",";
//         cout << "Health: " << health << ", Level: " << level << endl;
//     }
//     void setName(char name[])
//     {
//         strcpy(this->name, name);
//     }
// };

// int main()
// {

//     Hero hero1;
//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babber";
//     hero1.setName(name);

//     // use default copy constructor
//     Hero hero2 = hero1;  // call default copy constructor

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     hero1 = hero2;

//     hero1.print();

//     hero2.print();

//     return 0;
// }

/*---------- Destructor-------------*/

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char *name;
//     char level;

//     Hero()
//     {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }

//     // Destructor
//     ~Hero(){
//         cout<<"Destructor bhai called: "<<endl;
//     }
// };

// int main()
// {
//     //Static
//     Hero a;

//     //Dynamic
//     Hero *b = new Hero();
//     delete b;  // manually destructor call

//     return 0;
// }

// // /*----------  Static keyword -------------*/

// #include <iostream>
// #include <cstring>
// using namespace std;
// class Hero
// {
// private:
//     int health;

// public:
//     char *name;
//     char level;
//     static int timeToComplete;

//     Hero()
//     {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }
// };

// int Hero::timeToComplete = 5;

// int main()
// {
//     cout << Hero::timeToComplete << endl;

//     Hero a; // chal to jayega but object se belong nehi karegengai
//     cout << a.timeToComplete << endl;

//     return 0;
// }
// /*----------  Static funtion() -------------*/

#include <iostream>
#include <cstring>
using namespace std;
class Hero
{
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    static int random()
    {
        cout << timeToComplete << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{
    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    return 0;
}
