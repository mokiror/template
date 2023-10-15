#include <iostream>
#include <string>
#include <array>
#include <time.h>

template <typename Type>
class MyArr {

public:

	void Arr(int size, int arr[])
	{
		size_ = size;
		arr_ = arr[size_];
	}

	void ForArr()
	{
		std::cout << "Arr: ";
		for (int i = 0; i < size_; i++)
		{
			arr_[i] = rand() % 10;
			std::cout << arr_[i] << " ";
		}

		delete[] arr_;
	}

	
private:
	int size_ = 6;
	int *arr_ = new int[size_];
};


int main() {

	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	
	MyArr<int> obj;
	obj.ForArr();
	

	

	return 0;
}