#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        cout << i;
        
        if(i%50 == 0)
        {
            cout << "FOO";
        }
        
        if(i%33 == 0)
        {
            cout << "BAR";
        }
        
        cout << "\n";
        
    }
    
    
    
    return 0;
}
