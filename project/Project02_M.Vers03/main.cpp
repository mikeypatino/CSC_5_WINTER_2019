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
 #include <iostream>
#include <vector>
#include <ctime>

using namespace std;


//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
bool search(const vector<int>& vec, int index);
void shuffle(int array[], const int size);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int  i;





   
    const int SIZE = 14;
    
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    for ( int i = 0; i < 14; ++i)
        cout << array[i] << " ";
    cout << endl; 

    shuffle(array, 14);

    for ( int i = 0; i < 14; ++i)
        cout << array[i] << " ";
    cout << endl; 
    
    
    return 0;
}
bool search(const vector<int>& vec, int index)
{
    for (int i = 0; i < vec.size(); ++i){
        if ( index == vec[i] )
            return true;
    }

    return false;
}



void shuffle(int array[], const int SIZE)
{
   
    for (int i = 0; i < SIZE; i++ ){
        int index = rand()% SIZE;
        
    //SWAP 
        int temp =  array[i];
        array[i] = array[index];
        array[index] = temp;
        
        for (int i = 0; i < SIZE; i++ ){
            cout << array[i] << endl;
            cout << endl;
            
            
            
            
        }
        
    }
}

    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    //these are going to be for the dealers 
//    const int SIZE=9;
//    int array[SIZE]={2,3,4,5,6,7,8,9};
//    for (int i=0; i<=14; i++) {
//           int r = (rand()%14);  
//     // The point is to randomly generate numbers from this array
//            
//           int temp = array[i]; 
//           array[i] = array[r]; 
//           array[r] = temp;
//           
//           cout << array[r];
//    
    //}
     
    //Display the outputs 
    
    //Exit stage right or left!

//    return 0;
//}

