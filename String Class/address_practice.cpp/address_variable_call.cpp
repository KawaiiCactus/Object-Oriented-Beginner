#include<iostream>
using namespace std;

// using struct to get address of a variable 'num'
struct num_value
{
    int num;    // user input
};

// Print value of num
void print_num(void* pointer)
{
    num_value* data_pointer = static_cast<num_value*>(pointer);
}

// Main function
int main()
{
    num_value data;
    cout << "Enter a number: ";
    cin >> data.num;

    // get address of the struct with a pointer
    num_value* data_pointer = &data;

    // Pass function to print_num function
    print_num(data_pointer);

}
