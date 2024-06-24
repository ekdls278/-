//#include<iostream>
//#include<algorithm>
//
//#define	MAX 1987654321
///*
//Solution
//9개의 값의 합에서 두개씩 빼며 100이 되는 두개를 찾는다.
//*/
//
////! 9개의 난쟁이 키 저장
//int arr[9];
//int sum = 0;
//
//using namespace std;
//
//void Input()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> arr[i];
//		sum += arr[i];
//	}
//}
//
//void FindTwoShortMan()
//{
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = i+1; j < 9; j++)
//		{
//			if (sum - (arr[i] + arr[j]) == 100)
//			{
//				arr[i] = MAX;
//				arr[j] = MAX;
//				return;
//			}
//		}
//	}
//}
//
//void PrintSolution()
//{
//	sort(&arr[0], &arr[0] + 9);
//	for (int i = 0; i < 7; i++)
//	{
//		cout << arr[i] << "\n";
//	}
//}
//
//void Solution()
//{
//	Input();
//	FindTwoShortMan();
//	PrintSolution();
//}
//
//int main()
//{
//	Solution();
//	return 0;
//}