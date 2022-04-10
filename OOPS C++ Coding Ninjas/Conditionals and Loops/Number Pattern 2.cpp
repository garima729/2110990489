//Print the following pattern
//Pattern for N = 4
//...1
//..23
//.345
//4567
//The dots represent spaces.

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }

        int j=1;
        int k=i;
        while (j<=i){
            cout<<k;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
