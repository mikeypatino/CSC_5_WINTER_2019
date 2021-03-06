/* 
 * File:   main.cpp
 * Author: Miguel Alva Patino
 * Created on January 31, 2019
 * Purpose:  Project 1: BlackJack Mike_1
 */

//System Libraries Here
 #include <iostream>
 #include <iomanip>
 #include <cstdlib>
 #include <ctime>
 #include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

void dealr(int);
void print(int );
char suitFl1(int );
char faceFl(int );
char valFl(int );


//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    
     srand(static_cast<unsigned int>(time(0)));
     
    //Declare all Variables Here
     int NCARDS =14;
   
    int num1, num2, num3;
    char letter;
    
 
//Initialize or input 
   
   cout << "Welcome to the BlackJack Table " << endl;
   cout << "Get 21 Before The Dealer to win!" << endl;
   cout << endl;
   cout << "Just a reminder: " <<endl ;
   print(NCARDS);
   cout << endl;
   cout << "Your Hand = ";
   
   
   
    
   
   
   
   
   
   
   //This will give you random numbers from [1-14]
   
    num1 = (rand() %13+1);   
    
    //Card 1: Assigning King, Queen, Jack Values
    if (num1 == 11){
        letter = 'K';
        cout <<letter;
        num1 =10;
    }
    if (num1 == 12 ){
        letter = 'Q';
        cout <<letter;
        num1 =10;
    }
    if (num1 == 13){
        letter = 'J';
        cout << letter;
        num1 =10;
    }
    
    
    
    //If Card 1 is an Ace
    int choice;
    
    if ( num1 == 1 ){
        letter = 'A';
        cout <<letter;
        cout << endl;
        cout << fixed << setw(3) <<" You got an Ace, would you like the value to be 1 or 11?";
        cin >> choice;
        
        num1=choice;
       
        
    }
    
    cout << num1 << ", ";
    
    
    //Getting Card 2 From the Dealer
    
    num2 = (rand() %13+1);
    
    //Card 2: Assigning King, Queen, Jack Value
    
    if (num2 == 11){
        letter = 'K';
        cout <<letter;
        num2 =10;
    }
        if (num2 == 12){
            letter = 'Q';
            cout <<letter;
            num2 =10;
        }
            if (num2 == 13){
                letter = 'J';
                cout <<letter;
                num2 =10;
            }
    
    //Assigning Card 2 if it is an Ace
    
    if (num2 == 1){
        letter = 'A';
        cout <<letter;
        cout << endl;
        cout << fixed << setw(3) <<" You got an Ace, would you like the value to be 1 or 11?";
        
        cin >> choice;
        num2 = choice;
    }
    
    
        cout << num2 << endl << endl;                                
        cout << "Hand Total =  " << num1 + num2 << endl << endl;
        num3 = num1 + num2;
        
        
    //Declare New Variables for Card #3
        
    int num4;
    char hit;
                                                          
do  {    
    
    //This will decide whether or not the loop ends 
    
    if ( num3 > 21 ){    
 
            cout << "Bust! You lose! Your hand total exceeded 21.";
            cout << endl;
		break;
    }
    
    else if (num3 == 21){
        
           cout << "You Won! Your hand total is 21!";
           cout << endl;
		break;
    }
    
    else{
        
    cout << "Do you want another card? (y/n): ";  
    cin >> hit;
    
    if (hit == 'y' || hit == 'Y' ){
            
  
    cout << endl;
    
    //This will give values from [1-14]
    
    num4 = (rand() % 13+1);   
    
     if (num4 == 1){
        letter = 'A';
        cout << "New Card is = " << letter << endl;
        cout << " You got an Ace, would you like the value to be 1 or 11?  ";
        cin >> choice;
        
        if(choice == '11'){
            choice = 11;
            
            
            num4 = choice;
            
            
            cout << "New Hand Total = " << num3 + num4 << endl << endl;      
            num3 = num3 + num4;          
    
            
        }
        if (choice == '1'){
            
           cout << choice;
           
            
           num4=1;
            
            cout << "New Hand Total = " << num3 + num4 << endl << endl;      
            num3 = num3 + num4;          
    
        }
        
        
        //Card 3: Assigning King, Queen, Jack Values
        
         
                else{
            
                }
    if (num4 == 11 ){
        letter = 'K';
        cout <<letter;
        num4 =10;
    }
        
    if (num4 == 12 ){
        letter = 'Q';
        cout <<letter;
        num4 =10;
    }
    else{
         cout << endl;
    }
        
        if (num4 == 13){
            letter = 'J';
            cout << letter;
            num4 =10;
        }
        else{
         cout << endl;
        }
       
     }
    
    
       cout << "New Hand Total = " << num3 + num4 << endl << endl;      
        num3 = num3 + num4;          
    
        }
    }
}
while (hit == 'y' || hit == 'Y');

//Exit 

return 0;
}



void dealr(int[]){
}
    void print(int n){
    for(int i=0;i<n;i++){
        
        cout<<faceFl(i)<<suitFl1(i)
            <<" has a value of "<<static_cast<int>(valFl(i))<<endl;
    }
}


char suitFl1(int i){
   
    char suit[]={'S','D','C','H'};
    
    return suit[i/13];
}

char faceFl(int i){
   
    char face[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    
    return face[i%13];
}

char valFl(int i){
    cout << endl;
        int imod13=i%13+1;
        
        return imod13<11?imod13:10;//Value is 10 or less
}
    
