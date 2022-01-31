#include <iostream>

using namespace std;

int main()
{
    // data type
    
    int marks,predicate_marks ,test1,test2, assess1, assess2, total;
    double testMark1, testMark2, assessMark1, assessMark2;
    int i = 0, finalMark;
   
    
    
    for( int i = 0; i < 4; i++)
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
         else 
         { 
             cout << "You do not qualify to write this exam." << endl;
             cout<< "Sorry, try again next semester"<<endl;
         }
    }
    
    system("pause");
    return 0;
}
