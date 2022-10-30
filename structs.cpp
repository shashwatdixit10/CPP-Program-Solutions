#include <bits/stdc++.h>
using namespace std;
struct student{
    int age;
    string first_name;
    string last_name;
    int standard_of_student;
    
};
int main(){
    student s;
    cin>>s.age;
    cin>>s.first_name;
    cin>>s.last_name;
    cin>>s.standard_of_student;
    
    cout<<""<<s.age<<" " << s.first_name << " " << s.last_name <<" "<<s.standard_of_student;
    return 0;
}
