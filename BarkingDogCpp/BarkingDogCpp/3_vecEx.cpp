#include <iostream>
using namespace std;

//배열 중간 삽입/ 삭제 구현
void insert(int idx, int num, int arr[], int& len) {
	/*for (int i = len; i >= idx; i--) {
		arr[i + 1] = arr[i];
	}*/
	//틀리진 않았지만 더 나은 직관성 , 안전성 

	for(int i = len; i > idx; i--)
		arr[i] = arr[i - 1];
	arr[idx] = num;
	len++;
}

void erase(int idx, int arr[], int& len) {
	/*for (int i = idx; i <= len; i++) {
		arr[i] = arr[i + 1];
	}
	len--;*/
	//틀림. len--를 먼저하고 줄어든 길이만큼 순회하며 원소를 땡겨야 함
	//len--를 할거면 i<= len-1; 까지만 돌던가 범위 초과하잖아;
	//그것도 불필요한 연산이니 len--먼저하는게 깔끔
	len--;

	for (int i = idx; i < len; i++)
		arr[i] = arr[i + 1];
}

void printArr(int arr[], int& len) {
	for (int i = 0; i < len; i++) cout << arr[i] << ' ';
	cout << "\n\n";
}

void insert_test() {
	cout << "***** insert_test *****\n";
	int arr[10] = { 10, 20, 30 };
	int len = 3;
	insert(3, 40, arr, len); // 10 20 30 40
	printArr(arr, len);
	insert(1, 50, arr, len); // 10 50 20 30 40
	printArr(arr, len);
	insert(0, 15, arr, len); // 15 10 50 20 30 40
	printArr(arr, len);
}

void erase_test() {
	cout << "***** erase_test *****\n";
	int arr[10] = { 10, 50, 40, 30, 70, 20 };
	int len = 6;
	erase(4, arr, len); // 10 50 40 30 20
	printArr(arr, len);
	erase(1, arr, len); // 10 40 30 20
	printArr(arr, len);
	erase(3, arr, len); // 10 40 30
	printArr(arr, len);
}

int main(void) {
	insert_test();
	erase_test();
}