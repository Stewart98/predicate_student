#include <iostream>

using namespace std;

int main()
{
    // data type
    
    int marks,predicate_marks ,test1,test2, assess1, assess2, total;
    int i = 0, finalMark;
   
    
    
    for( int i = 0; i <= 5; i++)
    {
    cout<<"Welcome to TUT’s exam portal!!"<<endl;
    cout<<"Enter your test 1 marks:" << endl;
    cin>>test1;
    cout<<"Enter your test 2 marks:" << endl;
    cin>>test2;
    cout<<"Enter your Assessment 1 marks:" << endl;
    cin>> assess1;
    cout<<"Enter your Assessment 2 marks:" << endl;
    cin>> assess2;
        
        
    //Calculating predicate     
    testMark1=(test1*0.3);
    testMark2=(test2*0.3);
    assessMark1=(assess1*0.2);
    assessMark2=(assess2*0.2);
    predicate_marks=testMark1+testMark2+assessMark1+assessMark2; 
        
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
