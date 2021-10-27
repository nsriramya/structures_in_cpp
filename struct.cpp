#include<bits/stdc++.h>
//#include<vector>
using namespace std;
    struct students
 {
     int roll;
     string name;
 }s;
int main()
{
 s.roll=537;
 s.name="ramya";
 cout<<s.roll;
 return 0;
}

/*#include<bits/stdc++.h>
//#include<vector>
using namespace std;
    struct students
 {
     int roll=37;
     string name="ramya";
 };
int main()
{
    struct students x;
  
 cout<<x.roll<<" "<<x.name;
 return 0;
}


#include<bits/stdc++.h>
//#include<vector>
using namespace std;
    struct students
 {
     int roll;
     string name;
     int age;
     int marks;
 };
int main()
{
    struct students x={537,"ram",19,80};
  
 cout<<x.roll<<" "<<x.name<<" "<<x.age<<" "<<x.marks;
 return 0;
}

#include<bits/stdc++.h>
//#include<vector>
using namespace std;
    struct students
 {
     int roll;
     string name;
     int age;
     int marks;
 };
int main()
{
    struct students x[5] ;
    for(int i=0;i<5;i++)
    {
       cin>> x[i].roll;
       cin>>x[i].name;
       cin>>x[i].age;
       cin>>x[i].marks;
    }
  
      for(int i=0;i<5;i++)
    {
       cout<< x[i].roll<<"\t";
     cout<<x[i].name<<"\t";
      cout<<x[i].age<<"\t";
      cout<<x[i].marks<<"\n";
    }
 return 0;
}*/
