
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n;
	    if(n==1)
	    cout<<"1"<<" " << n <<endl;
	    else if(n%2==1)
	    {
	        cout<<"1"<<" "<<n<<endl;
	    }
	    else
	    cout<<"2"<<" "<<n/2<<endl;
	}
	return 0;
}
