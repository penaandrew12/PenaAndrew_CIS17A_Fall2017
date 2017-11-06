/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on October 31, 2017, 12:00 PM
 * Purpose: Project Version 1 Yahtzee
 */

//System Libraries
#include <iostream> //Input Output library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "dice.h" //dice Header File

//Global Constants

//Function Prototype
Dice *roll(int,int []);
void game(int [],int);
void points(int [],int);

// Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int turns=3;    //Turns for Roll
    int dice=5;      //Side of Dice
    int sides=6;    //Sides of Dice
    int array[5];    //Game Results in Array 
    
    //Game 1
    //Roll Function
    roll(turns,array);
    //Display
    game(array,dice);
    //Points
    points(array,dice);
    
    //Exit stage right!
    return 0;
}

void game(int array[],int dice){
    cout<<endl<<"-------------------------------"<<endl;
    //Game 1
    cout<<"Game Results: "<<endl;
    for(int i=0;i<dice;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void points(int array[],int dice){
    //Variables
    int one=0,two=0,three=0,four=0,five=0,six=0;
    
    cout<<endl<<"Points"<<endl;
    //Numbers 1-6 Counters
    for(int i=0;i<dice;i++){
        if (array[i]==1){
            one++;
        }
        else if (array[i]==2){
            two++;
        }
        else if (array[i]==3){
            three++;
        }
        else if (array[i]==4){
            four++;
        }
        else if (array[i]==5){
            five++;
        } 
        else if (array[i]==6){
            six++;
        } 
    }
    
    //Digits Sum only
    cout<<"One: "<<one<<endl;
    cout<<"Two: "<<two*2<<endl;
    cout<<"Three: "<<three*3<<endl;
    cout<<"Four: "<<four*4<<endl;
    cout<<"Five: "<<five*5<<endl;
    cout<<"Six: "<<six*6<<endl;    
   
    //Three of A Kind and Full House
    if(one==3){
        cout<<"Three of A Kind: "<<one+(two*2)+(three*3)+(four*4)+(five*5)+(six*6)<<endl;
        if(two==2||three==2||four==2||five==2||six==2){
            cout<<"Full House: 25"<<endl;
        }
    }else if(two==3){
        cout<<"Three of A Kind: "<<(two*2)+one+(three*3)+(four*4)+(five*5)+(six*6)<<endl;
        if(one==2||three==2||four==2||five==2||six==2){
            cout<<"Full House: 25"<<endl;
        }
    }else if(three==3){
        cout<<"Three of A Kind: "<<(three*3)+one+(two*2)+(four*4)+(five*5)+(six*6)<<endl;
        if(one==2||two==2||four==2||five==2||six==2){
            cout<<"Full House: 25"<<endl;
        }
    }else if(four==3){
        cout<<"Three of A Kind: "<<(four*4)+one+(two*2)+(three*3)+(five*5)+(six*6)<<endl;
        if(one==2||two==2||three==2||five==2||six==2){
            cout<<"Full House: 25"<<endl;
        }
    }else if(five==3){
        cout<<"Three of A Kind: "<<(five*5)+one+(two*2)+(three*3)+(four*4)+(six*6)<<endl;
        if(one==2||two==2||three==2||four==2||six==2){
            cout<<"Full House: 25"<<endl;
        }
    }else if(six==3){
        cout<<"Three of A Kind: "<<(six*6)+one+(two*2)+(three*3)+(four*4)+(five*5)<<endl;
        if(one==2||two==2||three==2||four==2||five==2){
            cout<<"Full House: 25"<<endl;
        }
    }
    
    //Four of A Kind
    if(one==4){
        cout<<"Four of A Kind: "<<one+(two*2)+(three*3)+(four*4)+(five*5)+(six*6)<<endl;
    }else if(two==4){
        cout<<"Four of A Kind: "<<(two*2)+one+(three*3)+(four*4)+(five*5)+(six*6)<<endl;
    }else if(three==4){
        cout<<"Four of A Kind: "<<(three*3)+one+(two*2)+(four*4)+(five*5)+(six*6)<<endl;
    }else if(four==4){
        cout<<"Four of A Kind: "<<(four*4)+one+(two*2)+(three*3)+(five*5)+(six*6)<<endl;
    }else if(five==4){
        cout<<"Four of A Kind: "<<(five*5)+one+(two*2)+(three*3)+(four*4)+(six*6)<<endl;
    }
    else if(six==4){
        cout<<"Four of A Kind: "<<(six*6)+one+(two*2)+(three*3)+(four*4)+(five*5)<<endl;
    }
    

    //Small Straight
    if(one==2&&two==1&&three==1&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(one==1&&two==2&&three==1&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(one==1&&two==1&&three==2&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(one==1&&two==1&&three==1&&four==2){
        cout<<"Small Straight: 30"<<endl;
    }
    if(two==2&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(two==1&&three==2&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(two==1&&three==1&&four==2&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(two==1&&three==1&&four==1&&five==2){
        cout<<"Small Straight: 30"<<endl;
    }
    if(three==2&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(three==1&&four==2&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(three==1&&four==1&&five==2&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(three==1&&four==1&&five==1&&six==2){
        cout<<"Small Straight: 30"<<endl;
    }
    if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    
    //Large Straight
    if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Large Straight: 40"<<endl;
    }
    if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Large Straight: 40"<<endl;
    }
    
    //Chance
    cout<<"Chance: "<<one+(two*2)+(three*3)+(four*4)+(five*5)+(six*6)<<endl;
    
    //Yahtzee
    if(one==5||two==5||three==5||four==5||five==5||six==5){
        cout<<"Yathzee: 50"<<endl;
    }
    
}

Dice *roll(int turns, int dArray[]){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Dynamically Allocated Array
    Dice *a=new Dice[turns];
    
    //Players Choice for Yes
    int die=5;
    char ans;
    dArray[die]=0;
    
    //3 turn Roll
    for(int i=0;i<turns-1;i++){
        cout<<"Press Enter to Roll Dice"<<endl;
        cin.ignore();
        
        if(i==0){
        //Call random number generator for the first dice roll
        a[0].dice1=rand()%6+1;
        a[0].dice2=rand()%6+1;
        a[0].dice3=rand()%6+1;
        a[0].dice4=rand()%6+1;
        a[0].dice5=rand()%6+1;

        //Dice Roll Results
        cout<<endl<<"First Dice Roll"<<endl;
        cout<<"Dice 1: "<<a[0].dice1<<endl;
        cout<<"Dice 2: "<<a[0].dice2<<endl;
        cout<<"Dice 3: "<<a[0].dice3<<endl;
        cout<<"Dice 4: "<<a[0].dice4<<endl;
        cout<<"Dice 5: "<<a[0].dice5<<endl;
        }
        
        //Input Dice in which user wishes to keep
        cout<<endl<<"Player May Keep Whatever Dice He/She Chooses!"<<endl;
        cout<<"Do you wish to keep dice number 1? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice1=a[i].dice1;
        }
        else a[i+1].dice1=rand()%6+1;

        cout<<"Do you wish to keep dice number 2? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice2=a[i].dice2;
        }
        else a[i+1].dice2=rand()%6+1;

        cout<<"Do you wish to keep dice number 3? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice3=a[i].dice3;
        }
        else a[i+1].dice3=rand()%6+1;

        cout<<"Do you wish to keep dice number 4? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice4=a[i].dice4;
        }
        else a[i+1].dice4=rand()%6+1;

        cout<<"Do you wish to keep dice number 5? (Y or y to keep)"<<endl;
        cin>>ans;
        if(ans=='Y'||ans=='y'){
            a[i+1].dice5=a[i].dice5;
        }
        else a[i+1].dice5=rand()%6+1;

        //Dice Roll Results
        cout<<endl<<"Dice Roll Results"<<endl;
        cout<<"Dice 1: "<<a[i+1].dice1<<endl;
        cout<<"Dice 2: "<<a[i+1].dice2<<endl;
        cout<<"Dice 3: "<<a[i+1].dice3<<endl;
        cout<<"Dice 4: "<<a[i+1].dice4<<endl;
        cout<<"Dice 5: "<<a[i+1].dice5<<endl;
        
        a[i-1].dice1=a[i+1].dice1;
        a[i-1].dice2=a[i+1].dice2;
        a[i-1].dice3=a[i+1].dice3;
        a[i-1].dice4=a[i+1].dice4;
        a[i-1].dice5=a[i+1].dice5;
        
    }
    
    dArray[0]=a->dice1;
    dArray[1]=a->dice2;
    dArray[2]=a->dice3;
    dArray[3]=a->dice4;
    dArray[4]=a->dice5;
        
    return a;
    
    //Deallocate Memory
    delete []a;
}