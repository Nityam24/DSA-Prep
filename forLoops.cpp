// #include<bits/stdc++.h>
// using namespace std;

// int fib(int num){

//         if(num!=1 && num!=2){
//         int n1=1,n2=1,n3;
//         for (int i=2;i>num;i++) {
//           n3 = n1 + n2;
//           n1 = n2;
//           n2 = n3;
//         }
//         return n3;
//         }
//         else{
//                 return 1;
//         }
// }
// int main() {
//         int n;
//         cin>>n;
//         cout<<fib(n);

// }

#include<bits/stdc++.h>
using namespace std;

int fib(int num) {
    if (num != 1 && num != 2) {
        int n1 = 1, n2 = 1, n3;
        for (int i = 2; i < num; i++) { // Changed the loop condition here
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        return n3;
    } else {
        return 1;
    }
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);
}

// #include<bits/stdc++.h>

// using namespace std;

 

// int main()

// {

//         /*

//         *  Write your code here. 

//          *  Read input as specified in the question.

//          *  Print output as specified in the question.

//         */

//         int n,prev,fact,sum;

//         prev=1;

//         fact=1;

//         cin>>n;

//         if(n==1 or n==2){

//                 cout<<prev;

//         }

//         else{

//                 for (int i = 2; i < n; i++) {

 

//                   int sum = prev + fact;

//                   prev = fact;

//                   fact = sum;

//                 }

//                 cout << fact;

//         }

// }

 