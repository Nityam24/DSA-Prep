int countDigits(int n){

    int temp=n;

    int cnt=0;

    while(n>0)

    {

        int rem=n%10;

        if(rem!=0 && temp%rem==0)

        cnt++;

        n=n/10; 

    }

   return cnt;

}