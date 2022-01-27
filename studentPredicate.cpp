#include <iostream>

using namespace std;

int main()
{
    // data type
    
    int marks,predicate_marks ,test1,test2;
   
    
    cout<<"Enter your test 1 marks:";
    cin>>test1;
    cout<<"Enter your test 2 marks:";
    cin>>test2;
    predicate_marks=(test1+test2)/2;
    if( predicate_marks>=40&&predicate_marks<=100)
    {
    cout<<"you have qualify to write exam with "<<predicate_marks<<"%"<<endl;
    cout<<"Enter the marks you obtain in the exam:";
    cin>>marks;
    }
    
    else 
    { 
        cout << " You do not qualify to write this exam " << endl;
    }
    

    return 0;
}
