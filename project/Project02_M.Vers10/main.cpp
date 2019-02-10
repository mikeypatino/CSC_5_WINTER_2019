/* 
 * File:   main.cpp
 * Author: Mike Alva Patino 
 * Created on January 31, 2019
 * Purpose:  Project 02: BlackJack
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

//This Prototype is responsible for displaying the card face and value
void print(int);

//This prototype is responsible for the Card Suit
string cardSut(int); 

//This prototype is responsible the Card Face i.e letter
char cardFac(int);

//This prototype is responsible for the Card Value i.e number
char cardVal(int);

// This prototype is responsible for displaying the random cards and then 
// sorting them from ascending order
void bubSort(int[], int);

//This prototype is responsible for switching the values around
void swap(int &, int &);


//Program Execution Begins Here

int main(int argc, char** argv) {
    
    //Set the random number seed
    
     srand(static_cast<unsigned int>(time(0)));
     
    //Declare all Variables Here
    
    int num1, num2, num3;
    char letter;
    int NCARDS =14;
    int number;
    
  //For my Bubble Sort Function
    
    const int SIZE = 14;
    
    int val[SIZE] = { 2, 14, 10, 6, 4, 7, 1, 5, 3, 8, 9, 12, 13, 11};
   
 
//Initialize or input 
    

   
   cout << "Welcome to the BlackJack Table " << endl;
   cout << "Get 21 to win!" << endl << endl;
   
   cout << "You will be drawing from these randomized cards : " << endl;
  
   for (auto element : val)
       cout << element << " ";
   
   cout << endl << endl << endl;
   
   
 //===================== Bubble Sort ==========================//
   
   
   
   bubSort(val, SIZE);
   
   cout << endl;
   
   cout << "If you sorted the numbers from least to greatest, "
           "you must be smart enough to win! Lets play!" << endl;
   
   for (auto element : val){
       cout << element << ", " ;
       
   }
       
   cout << endl;
   
  
   //Display the outputs

   
    //Sorted List
   cout << endl;
    
    
   cout << "Choose:" << endl;
   cout << "1. Play" << endl;
   cout << "2. Exit" << endl;
   cin >> number;
   
   
  while (number != 1 && number != 2){
       cout << "Invalid Input, Run Again" << endl;
       
       return number;
        
      
   }
       
   if (number == 2){
       exit (0);
   }
   if (number == 1){
       
       
   
   cout << " **** Just a friendly reminder: " <<endl ;
   
   //These are meant to be instructions or reminders of the values
   
   print(NCARDS);
   
   cout << endl;
   
   
   
   cout << "====================== Let's Begin ==================================" << endl;
  
   
   }
   cout << endl;

   cout << endl;
   cout << "Your Hand: ";
   
   
   
   //This will give user random numbers from [1-14]
   
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
    
    if (num1 == 1 ){
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
    
    else {
        
    cout << "Do you want another card? (y/n): ";  
    cin >> hit;
    
    if (hit == 'y' || hit == 'Y' ){
        
 
            
  
    cout << endl;
    
    //This will give values from [1-14]
    
    num4 = (rand() % 13+1);   
    
     if (num4 == 1){
        letter = 'A';
        
        cout << " You got an Ace, would you like the value to be 1 or 11?  ";
        cin >> choice;
        
        if(choice == 11){
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

void print(int n){
        
        for(int i=0 ;i < n; i++ ){
        
            cout << cardFac(i) << cardSut(i)
                
            << " has a value of " <<static_cast<int> (cardVal(i)) <<endl;
            }
}



string cardSut(int i){
   
   string cardsut[] = {"Spade","Diamond" , "Clubs" , "Hearts"};
    
   return cardsut[i/13];
   
}

char cardFac(int i){
   
    char cardFac[] = {'A','2','3','4','5','6','7',
                       '8','9','T','J','Q','K'};
    
    return cardFac[i % 13];
}

char cardVal(int i){
    
    cout << endl;
    
    int imod13 = i%13+1;
        
        //This returns values 10 or lower
        
        return imod13 < 11 ? imod13:10;
}

void bubSort(int a[], int size){
    
    //This is the maximum element for sorting
    int maxElem;
    
    int indx;
    
    for (maxElem = size -1; maxElem > 0; maxElem-- ){
        for (indx =0 ; indx < maxElem; indx ++){
            if ( a[indx] > a[indx +1]){
                swap(a[indx], a[indx+1]);
            }
        }
    }
    
}

void swap(int &x, int &y){
   
    
    int temp = x;
    x = y;
    y = temp;
    
}
