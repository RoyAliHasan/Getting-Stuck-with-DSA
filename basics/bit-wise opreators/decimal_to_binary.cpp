#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int i = 0;
    int answer = 0;
    while (N != 0)
    {
        int bit;
        bit = N & 1; // N %2;
        answer = answer + (bit * pow(10, i));
        // remove the last Digit
        i++;
        N = N >> 1; // N =N/2
    }
    cout << answer << endl;
}
