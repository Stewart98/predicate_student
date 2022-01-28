#include <iostream>

using namespace std;

int main()
{
    // data type
    
    int marks,predicate_marks ,test1,test2;
    int i = 0, finalMark;
   
    cout<<"Welcome to TUT’s exam portal!!"<<endl;
    cout<<"Enter your test 1 marks:" << endl;
    cin>>test1;
    cout<<"Enter your test 2 marks:" << endl;
    cin>>test2;
    predicate_marks=(test1+test2)/2;
    
    for( int i = 0; i <= 5; i++)
    {
         if( predicate_marks >= 40 )
         {
             cout<<"you have qualified to write exam with "<< predicate_marks << "%" <<endl;
             cout<<"Enter the marks you obtain in the exam:" << endl;
             cin>> marks;
             finalMark = (predicate_marks +  marks ) /2;
             if( finalMark >= 49 && finalMark <= 100 )
             {
                 cout << " you pass, your final mark is " << finalMark << "%" << endl;
             }
             else
                 cout << " you failed, your final mark is " << finalMark << "%" << endl;
         } 
         else 
         { 
             cout << " You do not qualify to write this exam " << endl;
             cout<< "sorry, try again next semester"<<endl;
         }
    }
    
    system("pause");
    return 0;
}
