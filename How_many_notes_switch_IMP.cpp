// C++ program to demonstrate syntax of switch
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    bool flag = 1;
    int amt = 1330;
    int Rs100,Rs50,Rs20,Rs1;

	switch (1) {
	case 1: Rs100 = amt/100;
            amt = amt%100;
            cout<<"Rs100 notes are: "<<Rs100<<endl;

	case 2: Rs50 = amt/50;
            amt = amt%50;
            cout<<"Rs50 notes are: "<<Rs50<<endl;

	case 3: Rs20= amt/20;
            amt = amt%20;
            cout<<"Rs20 notes are: "<<Rs20<<endl;
		
	case 4: Rs1 = amt/1;
            amt = amt%1;
            cout<<"Rs1 notes are: "<<Rs1<<endl;
	}
    return 0;
}
	
