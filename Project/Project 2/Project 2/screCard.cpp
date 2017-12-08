/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on Dec 8th, 2017, 12:00 PM
 * Purpose: Project Yahtzee Class
 */

#include <iostream>//Input Output Library
#include <fstream> //File Library
#include <string>   //String Library
#include "screCard.h"
using namespace std;

screCard::screCard(){
    name=" ";
    one=0,
    two=0,
    three=0,
    four=0,
    five=0,
    six=0,
    thrKind=0,
    fourKind=0,
    fulHuse=0,
    smlStrght=0,
    lrgeStrght=0,
    chnce=0,
    yhtze=0,
    ttl=0,
    sum=0,
    bnus=0,
    roll=0,
    amnt=0,
    yaht=0;
}

void screCard::screBoard(screCard* scre){
    //Variables
    fstream file;

    //File open
    file.open("ScoreCard.txt",ios::in|ios::binary);

    //Error Opening File!
    if(!file){
        cout<<"Error Opening File!"<<endl;
        return;
    }

    //User Input fro Score Board
    cin.ignore();   
    cout<<"Enter Player Name: ";
    getline(cin,name);
    cout<<"Enter Score For One Slot: ";
    cin>>one;
    cout<<"Enter Score For Two Slot: ";
    cin>>two;
    cout<<"Enter Score For Three Slot: ";
    cin>>three;
    cout<<"Enter Score For Four Slot: ";
    cin>>four;
    cout<<"Enter Score For Five Slot: ";
    cin>>five;
    cout<<"Enter Score For Six Slot: ";
    cin>>six;
    //Sum of all Above
    sum=one+two+three+four+five+six;
    //Bonus
    if(sum>60){
        bnus=35;
    }

    cout<<endl;
    cout<<"Enter Score For Three of a Kind Slot: ";
    cin>>thrKind;
    cout<<"Enter Score For Four of a Kind Slot: ";
    cin>>fourKind;
    cout<<"Enter Score For Full House Slot: ";
    cin>>fulHuse;
    cout<<"Enter Score For Small Straight Slot: ";
    cin>>smlStrght;
    cout<<"Enter Score For Large Straight Slot: ";
    cin>>lrgeStrght;
    cout<<"Enter Score For Chance Slot: ";
    cin>>chnce;

    //Exception for Yahtzee
    try{
        cout<<"How many Yahtzeed Rolled?: ";
        cin>>roll;
        
        if(roll<0||roll>2){
            throw (2);
        }
        else roll;
            
    }catch(int x){
        cout<<endl<<"No Way you Threw More Than "<<x<<" Yathzees!"<<endl;
    }
    
    //Roll for Yahtzee
    if(roll==0){
        cout<<"Better Luck Next Time!"<<endl;
    }
    else if(roll>0){
        cout<<"Lucky Roll!"<<endl;
        for(int i=0;i<roll;i++){
        yaht++;
        }
    }
    //Bonus
    bnus+=(yaht*5);

    cout<<"Enter Score For Yahtzee Slot: ";
    cin>>yhtze;

    //Sum for All Scores
    ttl=sum+bnus+thrKind+fourKind
            +fulHuse+smlStrght+lrgeStrght+chnce+yhtze;

    //Display for Score Board
    cout<<endl<<"Score Card Results"<<endl;
    cout<<"Player: "<<name<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Ones: "<<one<<endl;
    cout<<"Two : "<<two<<endl;
    cout<<"Threes: "<<three<<endl;
    cout<<"Fours : "<<four<<endl;
    cout<<"Fives: "<<five<<endl;
    cout<<"Sixes: "<<six<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Three of a Kind: "<<thrKind<<endl;
    cout<<"Four of a Kind: "<<fourKind<<endl;
    cout<<"Full House: "<<fulHuse<<endl;
    cout<<"Small Straight: "<<smlStrght<<endl;
    cout<<"Large Straight: "<<lrgeStrght<<endl;
    cout<<"Chance: "<<chnce<<endl;
    cout<<"Yahtzee: "<<yhtze<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Bouns: "<<bnus<<endl;
    cout<<"Total: "<<ttl<<endl;

    cout<<endl<<"Writing to Binary File Now!"<<endl;
    //Write to File with binary
    file.write(reinterpret_cast<char *>(&scre),sizeof(scre));

    //File Close
    file.close();

}