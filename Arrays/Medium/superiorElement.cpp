vector<int> superiorElements(vector<int>&a) {

    int n=a.size();

    vector<int>ans;

    ans.push_back(a[n-1]);

    for(int i=n-1; i>=0; i--){

        if (a[i]>ans.back()){

            ans.push_back(a[i]);

        }

    }

    return ans;

}