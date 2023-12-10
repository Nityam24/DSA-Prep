#include<iostream>

using namespace std;

 

int main() {

    // Write your code here

    int n;

    cin >> n;

 

    int r;

    int sum_odd = 0;

    int sum_even = 0;

 

    while (n>0)

    {

        r = n%10;

        if(r%2==0)

            sum_even = sum_even + r;

        else

            sum_odd = sum_odd + r;

 

        n = n/10;

    }

    cout << sum_even << " " << sum_odd;

}

 