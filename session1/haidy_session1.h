#pragma once

#include <iostream>
#include <string>

using namespace std;

class person
{
public:
    // Attributes (data) -> صفات - سمات
    int age;
    double height, weight;
    string name; // -> h a i d y -> ['h', 'a', 'i', 'd', 'y'] -> array of char
    string skin_color;
};

// Definition -> تعريف
void print_adjectives(int age, double height, double weight, string name, string skin_color);
void print_adjectives(person p);