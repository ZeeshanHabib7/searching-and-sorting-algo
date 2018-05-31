#include<iostream>
using namespace std;
/////////////////////
class binarysearching{
	public:
		int arr[5],data;

		void getdata(){
			cout<<"Pls enter any 5 values: "<<endl;
			for(int i=0;i<5;i++){
				cin>>arr[i];
			}
		}
/////////////////////
		void selectionsorting(){
			int temp,n=5;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<5;j++){
					if(arr[i]>arr[j]){
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}
////////////////////////
		void show(){
			cout<<"sorted values are: "<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl;
			}
		}
		////////////////////////
		void bsearch(){
			int beg=0,end=5,mid=0;
			cout<<"Pls enter value to be search: ";
			cin>>data;
			while(beg<=end && data!=arr[mid]){
				mid=(beg+end)/2;
				if(arr[mid]<data){
					beg=mid++;
				}
				else if(arr[mid]>data){
					end=mid-1;
				}
				else if(arr[mid]==data){
					cout<<"The location is: "<<mid+1<<endl;
				}
			}
			
		}
};
////////////////////////
int main(){
	binarysearching s1;
	int choice=0;
	while(choice!=5){
		cout<<"*******Menu*********\n";
		cout<<"Pls select form given options\n1 for data entry\n2 for sort data\n3 for search\n4 for display sorted data\n5 for exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				s1.getdata();
				break;
				case 2:
					s1.selectionsorting();
					break;
					
				case 3:
					s1.bsearch();
					break;
					case 4:
						s1.show();
						break;
					case 5:
						break;
						default:
							cout<<"Invalid key"<<endl;
							break;
		}
	}
	return 0;
}
