#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int min2=0,max2=0;

// Ex2
int index_sum(int arr1[], const int length1, int arr2[], const int length2, int num) {
	if (num >= length1 || num >= length2||num<0) {
		std::cout << "Error!!!";
		return 0;
	}
	return arr1[num] + arr2[num];
}








//Ex 5
template <typename T>
void permute_arr(T arr[], const int length) {
	if ((length) % 2 == 0)
		for (int i = 0; i < length/2; i++)
			std::swap(arr[i], arr[length / 2 + i]);
	else
		for (size_t i = 0; i < length/2; i++)
			std::swap(arr[i], arr[length / 2 + 1 + i]);
}

//Ex 4
template <typename T>
void prime_range(T num1, T num2) {
	if (num1 <= num2)
		for (int i = num1; i <= num2; i++) {
			std::cout << num1 << ' ';
			num1++;
		}
}
template <typename T>
void prime_range(T num1) {

	
		for (int i = 1;i<= num1; i++) {
			std::cout << num1 << ' ';
			num1++;
		}
	
}
template <typename T>
void print_arr777(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";

}


template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;

}

template <typename T> //Ex 3
double min_max(T arr[], const int length) {
	T min1 = arr[0];
	for (int i = 0; i < length; i++) {
			
		if (arr[i] < min1)
			min1=arr[i];
	}
	T max1 = arr[0];
	for (int i = 0; i < length; i++) {
		
		if (arr[i] > max1)
			max1 = arr[i];
	}
	return (double)(max1 + min1) / 2.0;
}

template <typename T>
void print_arr(T arr[], const int length,T num) {
	
	for (int i = 0; i < length; i++)
		if (num == arr[i]) {
			arr[i] = 0; std::cout << arr[i] << ' ';
		}
		else
		std::cout << arr[i] <<' ';
	std::cout << "\n";

}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	//Ex1
	const int size1 = 12;
	int arr1[size1];
	std::cout << "\n\n\t\tEx1\n\n ";
	std::cout << "Enter number -> ";
	std::cin >> n;
	fill_arr(arr1, size1, -10, 31);
	std::cout << "\nInitial array: \n";
	print_arr777(arr1, size1);
	std::cout << "\nResponse: \n"; 
	print_arr (arr1, size1,n);
	std::cout << std::endl;
	//Ex3
	std::cout << "\n\n\t\tEx3\n\n ";
	const int size2 = 6;
	int arr2[size2];
	fill_arr(arr2, size2, -2, 71);
	print_arr777(arr2, size2);
	std::cout<<min_max(arr2, size2);

	//Ex4
	std::cout << "\n\n\t\tEx4\n\n ";
	//	prime_range(7, 3);
	//	prime_range(3, 7);
	//	prime_range(7);
	//	prime_range(-7);

	//Ex5
	std::cout << "\n\n\t\tEx5\n\n ";
	const int size3=7;
	int arr3[size3];
	fill_arr(arr3, size3,0,33);
	print_arr777(arr3, size3);
	permute_arr(arr3, size3);
	print_arr777(arr3, size3);


	//Ex2
	std::cout << "\n\n\t\tEx2\n\n ";
	const int size5 = 6;
	const int size6 = 7;
	int arr5[size5];
	int arr6[size6];
	fill_arr(arr5, size5, 1, 31);
	fill_arr(arr6, size6, 1, 31);
	print_arr777(arr5, size5);
	print_arr777(arr6, size6);
	int M;
	std::cout << std::endl;
	std::cin >> M;

	std::cout<<index_sum(arr5, size5, arr6, size6,M);
	
	return 0;
}