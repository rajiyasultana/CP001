/*An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located 
at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum 
number of steps he need to make in order to get to his friend's house.*/
#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cin >> n;

    for (i=5;i>0;i--)
    {
        int step = n / i;
        int step2 = n % i;

        if ( step2 == 0)
        {
            cout << step << endl;
            break;
        }
        else 
        {
            cout << step+1 << endl;
            break;
        }
            
            
    }

    return 0;
}
