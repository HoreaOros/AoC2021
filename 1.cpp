#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


ifstream fin("1.in");

int main()
{
    int prev1, prev2, prev3, current;
    int cnt = 0;
    fin >> prev1 >> prev2 >> prev3;
    int sumPrev = prev1 + prev2 + prev3;
    int sumCurrent;
    while(fin >> current)
    {
        sumCurrent = sumPrev - prev1 + current;
        if(sumCurrent > sumPrev)
            cnt++;
        prev1 = prev2;
        prev2 = prev3;
        prev3 = current;
    }
    cout << cnt;
    return 0;
}
