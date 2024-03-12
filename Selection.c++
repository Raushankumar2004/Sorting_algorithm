#include <iostream>
#include <vector> 
using namespace std; 
void selectionsort(vector<int>&v){
        int n = v.size();
        for(int i=0;i<n-1;i++){
            int min_index = v[i];
            for(int j=i+1;j<n;j++){
                if(v[j]<v[min_index]){
                    min_index = j;
                }
            }  
            if(i!= min_index){
                int temp = v[i];
                v[i] = v[min_index];
                v[min_index] = temp;
            }
        }
    }
int main()
{   
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
    selectionsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;
    

    return 0;
}  