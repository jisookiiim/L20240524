#include <iostream>

using namespace std; 

int main()
{
	srand(time(Null)); // ���� �߻��� ���� �õ� ���� 

	int Size = 10; 
	int* Numbers = new int[Size];

	int Num; 

	for (int i = 0; i < Size; i++)
	{
		Numbers[i] = rand() % 100 + 1; 
	}


	return 0;
}