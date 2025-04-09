#include "haidy_session1.h"

void print_adjectives(int age, double height, double weight, string name, string skin_color)
{
    // Implementation
    cout << "Age: " << age << endl;
    cout << "height: " << height << endl;
    cout << "weight: " << weight << endl;
    cout << "name: " << name << endl;
    cout << "skin_color: " << skin_color << endl;
}

void print_adjectives(person p)
{
    cout << "Age: " << p.age << endl;
    cout << "height: " << p.height << endl;
    cout << "weight: " << p.weight << endl;
    cout << "name: " << p.name << endl;
    cout << "skin_color: " << p.skin_color << endl;
}

// int main()
// {
//     int age = 22;
//     double height = 163, weight = 57;
//     string name = "haidy"; // -> h a i d y -> ['h', 'a', 'i', 'd', 'y'] -> array of char
//     string skin_color = "white";

//     print_adjectives(age, height, weight, name, skin_color);

//     cout << "**********************************" << endl;

//     age = 25;
//     height = 182;
//     weight = 81;
//     name = "Mohamed";
//     skin_color = "White";

//     print_adjectives(age, height, weight, name, skin_color);

//     cout << "**********************************" << endl;

    // person pp;
    // print_adjectives(pp);


    // cout << "Hello Haidy" << endl;
    // cout << "Hello Haidy\n";
//     return 0;
// }