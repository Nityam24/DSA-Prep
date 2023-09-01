bool checkArmstrong(int n){
	int sum=0;
	int temp=n;
	int count = log10(n)+1; 
	while(n){
	    int x=n%10;
		sum +=pow(x,count);
		n/=10;
	}
	return(temp==sum);
	}
