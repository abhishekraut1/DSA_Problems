#include<iostream>
#include<vector>
using namespace std;
//printing vector
void printVec(vector<int> &v){ //always pass reference : to modify real vector also 
cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){ //v.size -> O(1)
        cout<<v[i]<<" ";
    }
    //        OR
    //   for(int i : &v){
    //       cout<<i<<" ";
    //   }
}
int main() {
      vector<int> v = {1,2,3,4};
      cout<<"capcity of v -> "<<v.capacity()<<endl;
      cout<<"size of v -> "<<v.size()<<endl;

      v.push_back(100); // -> O(1)

      cout<<"capcity of v -> "<<v.capacity()<<endl; //capacity is doubled during increasing size of vector
      cout<<"size of v -> "<<v.size()<<endl;
      
      v.pop_back();
      printVec(v);
      cout<<endl;

      cout<<"element at index 2 -> "<<v.at(2)<<endl;
      cout<<"first element -> "<<v.front()<<endl;
      cout<<"last element -> "<<v.back()<<endl;

      //   taking input
      vector<int> v2;
      int n = 3;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
      cout<<"printing vector v2 -> "<<endl;
      printVec(v2);
      cout<<endl;
    
      vector<int> v3(7,1); //intializing all '7' elements as '1'
      cout<<"printing vector v3 -> "<<endl;
      printVec(v);
      cout<<endl;

      //copying elements
      vector<int> last = v3; // TC -> O(1) OR vector<int> last(v3);
      cout<<"printing vector last -> "<<endl;
      printVec(v);
      cout<<endl;
      
    //   v2.erase(v2.begin(),v2.end());
      cout<<"Empty or not -> "<<v3.empty()<<endl;

    return 0;
}