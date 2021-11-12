#include <iostream>
using namespace std;

int main() {
   
   int n=0, n1=1, n2=1, n3;
   cin >> n;

   if(n>=2) {
      cout << "1" <<endl;
      cout << "1" <<endl;
      for(int i=2; i<n; i++) {
         
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         cout << n3 << endl;
        }
      
    }else{
      
        cout << "errore" <<endl;
    }
   return 0;
}
