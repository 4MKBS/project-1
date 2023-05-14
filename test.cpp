#include<bits/stdc++.h>
using namespace std;
int main(){
    int first,second,third, n=2;
    first=10;
    second=30;
    third=15;
    int result;
    result=(first<=second && first<=third) ? first/n : (second <= first && second<= third) ? second/n : third/n;
    // result = (first < second)? (first < third)? first : third : (second < third)? second : third ;
    cout<<result;
}