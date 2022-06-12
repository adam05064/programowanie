
#include <cstdlib>
#include <iostream>
using namespace std;

template <typename T1, typename T2>

bool maks(T1 a, T2 b) 
{
    if (a > b)
        return true;
    else
        return false;

}

template <>
bool maks(float a, float b)
{
    cout << "takie tam porownanie";
        return false;
}

template <>
bool maks(int a, const char* b) = delete;



int main()
{
    cout << maks(5, 'c');
    cout << maks<float, float>(5.5, 1.5);
}


