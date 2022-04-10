
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin>>n;
    int i=1;
    int k=1;
    while (i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }

        int j=1;

        while (j<=k){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        k=k+2;
        i=i+1;
    }
}
