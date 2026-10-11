#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;
      int main(){
vector<int>marks;
vector<string>subjects;

    cout<<"\n\n===================================================="<<endl;
    cout<<"          SMART STUDENT REPORT CARD SYSTEM          "<<endl;
    cout<<"===================================================="<<endl<<endl;
int totalmaxmarks;
    cout<<"ENTER TOTAL MAX. MARKS:  ";
    cin>>totalmaxmarks;
    cout<<endl<<"-----Enter Subject Name with Marks-----\n";
    cout<<"Enter data (Enter -1 in marks to stop):\n";

int count=1;
        while(true){
int m;
string subj;
    cout<<"\n---Sub."<<count<<"---"<<"name: ";
    cin>>subj;
    cout<<"Marks obtained: ";
    cin>>m;
if(m== -1){
    break;  
}
    subjects.push_back(subj);
    marks.push_back(m);
         count++;
}    
if(marks.empty()){
    cout<<"\nNo data entered\n";
    return 0;
}
int n= marks.size();
int submaxmark= totalmaxmarks/n;
int totalmarksobtain= 0;
int maxmarks= INT_MIN;
int minmarks= INT_MAX;
    string bestsubject="";
    string weakestsubject="";

for(int i=0 ;i<n;i++){
    totalmarksobtain += marks[i];
if(marks[i]> maxmarks){
    maxmarks= marks[i];
    bestsubject= subjects[i];
}
if(marks[i]<minmarks){
    minmarks= marks[i];
    weakestsubject= subjects[i];
}}     
float percentage= (totalmarksobtain*100.0)/totalmaxmarks;
float cgpa= percentage/10;
int cgpastars= cgpa;
 


     cout<<"\n\n\n=================================================\n";
     cout<<"                FINAL REPORT CART                 \n";
     cout<<"=================================================\n\n";
     cout<<"               Subject wise Marks & Percentage;\n";

for(int i=0;i<n;i++){
float subpercentage= (marks[i]*100)/submaxmark;      
     cout<<"-"<<subjects[i]<<": "<<marks[i]<<"/"<<submaxmark<<"\t ("<<subpercentage<<"%)"<<endl;
}
     cout<<"\n-------------------------------------------------\n";
     cout<<"     Perfomance Analytics  ";
     cout<<"\n-------------------------------------------------\n";
     cout<<"->Total Marks Obtained: "<<totalmarksobtain<<"/"<<totalmaxmarks<<endl;
     cout<<"->Total Percantage    : "<<percentage<<"%\n";
     cout<<"->Final CGPA          : "<<cgpa<<"/10\n";
     cout<<"->Highest Marks       : "<<maxmarks<<"("<<bestsubject<<")\n";
     cout<<"->Lowest Marks        : "<<minmarks<<"("<<weakestsubject<<")\n\n";

     cout<<"------------------------------------------\n";
     cout<<"    0 to 10 STAR PERFORMANCE RATING:\n";
     cout<<"------------------------------------------\n";
     cout<<"Rating Stars\t: ";
for(int s=0; s<cgpastars; s++){
     cout<<"*";
}
     cout<<" ("<<cgpastars<<"/10"<<")\n";

     cout<<"\n-------------------------------------------\n";
     cout<<"      SUBJECT WISE BAR CHART (*):\n";
     cout<<"-------------------------------------------\n";

for(int i=0;i<n;i++){
  float subpercentage= (marks[i]*100.0)/submaxmark;    
    cout<<subjects[i]<<" \t: ";
int stars=subpercentage/10;
for(int s=0;s<stars;s++){
     cout<<"*";
}
     cout<<"\t  ("<<marks[i]<<")\n";
}

     cout<<"====================================================\n";
     cout<<"          REPORT GENERATED SUCCESSFULLY\n";
     cout<<"====================================================\n\n\n";
return 0;
}      


