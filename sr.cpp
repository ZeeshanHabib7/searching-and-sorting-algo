#include<iostream>
using namespace std;
////////////////////
class search{
	public:
		int *arr,len,data,loc,temp;
		//////////////////////////
		
		///////////////
		void length(int length){
			len=length;
			arr=new int[length];
		}
		///////////////////
		void getdata(){
			cout<<"Pls enter values: "<<endl;
			for(int i=0;i<len;i++){
				cin>>arr[i];
			}
		}
		/////////////////////////
		void bsearch(){
			cout<<"Pls enter value to search: ";
			cin>>data;
			for(int i=0;i<len;i++){
				if(data==arr[i]){
					loc=i;
				}
			}
			cout<<"Location is: "<< loc+1 <<endl;
		}
		////////////////////
		void selectionsort(){
			for(int i=0;i<len;i++){
				for (int j=i+1;j<len;j++){
					if(arr[i]>arr[j]){
						temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}
		////////////////////
		void show(){
			cout<<"values are: "<<endl;
			for(int i=0;i<len;i++){
				cout<<arr[i]<<endl;
			}
		}
};
int main(){
	search s1;
	int choice=0,a;
	while(choice!=5){
		cout<<"*******Menu*********\n";
		cout<<"Pls select form given options\n1 for data entry\n2 for sort data\n3 for search\n4 for display sorted data\n5 for exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Pls enter the no. of arrays you wantL: ";
				cin>>a;
				s1.length(a);
				s1.getdata();
				break;
				case 2:
					s1.selectionsort();
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
