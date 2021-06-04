#include <stdio.h>
void sort(int arr[],int n){
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-1-i;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}
int main(void) {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	int k=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[i+1]){
			k=i;
			break;
		}
	}
if(k==n-1){
	printf("No second smallest value exist!");
}
else{

printf("%d",arr[k+1]);
}

	return 0;
}


