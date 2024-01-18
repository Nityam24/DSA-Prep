int floorSqrt(int n)

{

    // Write your code here.

    int s=1,e=n; //start and end

    int mid=0;

    int ans=1; //ans to be stored

    while(s<=e){

        mid=s+(e-s)/2;

        

        if(mid>(n/mid)){ //Instead of (mid*mid > n) (which can be exceeding the int type(mid*mid) for larger numbers…so instead of directly squaring and comparing..we can divide (mid>(n/mid))…so that extra storage of int is not required..//

            

            e=mid-1;

        }

        else if(mid<(n/mid)){ //here after comparing if the ans is mid,but then after this iteration, mid value gets changed…//

            ans=mid;

            s=mid+1;

        }

        else if(mid==(n/mid)){

            return mid;

        }

    }

   return (n>0)?ans:0; //edge case…n can also be 0

 

    

}