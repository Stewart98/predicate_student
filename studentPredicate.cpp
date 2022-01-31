#include <iostream>

using namespace std;

int main()
{
    // data type
    
    int marks,predicate_marks ,test1,test2;
    int i = 0, finalMark;
   
    
    
    for( int i = 0; i < 4; i++)
    {
    cout<<"Welcome to TUT’s exam portal!!"<<endl;
    cout<<"Enter your test 1 marks:" << endl;
    cin>>test1;
    cout<<"Enter your test 2 marks:" << endl;
    cin>>test2;
    predicate_marks=(test1+test2)/2;
         if( predicate_marks >= 40 )
         {
             do{
             cout<<"you have qualified to write exam with "<< predicate_marks << "%" <<endl;
             cout<<"Enter the marks you obtain in the exam:" << endl;
             cin>> marks;
             finalMark = (predicate_marks +  marks ) /2;
             
             
          
             if(finalMark >= 75 && finalMark <= 100)
                     {
                     cout<<"Congratulations you have obtained a distinction pass\n\n";
                     }
                 
               else if(finalMark >= 60 && finalMark <= 74)
                      {
                      cout<<"You passed with a very good performance\n\n";
                      }
                 
               else if(finalMark >= 50 && finalMark <=59)
                        {
                        cout<<"You obtained a good performance pass\n\n";
                        }
             
             else if(finalMark<=44)
             {
                 cout << " you failed, your final mark is " << finalMark << "%" << endl;
             }
             else{
                 cout<<"you qualify to re-write"<<endl;
             }
         }while(finalMark>=45&&finalMark<=49);
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
