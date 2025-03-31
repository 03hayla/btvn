#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];

	}
	int k;
	cin>>k;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]+a[j]==k) cout<<a[i]<<" "<<a[j]<<endl;

		}
	}
}
bài 3
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n){
    int temp; // biến tạm temp
    for (int i = 0; i < n; i++){
	for (int j = i + 1; j < n; j++){
		if (a[j] > a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	BubbleSort(a,n);
	for (int x:a){
		cout<<x<<" ";
	}
}
ưu điểm:
-dễ hiểu,dễ nhớ ,ngắn gọn.
nhược điểm:
-chạy chậm,không phù hợp với dữ liệu lớn.

bài 4

Hàm binarySearch(arr, target, start, end):
    Nếu start > end:
        Trả về -1  
    mid = (start + end) 
    Nếu arr[mid] == target:
        Trả về mid  
    Ngược lại nếu arr[mid] > target:
        Trả về binarySearch(arr, target, start, mid - 1)  
    Ngược lại:
        Trả về binarySearch(arr, target, mid + 1, end) 
bài 2
        
