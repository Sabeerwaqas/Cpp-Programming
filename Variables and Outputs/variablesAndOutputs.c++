#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    /*

    Digits-----Bytes-----Data Range

    8 dig       1 byte      0~255
    16 dig      2 bytes     0~65,535
    32 dig      4 bytes     0~34,359,738,367
    64 dig      8 bytes     0~18,446,744,073,709,551,615

    Operation Padding:





    */

    int decimal_number = 15;        // Decimal number
    int octal_number = 017;         // Octal number equals to 15 in decimal
    int hexadecimal_number = 0x0F;  // Hexadecimal number equals to 15 in decimal
    int binary_number = 0b00001111; // Binary number equals to 15 in decimal

    cout << "Decimal number: " << decimal_number << endl;
    cout << "Octal number into decimal: " << octal_number << endl;
    cout << "Hexadecimal number into decimal: " << hexadecimal_number << endl;
    cout << "Binary number into decimal: " << binary_number << endl;

    /*

    Integers:

        => Stores decimal
        => Typically occupies 4 bytes or more in memory


    Variable:

        A named peice of memory that you use to store
        specific types of data.



        We can initialized variables in C++ using 3 ways

        1) Braced initialization
        2) Functional initialization
        3) Assignment initialization


        Following is the way to initialize variable using "variable braced initialization".

        int variable_braced {10};

        Following is the way to initialize variable using "functional variable initialization".

        int variable_braced (10);


        The main difference between "braced initialization"
         & "functional initialization"
        is that if we assign fractional value in integer variable
        using "functional initialization" it chops fractional part of the value
        silently and assign only integer part in the variable. It is called implicit data type conversion.
        But, in "braced initialization" it throws error regarding fractional value stored in integer
        type variable.



    */

    // Braced initialization

    int lion_count{}; // Initilizes to zero

    int horse_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // We can use expression as initializer

    int expression_initializer{horse_count + cat_count};

    cout << "Expression initialization: " << expression_initializer << endl;

    // int functional_initialization (2.9);

    // cout << "Functional initialization: " << functional_initialization << endl;

    // int braced_initialization {2.9};

    // cout << "Braced initialization: " << braced_initialization << endl;

    // Check the size of variable

    cout << "Size of cat_count is: " << sizeof(cat_count) << " bytes" << endl;

    /*

    Type with modifiers-----Bytes in memory-----Range

    unsigned int            4 bytes             0 ~ 4,294,967,295
    signed int              4 bytes             [-2,147,483,648 ~ 2,147,483,647]



    Note:

        Use suffixes of floating point number which is f at the end of the value of
        it. Similarly, L is the suffixe of long, you don't need to to put suffix of floating point number.



    */

    // Floating point numbers

    cout << setprecision(20) << endl;

    float floating_number{1.12345678901234567890f};
    double double_number{1.12345678901234567890};
    long double long_floting_number {1.12345678901234567890L};


    cout << "Floating point number: " << floating_number << endl; // 1.123456
    cout << "Double floating number: " << double_number << endl;  // 1.12345678901234  
    cout << "Long floating number: " << long_floting_number << endl; // 1.1234567890123456789


    // Boolean data types

    bool green_light {true};
    bool red_light {false};

    cout << boolalpha << endl;

    if (green_light == true){
        cout << green_light << endl;
    }
    else{
        cout << red_light << endl;
    }


    if (green_light == false){
        cout << green_light << endl;
    }
    else{
        cout << red_light << endl;
    }


    



    return 0;
}