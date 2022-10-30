// Utkarsh is currently sitting for placements. He has applied to three companies named A,B, and C.

// You know Utkarsh's order of preference among these 33 companies, given to you as characters first,
// second, and third respectively (where first is the company he prefers most).

// You also know that Utkarsh has received offers from exactly two of these three companies,
//  given you as characters xx and yy.

// Utkarsh will always accept the offer from whichever company is highes
// t on his preference list. Which company will he join?
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string first, second, third, x, y;
	    cin >> first >> second >> third;
	    cin >> x >> y;
	    if(x == first)
        cout <<  x << std::endl;
	    else if (y == first)
	    cout << y << endl;
	    else if (x == second)
	    cout<<x<<endl;
	    else
	    cout<<y<<endl;
	}
	return 0;
}
