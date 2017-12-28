#include<iostream>
using namespace std;

void inc(int n){
	if(n==0){
		return;
	}
	inc(n-1);
	cout<<n<<" ";
}
void dec(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	dec(n-1);
}

char spellings[10][100] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpellings(int n){
	if(n==0){
		return;
	}
	//Otherwise
	printSpellings(n/10);
	cout<<spellings[n%10]<<" ";
}

int powerFast(int a,int b){
	if(b==0){
		return 1;
	}
	int a2 = powerFast(a,b/2);
	
	if(b%2==1){
		return a*a2*a2;
	} 
	return a2*a2;
}

int ways(int n,int k){
	// Base Cases
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	//Recursive Case
	int ans = 0;
	for(int i=1;i<=k;i++){
		ans = ans + ways(n-i,k);
	}

	return ans;
}

int gridways(int m,int n){
	if(m==0&&n==0){
		return 1;
	}
	if(m<0||n<0){
		return 0;
	}
	return gridways(m,n-1) + gridways(m-1,n);
}

void toh(int n,char src,char dest,char helper){
	
	if(n==0){
		return;
	}

	toh(n-1,src,helper,dest);
	cout<<"Shifting "<<n<<" disk from "<<src<<" to "<<dest<<endl;
	toh(n-1,helper,dest,src);
}

int strToInt(char a[],int n){
	if(n==0){
		return 0;
	}

	int last_char = a[n-1] -'0';
	int chotaAns = strToInt(a,n-1);

	return chotaAns*10 + last_char;
}

int main(){

	cout<<strToInt("12345",5)<<endl;

	/*inc(5);
	cout<<endl;
	dec(5);
	cout<<endl;
	printSpellings(2048);
	cout<<powerFast(5,4)<<endl;
	cout<<ways(4,3)<<endl;
	*/
	int n;
	cin>>n;
	toh(n,'A','C','B');




	return 0;	
}
