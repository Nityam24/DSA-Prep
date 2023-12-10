#include <iostream>
#include <string>
using namespace std;

string compareIfElse(int a, int b) {

	if(a>b){
		return "greater";
	}
	else if(a<b){
		return "smaller";
	}
	else{
		return "equal";
	}
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<compareIfElse(a,b);
    return 0;
}


