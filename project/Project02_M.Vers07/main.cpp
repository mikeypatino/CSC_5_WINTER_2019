/* 
 * File:   main.cpp
 * Author: Miguel Alva Patino
 * Created on January 31, 2019
 * Purpose:  Project02: BlackJack Mike_1
 */

//System Libraries Here
 #include <iostream>
 #include <fstream>
 #include <iomanip>
 #include <cstdlib>
 #include <ctime>
 #include <cmath>
 using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
 const int DECKSIZE = 14;

//Function Prototypes Here


//This will allow the user and the dealer to play against each other
int plyAgst(int , int);

//This Prototype is responsible for the dealer getting his/her card
float dealr(int);

//This Prototype is responsible for displaying the card face and value
void print(int);

//This prototype is responsible for the Card Suit
string cardSut(int); 

//This prototype is responsible the Card Face i.e letter
char cardFac(int);

//This prototype is responsible for the Card Value i.e number
char cardVal(int);


//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    
     srand(static_cast<unsigned int>(time(0)));
     
    //Declare all Variables Here
     int NCARDS =14;
     int hit;
   
    int num1, num2, num3, numD1, numD2, numD3,numD4,numD5;
    char letter;
    
  
 
//Initialize or input 
   
   cout << "Welcome to the BlackJack Table " << endl;
   cout << "Get 21 Before The Dealer to win!" << endl;
   cout << endl;
   cout << "Just a friendly reminder: " <<endl ;
   print(NCARDS);
   cout << endl;
   
   
   cout << "====================== Let's Begin ==================================" << endl;
  

   cout << endl;

   cout << "Your hand       = ";
   
  cout <<  "Dealer Hand Total =  ";
    

   
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
    
        cout << " " << num1 << ", ";
    
    
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
    cout << num2;
     //user hand
   
      
        cout <<endl;
//        cout << num2 << endl ;                                
        cout << "Your Hand Total =  " << num1 + num2 << endl << endl;
        num3 = num1 + num2;
        cout << endl;
        
        
                            
                            
        
        
    //Declare New Variables for Card #3
        
    int num4;

                                                          
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
        cout << endl;
    cout << "Do you want another card? The dealer will also get"
            " another card. (y/n): " << endl;
    cin >> hit;
    
    if (hit == 'n' || hit == 'N'){
        
    }
    
    
    /* If the user wants another card, they will it "y" and get a card and 
     * the dealer will ALSO get a card
     */
    
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
        
        
    int numD2,numD3;
    char letter;
    
    //The dealer will now have the ability to be dealt random card from [1-14]
     numD1 = (rand() %13+1);   
     
     //Dealer Card 1: Assigning King, Queen, Jack Values
     
    if (numD1 == 11){
        letter = 'K';
        cout <<letter;
        numD1 =10;
    }
    if (numD1 == 12 ){
        letter = 'Q';
        cout <<letter;
        numD1 =10;
    }
    if (numD1 == 13){
        letter = 'J';
        cout << letter;
        numD1 =10;
    }
     
                   cout << numD1 << ", ";
                    
     //The dealer will now be dealt a 2nd random card
                    
     numD2 = rand()%13+1; 
     
       if (numD2 == 11){
        letter = 'K';
        cout <<letter;
        numD2 =10;
    }
        if (numD2 == 12){
            letter = 'Q';
            cout <<letter;
            numD2 =10;
        }
            if (numD2 == 13){
                letter = 'J';
                cout <<letter;
                numD2 =10;
            }
     
    cout << numD2;
    cout << endl;
    
    cout << "Dealer Hand Total =  " << numD1 + numD2 << endl << endl;
    numD3 = numD1 + numD2;

    
        }
    int hit;
    char letter;
            
        
        
        //Random number from [1-14]
        
        numD4 = (rand()%13+1);
        

            
            
            cout << "New Hand Total = " << num3 + num4 << endl ;      
            num3 = num3 + num4;          
            cout << endl;
            
        
        
            
            
        


        
        //Card 3: Assigning King, Queen, Jack Values
        
    
                
    
    if (numD4 == 11 ){
        letter = 'K';
        cout <<letter;
        numD4 =10;
           
    }
        
    if (numD4 == 12 ){
        letter = 'Q';
        cout <<letter;
        numD4 =10;
        
    }
    
        
    if (numD4 == 13){
        letter = 'J';
        cout << letter;
        numD4 =10;
           
       }
    else{
        
    }
                  
         cout << "New DEALER Hand Total = " << ( numD3 + numD4 )   << endl << endl; 
         numD3 = numD3 + numD4; 
    
   
             
    
   
    


}
    
    
    
    
    }


while (hit == 'y' || hit == 'Y');

//Exit 

return 0;
}
  
//float dealr(int numD1){
//    int numD2,numD3;
//    char letter;
//    
//    //The dealer will now have the ability to be dealt random card from [1-14]
//     numD1 = (rand() %13+1);   
//     
//     //Dealer Card 1: Assigning King, Queen, Jack Values
//     
//    if (numD1 == 11){
//        letter = 'K';
//        cout <<letter;
//        numD1 =10;
//    }
//    if (numD1 == 12 ){
//        letter = 'Q';
//        cout <<letter;
//        numD1 =10;
//    }
//    if (numD1 == 13){
//        letter = 'J';
//        cout << letter;
//        numD1 =10;
//    }
//     
//                    cout << numD1 << ", ";
//                    
//     //The dealer will now be dealt a 2nd random card
//                    
//     numD2 = rand()%13+1; 
//       if (numD2 == 11){
//        letter = 'K';
//        cout <<letter;
//        numD2 =10;
//    }
//        if (numD2 == 12){
//            letter = 'Q';
//            cout <<letter;
//            numD2 =10;
//        }
//            if (numD2 == 13){
//                letter = 'J';
//                cout <<letter;
//                numD2 =10;
//            }
//    cout << numD2 <<endl;
//     
//    cout << "Dealer Hand Total =  " << numD1 + numD2 << endl << endl;
//    numD3 = numD1 + numD2;
//}
   

void print(int n){
        
        for(int i=0;i<n;i++){
        
            cout << cardFac(i) << cardSut(i)
                
                << " has a value of " <<static_cast<int> (cardVal(i)) <<endl;
    }
}



string cardSut(int i){
   
   string cardsut[] = {"Spade","Diamond" , "Clubs" , "Hearts"};
    
    return cardsut[i/13];
}

char cardFac(int i){
   
    char cardFac[]={'A','2','3','4','5','6','7',
                 '8','9','T','J','Q','K'};
    
    return cardFac[i % 13];
}

char cardVal(int i){
    
    cout << endl;
    
        int imod13 = i%13+1;
        
        //This returns values 10 or lower
        
        return imod13<11?imod13:10;
}
    

    