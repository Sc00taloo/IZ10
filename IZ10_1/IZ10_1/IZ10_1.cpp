#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

ofstream f("C:/Users/User/Desktop/testik.txt");

void PovtDouble(string t, int l, int n, int WordSize, int k)
{
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0/*, eleven = 0*/;
	if (l > WordSize)
	{

		for (int i = 0; i < WordSize; i++)
		{
			if (t[i] == '0')
				one++;
			if (t[i] == '1')
				two++;;
			if (t[i] == '2')
				three++;
			if (t[i] == '3')
				four++;
			if (t[i] == '4')
				five++;
			if (t[i] == '5')
				six++;
			if (t[i] == '6')
				seven++;
			if (t[i] == '7')
				eight++;
			if (t[i] == '8')
				nine++;
			if (t[i] == '9')
				ten++;
			//if (t[i] == '10')
			//	eleven++;

		}
		if ((one <= 1 && two <= 1 && three <= 1 && four <= 1 && five <= 1 && six <= 1 && seven <= 1 && eight <= 1 && nine == k && ten == k/* && eleven == k*/) ||
			(one <= 1 && two <= 1 && three <= 1 && four <= 1 && five <= 1 && six <= 1 && seven <= 1 && eight == k && nine == k && ten == k/* && eleven <= 1*/) ||
			(one <= 1 && two <= 1 && three <= 1 && four <= 1 && five <= 1 && six <= 1 && seven == k && eight == k && nine <= 1 && ten <= 1/* && eleven <= 1*/) ||
			(one <= 1 && two <= 1 && three <= 1 && four <= 1 && five <= 1 && six == k && seven == k && eight <= 1 && nine <= 1 && ten <= 1/* && eleven <= 1*/) ||
			(one <= 1 && two <= 1 && three <= 1 && four <= 1 && five == k && six == k && seven <= 1 && eight <= 1 && nine <= 1 && ten <= 1/* && eleven <= 1*/) ||
			(one <= 1 && two <= 1 && three <= 1 && four == k && five == k && six <= 1 && seven <= 1 && eight <= 1 && nine <= 1 && ten <= 1/* && eleven <= 1*/) ||
			(one <= 1 && two <= 1 && three == k && four == k && five <= 1 && six <= 1 && seven <= 1 && eight <= 1 && nine <= 1 && ten <= 1/* && eleven <= 1*/) ||
			(one <= 1 && two == k && three == k && four <= 1 && five <= 1 && six <= 1 && seven <= 1 && eight <= 1 && nine <= 1 && ten <= 1/* && eleven <= 1*/) ||
			(one == k && two == k && three <= 1 && four <= 1 && five <= 1 && six <= 1 && seven <= 1 && eight <= 1 && nine <= 1 && ten <= 1/* && eleven <= 1*/)/* ||*/
/*			(one == k && two == k && three <= 1 && four <= 1 && five <= 1 && six <= 1 && seven <= 1 && eight <= 1 && nine <= 1 && ten <= 1 && eleven <= 1)*/)
		{
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
			PovtDouble(t + os.str(), l + 1, n, WordSize, k);
		}
	}
}

int main()
{
	int n = 10, WordSize, k;
	cout << "Enter Word size" << endl;
	cin >> WordSize;
	cout << "Enter the number of repetitions" << endl;
	cin >> k;
	f << "Alphabet : {a, b, c, d, e, f, g, h, j, k}" << endl;
	PovtDouble("", 1, n, WordSize, k);
	cout << "File 'testik.txt' filled up" << endl;
	return 0;
}