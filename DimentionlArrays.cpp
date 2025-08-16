// #include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main()
{
    // 3d array
    int image[3][4][3] = {
        {
            {0, 255, 0}, {25, 0, 0}, {25, 255, 0}, {40, 25, 200}
        },
        {
            {100, 26, 255}, {30, 50, 255}, {255, 255, 50}, {200, 150, 0}
        },
        {
            {100, 25, 255}, {30, 230, 0}, {0, 0, 0}, {255, 255, 255}
        }
    };

    int oneD[] = {0,5,6, 6};
    cout << sizeof(oneD) << endl;


    return 0;
}