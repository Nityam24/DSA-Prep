

/**
 * @file floorCeil.cpp
 * @brief This file contains the implementation of the getFloorAndCeil function.
 * 
 * The getFloorAndCeil function takes a vector of integers, the size of the vector, and a target value as input.
 * It finds the largest element in the vector that is less than or equal to the target value (floor) and the smallest element that is greater than or equal to the target value (ceil).
 * The function returns a pair of integers representing the floor and ceil values respectively.
 */
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int ceil=-1,floor=-1;

for(int i=0;i<n;i++){

if(a[i]<=x){

ceil=a[i];

}

if(a[i]>=x){

floor=a[i];

break;

}

}

return {ceil,floor};


}