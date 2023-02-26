#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, sx, sy, ex, ey, time{-1};
    string wind;
    cin >> t >> sx >> sy >> ex >> ey >> wind;
    for (int i = 0; i < t; ++i)
    {

        if (wind[i] == 'E')
        {
            if (sx < ex)
            {
                sx += 1;
            }
        }
        else if (wind[i] == 'S')
        {
            if (sy > ey)
            {
                sy -= 1;
            }
        }
        else if (wind[i] == 'W')
        {
            if (sx > ex)
            {
                sx -= 1;
            }
        }
        else if (wind[i] == 'N')
        {
            if (sy < ey)
            {
                sy += 1;
            }
        }
        if (sx == ex && sy == ey)
        {
            time = i + 1;
            break;
        }
    }
    cout << time << "\n";
}