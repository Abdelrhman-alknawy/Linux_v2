#include<iostream>
using namespace std ;

namespace iti {
    void name(void)
    {
        cout<<"hello  iam namespace iti "<<endl;
    }
template<typename T>
T mul(T num1 , T num2 )
{
    return num1 * num2 ;
}
}
namespace mansoura {
    void name (void)
    {
        cout<<"hello iam namespace mansoura"<<endl;

    }

}


int main ()
{
    
   cout<< iti::mul(20.3,24.2);

    return 0 ;

}