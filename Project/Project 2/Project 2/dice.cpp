/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 6th, 2017, 11:00 AM
 * Purpose: Project 2
 */

#include <iostream> //Input Output library
#include <ctime> //Time to set the Seed
#include <cstdlib> //Random numbers
#include "dice.h"
using namespace std;

Dice::Dice(){
    dice1=0;
    dice2=0;
    dice3=0;
    dice4=0;
    dice5=0;
    dice6=0;
}

void Dice::rollDice(){
}

void Scores::rollScres(){
    //Roll Dice
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char ans;   //Players Input Answer
    int one=0,two=0,three=0,four=0,five=0,six=0;
    int size=6;
    int array[5]={};
    int turns=3;
    
    //RNG
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    dice3=rand()%6+1;
    dice4=rand()%6+1;
    dice5=rand()%6+1;
    dice6=rand()%6+1;
    
    //Turn 6 Dice to One Array
    array[0]=dice1;
    array[1]=dice2;
    array[2]=dice3;
    array[3]=dice4;
    array[4]=dice5;
    array[5]=dice6;
    
    //Throw Dice Results
    cout<<"Throw Number "<<1<<endl;
    cout<<dice1<<endl;
    cout<<dice2<<endl;
    cout<<dice3<<endl;
    cout<<dice4<<endl;
    cout<<dice5<<endl;
    cout<<dice6<<endl;

    //Numbers 1-6 Counters
    for(int i=0;i<size;i++){
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
    
    //Scores
    //Digits Sum only
    cout<<endl<<"Points"<<endl;
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
    else if(one==1&&two==2&&three==1&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==2&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==1&&four==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==2&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==2&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==2&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==2&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==2&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==1&&five==2&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==1&&five==1&&six==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }

    //Large Straight
    if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Large Straight: 40"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Large Straight: 40"<<endl;
    }

    //Chance
    cout<<"Chance: "<<one+(two*2)+(three*3)+(four*4)+(five*5)+(six*6)<<endl;

    //Yahtzee
    if(one==5||two==5||three==5||four==5||five==5||six==5){
        cout<<"Yathzee: 50"<<endl;
    }
    
    //Input Dice in which user wishes to keep
    cout<<endl<<"If User gets roll that He/She wants, just keep them all until last roll."<<endl;
    cout<<"After Writing Done the Score you wish to keep. Press Enter."<<endl;
    cout<<"Player May Keep Whatever Dice He/She Chooses!"<<endl;
    cout<<"Do you wish to keep the First dice: "<<dice1<<"? (Y or y to keep)"<<endl;
    cin>>ans;

    if(ans=='Y'||ans=='y'){
        dice1=dice1;
    }
    else dice1=rand()%6+1;

    cout<<"Do you wish to keep the Second dice: "<<dice2<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice2=dice2;
    }
    else dice2=rand()%6+1;

    cout<<"Do you wish to keep the Third dice: "<<dice3<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice3=dice3;
    }
    else dice3=rand()%6+1;

    cout<<"Do you wish to keep the Forth dice: "<<dice4<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice4=dice4;
    }
    else dice4=rand()%6+1;

    cout<<"Do you wish to keep the Fifth dice: "<<dice5<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice5=dice5;
    }
    else dice5=rand()%6+1;

    cout<<"Do you wish to keep the Sixth dice: "<<dice6<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice6=dice6;
    }
    else dice6=rand()%6+1;
    cout<<endl;
    
    //Throw Dice Results
    cout<<"Throw Number "<<2<<endl;
    cout<<dice1<<endl;
    cout<<dice2<<endl;
    cout<<dice3<<endl;
    cout<<dice4<<endl;
    cout<<dice5<<endl;
    cout<<dice6<<endl;
    
    //Scores
    one=0;two=0;three=0;four=0;five=0;six=0;
    //Turn 6 Dice to One Array
    array[0]=dice1;
    array[1]=dice2;
    array[2]=dice3;
    array[3]=dice4;
    array[4]=dice5;
    array[5]=dice6;
    
    //Numbers 1-6 Counters
    for(int i=0;i<size;i++){
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
    cout<<endl<<"Points"<<endl;
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
    else if(one==1&&two==2&&three==1&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==2&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==1&&four==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==2&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==2&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==2&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==2&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==2&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==1&&five==2&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==1&&five==1&&six==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }

    //Large Straight
    if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Large Straight: 40"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Large Straight: 40"<<endl;
    }

    //Chance
    cout<<"Chance: "<<one+(two*2)+(three*3)+(four*4)+(five*5)+(six*6)<<endl;

    //Yahtzee
    if(one==5||two==5||three==5||four==5||five==5||six==5){
        cout<<"Yathzee: 50"<<endl;
    }
    
    //Input Dice in which user wishes to keep
    cout<<endl<<"After Writing Done the Score you wish to keep. Press Enter."<<endl;
    cin.ignore();
    cout<<"Player May Keep Whatever Dice He/She Chooses!"<<endl;
    cout<<"Do you wish to keep the First dice: "<<dice1<<"? (Y or y to keep)"<<endl;
    cin>>ans;

    if(ans=='Y'||ans=='y'){
        dice1=dice1;
    }
    else dice1=rand()%6+1;

    cout<<"Do you wish to keep the Second dice: "<<dice2<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice2=dice2;
    }
    else dice2=rand()%6+1;

    cout<<"Do you wish to keep the Third dice: "<<dice3<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice3=dice3;
    }
    else dice3=rand()%6+1;

    cout<<"Do you wish to keep the Forth dice: "<<dice4<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice4=dice4;
    }
    else dice4=rand()%6+1;

    cout<<"Do you wish to keep the Fifth dice: "<<dice5<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice5=dice5;
    }
    else dice5=rand()%6+1;

    cout<<"Do you wish to keep the Sixth dice: "<<dice6<<"? (Y or y to keep)"<<endl;
    cin>>ans;
    if(ans=='Y'||ans=='y'){
        dice6=dice6;
    }
    else dice6=rand()%6+1;
    cout<<endl;
    
    //Throw Dice Results
    cout<<"Final Results"<<endl;
    cout<<dice1<<endl;
    cout<<dice2<<endl;
    cout<<dice3<<endl;
    cout<<dice4<<endl;
    cout<<dice5<<endl;
    cout<<dice6<<endl;
    
    //Scores
    one=0;two=0;three=0;four=0;five=0;six=0;
    //Turn 6 Dice to One Array  
    array[0]=dice1;
    array[1]=dice2;
    array[2]=dice3;
    array[3]=dice4;
    array[4]=dice5;
    array[5]=dice6;
    
    //Numbers 1-6 Counters
    for(int i=0;i<size;i++){
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
    cout<<endl<<"Points"<<endl;
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
    else if(one==1&&two==2&&three==1&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==2&&four==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==1&&four==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==2&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==2&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==2&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==2&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==2&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==1&&five==2&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(three==1&&four==1&&five==1&&six==2){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Small Straight: 30"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Small Straight: 30"<<endl;
    }

    //Large Straight
    if(one==1&&two==1&&three==1&&four==1&&five==1){
        cout<<"Large Straight: 40"<<endl;
    }
    else if(two==1&&three==1&&four==1&&five==1&&six==1){
        cout<<"Large Straight: 40"<<endl;
    }

    //Chance
    cout<<"Chance: "<<one+(two*2)+(three*3)+(four*4)+(five*5)+(six*6)<<endl;

    //Yahtzee
    if(one==5||two==5||three==5||four==5||five==5||six==5){
        cout<<"Yathzee: 50"<<endl;
    }

}