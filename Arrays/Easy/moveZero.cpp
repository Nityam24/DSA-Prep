/*
This code implements a function called moveZeros that takes an integer n and a vector of integers arr as input.
The function moves all the zeros in the arr vector to the end while maintaining the relative order of the non-zero elements.
The function returns the modified arr vector.

The main function reads an integer n from the user and then reads n integers into the arr vector.
It calls the moveZeros function to move the zeros to the end of the vector.
Finally, it prints the modified arr vector.
*/


vector<int> moveZeros(int n, vector<int> arr) {

    int Zeros = 0;

    for(int i=0;i<n;i++){

        if(arr[i]==0){

            Zeros++;

        }

    }

 

    int j=0;

 

    for(int i=0;i<n;i++){

        if(arr[i]!=0){

            arr[j++] = arr[i];

        }

    }

 

    while(Zeros--){

        arr[j++] = 0;

    }

 

    return arr;

}

 


int main(){

    int n;

    cin>>n;

 

    vector<int> arr(n);

 

    for(int i=0;i<n;i++){

        cin>>arr[i];

    }

 

    vector<int> ans = moveZeros(n,arr);

 

    for(int i=0;i<n;i++){

        cout<<ans[i]<<" ";

    }

 

    return 0;

}   