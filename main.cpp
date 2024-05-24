#include <iostream>

using namespace std; 


void InsertAfter(Int* Array, Int Size, Int NewPosition, Int Value )
int main()
{
	int Size = 10; 
	int* PA = new int[10]; 
	
	for (int i = 0; i <= 10; i++)
	{
		PA[i] = i;
	}

	//그대로 옮기는 것 
	int NewPA = new int[Size +1]; 
	for (int i = 0; i < NewPosition; i++)
	{
		NewPA[i] = PA[i]
	}

	//추가 로직 
	for (int  i = 0; i < NewPosition; i++)
	{
		cout << NewPA[i] << " , ";
	}


	NewPA[NewPosition] = NewValue;
	for (int i = NewPosition + 1, i < Size + 1; ++i)
	{
		NewPA[i] = PA[i - 1]; 
	}

	for (int i = 0; i < Size + 1; ++1)
	{
		cout << PA[i] << " , ";
	}

	delete[] PA;
	delete[] NewPA;



	return 0;
}