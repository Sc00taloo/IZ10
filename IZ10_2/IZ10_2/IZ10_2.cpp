#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

ofstream f("C:/Users/User/Desktop/testik.txt");

void WordDouble(string t, int s, int n, int WordSize, int k, int m)
{
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
    if (s > WordSize) {

        for (int i = 0; i < WordSize; i++)
        {
            if (t[i] == '1')
                one++;
            if (t[i] == '2')
                two++;;
            if (t[i] == '3')
                three++;
            if (t[i] == '4')
                four++;
            if (t[i] == '5')
                five++;
            if (t[i] == '6')
                six++;
            if (t[i] == '7')
                eight++;
            if (t[i] == '8')
                nine++;
            if (t[i] == '9')
                ten++;
        }
        if (two <= k && four >= m) {

            for (int i = 0; i < WordSize; i++)
            {
                if (t[i] == '0')
                    t[i] = 'a';
                if (t[i] == '1')
                    t[i] = 'b';
                if (t[i] == '2')
                    t[i] = 'c';
                if (t[i] == '3')
                    t[i] = 'd';
                if (t[i] == '4')
                    t[i] = 'e';
                if (t[i] == '5')
                    t[i] = 'f';
                if (t[i] == '6')
                    t[i] = 'g';
                if (t[i] == '7')
                    t[i] = 'h';
                if (t[i] == '8')
                    t[i] = 'j';
                if (t[i] == '9')
                    t[i] = 'k';
            }
            f << t << endl;
        }
    }
    else {
        for (int i = 0; i < n; i++)
        {
            ostringstream os;
            os << i;
            WordDouble(t + os.str(), s + 1, n, WordSize, k, m);
        }
    }
}

void main() {

    int n = 10, WordSize, k, m;
    cout << "Enter Word size" << endl;
    cin >> WordSize;
    cout << "Enter the number of repetitions less" << endl;
    cin >> k;
    cout << "Enter the number of repetitions over" << endl;
    cin >> m;
    bool flag = true;
    while (flag) {
        if (k + m > WordSize) {
            cout << "Error!!! k + m > WordSize. Try again" << endl;
            cout << "Enter the number of repetitions less" << endl;
            cin >> k;
            cout << "Enter the number of repetitions over" << endl;
            cin >> m;
        }
        else
            flag == false;
    }
    f << "Alphabet : {a, b, c, d, e, f, g, h, j, k}" << endl;
    WordDouble("", 1, n, WordSize, k, m);
    cout << "File 'testik.txt' filled up" << endl;
    f.close();
}
