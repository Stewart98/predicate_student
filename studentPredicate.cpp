#include <iostream>

using namespace std;

int main()
{
    // data type
    
    int marks,predicate_marks ,test1,test2, assess1, ssess2, total;
    int i = 0, finalMark;
   
    
    
    for( int i = 0; i <= 5; i++)
    {
    cout<<"Welcome to TUT’s exam portal!!"<<endl;
    cout<<"Enter your test 1 marks:" << endl;
    cin>>test1;
    cout<<"Enter your test 2 marks:" << endl;
    cin>>test2;
    cout<<"Enter your Assessment 1 marks:" << endl;
    cin>>test2;
    cout<<"Enter your Assessment 2 marks:" << endl;
    cin>>test2;
        
        
    total=test1+test2+assess1+assess2;  
    predicate_marks=(total)/4;
         if( predicate_marks >= 40 )
         {
             cout<<"You have qualified to write exam with "<< predicate_marks << "%" <<endl;
             cout<<"Enter the marks you obtain in the exam:" << endl;
             cin>> marks;
             finalMark = (predicate_marks +  marks ) /2;
             if( finalMark >= 49 && finalMark <= 100 )
             {
                 cout << "Congratulations! you have passed, your final mark is " << finalMark << "%." << endl;
             }
             else
                 cout << "You failed, your final mark is " << finalMark << "%." << endl;
         } 
         else 
         { 
             cout << "You do not qualify to write this exam." << endl;
             cout<< "Sorry, try again next semester"<<endl;
         }
    }
    
    system("pause");
    return 0;
}
