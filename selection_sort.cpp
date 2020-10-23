#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <bitset>

#define xx first
#define yy second
#define all(x) (x).begin(), (x).end()
#define MAXV 1000000

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

void    print_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        printf("%d ", v[i]);
    printf("\n");
}

int     main()
{
    vector<int> v = { 6, 3, 8, 9, 10, 2, 5, 7, 1, 4 };

    print_vector(v);

    for (int i = 0; i < v.size() - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[minidx] > v[j])
                minidx = j;
        }
        swap(v[i], v[minidx]);
    }
    
    print_vector(v);

    return 0;
}