#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col <= size - 1; col++)
        {
            // unless and until we ahve the scnee to make a pattern with missing palces there is no  such need of further conditiuons insdie the inner loop to print characters

            // the conditions in inner loop arise only when we have to print with some missing places like hollow

            // so for all solid prints we will never see conditions inside the inner loop

            // cojnditions inside the inner loop arise only when we have to print with certain conditions at certain placces only

            //Remember this for all the coming solid and other patterns 

            if (row != size - 1)
            {
                if (col == 0 || row == col)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
    return 0;
}