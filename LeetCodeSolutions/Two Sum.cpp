#include <iostream>
#include <algorithm>
#include <vector>



std::vector<std::vector<int>> FindThreeSum(std::vector< int>& Vect, int size) {
	std::sort(Vect.begin(), Vect.end());
	std::vector<std::vector<int>>res;
	for (int i = 0; i < size - 2; ++i) {
		int start = i + 1;
		int end = size - 1;
		while (start < end) {
			std::vector<int>temp;
			int Curr = Vect[i] + Vect[start] + Vect[end];
			if (Curr == 0) {
				temp.push_back(Vect[i]);
				temp.push_back(Vect[start]);
				temp.push_back(Vect[end]);
				res.push_back(temp);

			}
			else if (Curr > 0) {
				end--;
			}
			else {
				start++;
			}
		}
	}
	return res;
}

void  main() {
	std::vector<int > MyVect = { -4,4,-6,8,0 };
	std::vector<std::vector<int >>res = FindThreeSum(MyVect, MyVect.size());
	for (auto row : res) {
		for (auto col : row) {
			std::cout << col << " ";
		}
		std::cout << std::endl;
	}

}