 
#include <iostream>

using namespace std;
 int actualFactorial=1;
int factorial (int x){
   
    if(x ==0 || x==1){
        return 1;
    }else{
        cout<<x<<endl;
        actualFactorial=actualFactorial*x;
        cout<<actualFactorial<<endl;
        return x *factorial(x-1);
    }
}
int main()
{
    
    factorial(10);
    
    return 0;
}
