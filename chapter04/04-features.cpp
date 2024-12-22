#include <iostream>
#include <string>
using namespace std;

void computeFeature(string);

int main()
{
    string text="C++ is fun";
    computeFeature(text);

    text+=" for everyone";
    computeFeature(text);

    text="C++ fun";
    computeFeature(text);

    text.clear();
    computeFeature(text);

    return 0;
}

void computeFeature(string text)
{
    cout << endl << "String: " << text << endl;

    cout << "Size: " << text.size();
    cout << "   Capacity: " << text.capacity();
    cout << "   Empty?: " << text.empty() << endl;
}
