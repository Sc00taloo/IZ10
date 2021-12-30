#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

ofstream f("C:/Users/User/Desktop/testik.txt");

void Print(int* x_tek, int* x_min, int* x_max)
{
    for (int i = 0; i < 5; i++) {
        f << x_tek[i] + x_min[i] << "  ";
    }

    f << x_tek[5] + x_min[5] << " ";
    f << x_tek[6] + x_min[6] << endl;

}


void Search(int level, int nakop, int n, int* x_tek, int* x_min, int* x_max)
{
    if (level == 6)
    {
        int xx = n - nakop;
        x_tek[level] = xx;
        Print(x_tek,  x_min, x_max);
    }
    else
    {
        for (int ii = 0; ((ii <= n - nakop) && (ii <= x_max[level])); ii++)
        {
            x_tek[level] = ii;
            Search(level + 1, nakop + ii, n, x_tek, x_min, x_max);
        }
    }
}

int main()
{
    int n = 37;
    int * x_min = new int[8];
    int * x_max = new int[8];
    int * x_tek = new int[8];


    x_min[0] = 3;  x_max[0] = n;
    x_min[1] = 0;  x_max[1] = 4;
    x_min[2] = 5;  x_max[2] = n;
    x_min[3] = 0;  x_max[3] = 3;
    x_min[4] = 0;  x_max[4] = 5;
    x_min[5] = 2;  x_max[5] = n;
    x_min[6] = 0;  x_max[6] = n;


    int sum1 = 0;
    for (int i = 0; i < 7; i++) {
        sum1 += x_min[i];
    }
    n -= sum1;

    for (int i = 0; i < 7; i++) {
        if (x_max[i] > n) {
            x_max[i] = n;
        }
    }

    int level = 0;
    int nakop = 0;
    cout << "x1+x2+x3+x4+x5+x6+x7=37" << endl;
    f << "x1+x2+x3+x4+x5+x6+x7=37\nx1 x2 x3 x4 x5 x6 x7" << endl;
    Search(level, nakop, n, x_tek, x_min, x_max);
    cout << "File 'testik.txt' filled up" << endl;
    f.close();
    return 0;
}