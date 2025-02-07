#include<iostream>
#include<string>
using namespace std;

// Using structures to get a name from user
struct user
{
    string name;    // Holds user's name
    int age;
    string city;
};

// Function to get user's name
void get_name(user &self)
{
    // get the user's name:
    cout << "Hello! Please enter your name: ";
    // Don't need cin ignore here!!!
    // use getline, remember to use SELF!!!
    getline(cin, self.name);
}

// Main function
int main()
{
    
    user self;
    // Call function remember to use self!!! from here on out!!!
    get_name(self);
    // prints users name
    cout << "Hello " << self.name << endl;

    // Enter your age
    cout << "Enter your age: ";
    getline(cin, self.age);
    cin.ignore(); // Clear the buffer after reading a number

    // Enter you city
    cout << "Enter your city: ";
    getline(cin, self.city);
    return 0;
}
