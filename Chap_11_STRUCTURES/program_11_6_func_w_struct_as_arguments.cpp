// Peogram describing inventory and its parts
// Functions that accept structure variables as 
// arguments in the function:
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct inventory_item
{
    int part_num;   // Holds part #
    string description; // item description
    int on_hand;    // how many units on hand
    double price;   // unit price
};

// Function prototype gets info of truct to
// pass by reference the inventory_item struct
void get_item(inventory_item&); // inventory_item&
// is a reference variable of the struct
// argument is passed by reference!

// Function prototype arguments passed by value.
// Shows/prints all variables and data of struct data
// is printed here, and argument is passed by value:
void show_item(inventory_item);

// main function
int main()
{
    inventory_item (part);    //Here tells you the part name of the part num
    // data type is the structure inventory item which will call from (part) is
    // the parameter.

    show_item (part);         // data type is function show_item with parameters part
    return 0;
}

// Definition function of get_item, uses a structure reference variable as its parameter
// Asks user for info to store in the structure.

void get_item(inventory_item &p)
{
    // address as a reference parameter

    // get the part_num #:
    cout << "Enter the part description: ";
    cin.ignore();       // ignore the remaining newline character:
    getline(cin, p.description);

    // get the quantity on hand:
    cout << "Enter the quantity on hand: ";
    cin >> p.on_hand;

    // get the unit price:
    cout << "Enter the unit price: ";
    cin >> p.price;
}

// definition function show_item: accepts
// an argument of the inventory_item structure type
// contents of structure is displayed:
void show_item(inventory_item p)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part #: " << p.part_num << endl;
    cout << "Units on hand: " << p.on_hand << endl;
    cout << "Price: $" << p.price << endl;
}