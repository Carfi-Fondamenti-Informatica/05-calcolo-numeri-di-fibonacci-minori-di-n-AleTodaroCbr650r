#include <iostream>
using namespace std;

int main() {
   int a=1, b=1, c=0, n=0;
    cin >> n;
    for(int i=0;i>-1;i++){
        if(a<=n){
            cout << a << endl;
            c=a+b;
            a=b;
            b=c;
        }
    }
  
 
   return 0;
}
