#include <iostream>
#include <vector>
using namespace std;
 
short n, a,c=0;
short* criminals;
 
int main()
{
    
    cin >> n >> a; a--;
    criminals = new short[n];
 
    for (short i = 0; i < n; i++)
        cin >> criminals[i];
 
    for (short i = 0; i <= max(short(n - a - 1), short(a)); i++)
    {
        if (a - i < 0) 
            c += criminals[a + i];
        else if (a + i >= n) 
            c += criminals[a - i];
        else if (a - i == a + i) 
            c += criminals[a];
        else 
            c += 2 * ((criminals[a - i] && criminals[a + i]) ? 1 : 0);        
    }
 
    cout << c;
 
    return 0;
}//
