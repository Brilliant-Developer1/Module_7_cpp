// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;
class Custom_Sort
{

public:
    char c;
    int count;
};

bool cmp(Custom_Sort a, Custom_Sort b)
{

    if (a.count > b.count)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    // set a to z in char c in class object and all count to 0
    Custom_Sort frq[26];
    for (int i = 0; i < 26; i++)
    {
        frq[i].c = (i + 'a');
        frq[i].count = 0;
    }
    // Take input and increase character value in object
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        frq[c - 'a'].count++;
    }
    // custom sort by which charecter is max in the object
    sort(frq, frq + 26, cmp);

    /*
    Print like this
    a 4
    z 3
    x 2
    or like this aaaazzzxx
    input =
    9
    zxzazaxaa
    */
    for (int i = 0; i < 26; i++)
    {
        if (frq[i].count > 0)
        {
            // cout << frq[i].c << " " << frq[i].count << endl;
            for (int j = 0; j < frq[i].count; j++)
            {
                cout << frq[i].c;
            }
        }
    }

    return 0;
}