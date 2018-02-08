#include <iostream>

using namespace std;

int main()
{
    int fooCounter = 0;
    int barCounter = 0;
    
    
    for(int i = 1; i <= 2000; i++)
    {

        
        cout << i;
        
        if(i%50 == 0)
        {
            cout << " FOO";
            fooCounter++;
        }
        
        if(i%33 == 0)
        {
            cout << " BAR";
            barCounter++;
        }
        
        cout << "\n";
        
    }
    
    
    cout << "The total number of times \"FOO\" was printed: " << fooCounter << endl;
    cout << "The total number of times \"BAR\" was printed: " << barCounter << endl;
    
    
    return 0;
}
