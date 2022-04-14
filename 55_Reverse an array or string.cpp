#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	
© 2022 GitHub, Inc.
Terms
Privacy
