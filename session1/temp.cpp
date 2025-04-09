#include <iostream>
#include <string>
#include "haidy_session1.h"

using namespace std;

int main()
{
    person haidy;
    person mohamed;

    haidy.age = 23;
    haidy.weight = 60;
    haidy.height = 170;

    mohamed.age = 25;
    mohamed.weight = 81;
    mohamed.height = 182;
    print_adjectives(haidy);

    return 0;
}