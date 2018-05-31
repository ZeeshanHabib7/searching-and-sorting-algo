#include<iostream>
using namespace std;
//////////////////
class searching{
	public:
	int *arr,len,data,temp;
	///////////////////
	void length(int length){
		len=length;
		arr=new int[length];
		}
	
	/////////////////////////
	void selectionsort(){
		for (int i=0;i<len;i++){
			for(int j=i+1;j<len;j++){
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
	///////////////////////////
	void getdata(){
		cout<<"Pls enter values: "<<endl;
		for(int i=0;i<len;i++){
			cin>>arr[i];
		}
	}
	/////////////////////
	void show(){
		cout<<"Sorted values are: "<<endl;
		for(int i=0;i<len;i++){
			cout<<arr[i]<<endl;
		}
	}
	/////////////////
	void binsearch(){
	int value,beg=0,mid,end=len;
	cout<<"Pls enter value to search: ";
	cin>>value;
	while(beg<=end && value!=arr[mid]){
		mid=(beg+end)/2;
		if(arr[mid]<value){
			beg=mid+1;
		}
		else if(arr[mid]>value){
			end=mid-1;
		}
	
		else if(arr[mid]==value){
			cout<<"the location is: "<<mid+1<<endl;
		}
			else{
			
				cout<<"value is not found"<<endl;
			}
	}
	}
};
int main(){
	searching s1;
	int choice=0,l;
	while(choice!=3){
		cout<<"Pls press 1 for insert data\n2for seacrh data\n3 for exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"how many values do you want to enter: ";
				cin>>l;
				s1.length(l);
				s1.getdata();
				s1.selectionsort();
				s1.show();
				break;
				case 2:
				s1.selectionsort();
					s1.show();
					s1.binsearch();
					break;
					case 3:
						break;
						default:
							cout<<"Inavlid key"<<endl;
							break;
				
		}
	}
	return 0;
}
