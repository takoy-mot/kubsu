#include <iostream>

int main()
{
	int mas[] = {0,4,6,3,9,9,4,7,1,3,2,9,6,2,1,0,7,3,4,0,4,3,7,5,1,8,9,5,7,3};
	int k = sizeof(mas) / sizeof(mas[0]);
	
	std::cout << "Source array: ";
	for (int i = 0; i < k; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << std::endl;
	
	int most_freq = mas[0]; 
	int max_count = 0;
	
	for (int i = 0; i < k;i++) {
		int curr_count = 0;
		for (int j = 0; j < k;j++) {
			if (mas[i] == mas[j]) {
				curr_count++;
			}
		}
		if (curr_count > max_count) {
			max_count = curr_count;
			most_freq = mas[i];
		}
	}
	std::cout << "The most frequenly encoutered num is: " << most_freq << " (appears " << max_count << " times)" << std::endl;

	return 0;
}