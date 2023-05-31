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

class Student
{

public:
    string name;
    int roll;
    int marks;
};

bool cpm(Student a, Student b)
{

    if (a.marks > b.marks)
    {
        return true;
    }
    else
        return false;
}
int main()
{

    Student array[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, array[i].name);
        cin >> array[i].roll >> array[i].marks;
        getchar();
    }

    // by sort() functions
    sort(array, array + 3, cpm);

    for (int i = 0; i < 3; i++)
    {
        cout << array[i].name << " " << array[i].marks << endl;
    }

    return 0;
}