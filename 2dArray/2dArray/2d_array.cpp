//displays the contents of a 
//two-dimensional array, column by column and row by row
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int sumRows = 0;
	int sumCol = 0;
	int nums[2][4] = { {17, 24, 86, 35},
					  {23, 36, 10, 12} };

	int row = 0;
	cout << "By row: " << endl;
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << nums[row][col] << " ";;
			sumRows += nums[row][col];

		}

		cout << "  Sum in Rows " << row+1 << ": " <<  sumRows << endl;
		sumRows = 0;
		cout << endl;

	}
	
	
	

	cout << endl;
	
	cout << "By columb: " << endl;
	for (int col = 0; col < 4; col++)
	{
		for (int row = 0; row < 2; row += 1)
		{
			cout << nums[row][col] << " ";
			sumCol += nums[row][col];
		}
		cout << "  Sum in Columb " << col+1 << ": " << sumCol << endl;
		sumCol = 0;
		cout << endl;
	}

	cout << "\n\nEnter to End ";
	cin.get();
	return 0;
}	//end of main function