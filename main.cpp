#include <iostream>

using namespace std; 

int main()
{
	srand(time(Null)); // 난수 발생을 위한 시드 설정 

	int Size = 10; 
	int* Numbers = new int[Size];

	int Num; 

	for (int i = 0; i < Size; i++)
	{
		Numbers[i] = rand() % 100 + 1; 
	}


	return 0;
}