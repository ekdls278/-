//#include<iostream>
//#include<algorithm>
//
//#define	MAX 1987654321
///*
//Solution
//9���� ���� �տ��� �ΰ��� ���� 100�� �Ǵ� �ΰ��� ã�´�.
//*/
//
////! 9���� ������ Ű ����
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