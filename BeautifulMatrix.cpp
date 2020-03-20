#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main()
{
    int mat[6][6];
    int result;
    for (int r=1; r<6; r++)
    {
        for(int c=1; c<6; c++)
        {
            cin>>mat[r][c];
            if(mat[r][c]==1)
                result=abs(r-3)+abs(c-3);
        }
    }
    cout<<result;
}
