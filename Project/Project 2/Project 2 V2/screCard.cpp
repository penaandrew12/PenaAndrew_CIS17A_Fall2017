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
    name[size];
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
    file.open("ScoreCard.txt",ios::in|ios::out|ios::binary);

    //User Input fro Score Board
    cin.ignore();   
    cout<<"Enter Players First Name: ";
    cin.getline(scre->name,size);
    cout<<"Enter Score For One Slot: ";
    cin>>scre->one;
    cout<<"Enter Score For Two Slot: ";
    cin>>scre->two;
    cout<<"Enter Score For Three Slot: ";
    cin>>scre->three;
    cout<<"Enter Score For Four Slot: ";
    cin>>scre->four;
    cout<<"Enter Score For Five Slot: ";
    cin>>scre->five;
    cout<<"Enter Score For Six Slot: ";
    cin>>scre->six;
    //Sum of all Above
    scre->sum=scre->one+scre->two+scre->three+scre->four+scre->five+scre->six;
    //Bonus
    if(scre->sum>60){
        scre->bnus=35;
    }

    cout<<endl;
    cout<<"Enter Score For Three of a Kind Slot: ";
    cin>>scre->thrKind;
    cout<<"Enter Score For Four of a Kind Slot: ";
    cin>>scre->fourKind;
    cout<<"Enter Score For Full House Slot: ";
    cin>>scre->fulHuse;
    cout<<"Enter Score For Small Straight Slot: ";
    cin>>scre->smlStrght;
    cout<<"Enter Score For Large Straight Slot: ";
    cin>>scre->lrgeStrght;
    cout<<"Enter Score For Chance Slot: ";
    cin>>scre->chnce;

    //Exception for Yahtzee
    try{
        cout<<"How many Yahtzeed Rolled?: ";
        cin>>scre->roll;
        
        if(scre->roll<0||scre->roll>2){
            throw (2);
        }
        else scre->roll;
            
    }catch(int x){
        cout<<endl<<"No Way you Threw More Than "<<x<<" Yathzees!"<<endl;
    }
    
    //Roll for Yahtzee
    if(scre->roll==0){
        cout<<"Better Luck Next Time!"<<endl;
    }
    else if(scre->roll>0){
        cout<<"Lucky Roll!"<<endl;
        for(int i=0;i<roll;i++){
        scre->yaht++;
        }
    }
    //Bonus
    scre->bnus+=(scre->yaht*5);

    cout<<"Enter Score For Yahtzee Slot: ";
    cin>>scre->yhtze;

    //Sum for All Scores
    scre->ttl=scre->sum+scre->bnus+scre->thrKind+scre->fourKind
            +scre->fulHuse+scre->smlStrght+scre->lrgeStrght+scre->chnce+scre->yhtze;

    cout<<endl<<"Writing to Binary File Now!"<<endl;
    //Write to File with binary
    file.write(reinterpret_cast<char *>(&scre),sizeof(scre));
    
    //Reading From Binary
    cout<<"Reading From Binary File Now!"<<endl;
    file.seekg(0L,ios::beg);
    file.read(reinterpret_cast<char *>(&scre),sizeof(scre));
    
    //Display for Score Board
    cout<<endl<<"Score Card Results"<<endl;
    cout<<"Player: "<<scre->name<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Ones: "<<scre->one<<endl;
    cout<<"Two : "<<scre->two<<endl;
    cout<<"Threes: "<<scre->three<<endl;
    cout<<"Fours : "<<scre->four<<endl;
    cout<<"Fives: "<<scre->five<<endl;
    cout<<"Sixes: "<<scre->six<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Sum: "<<scre->sum<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Three of a Kind: "<<scre->thrKind<<endl;
    cout<<"Four of a Kind: "<<scre->fourKind<<endl;
    cout<<"Full House: "<<scre->fulHuse<<endl;
    cout<<"Small Straight: "<<scre->smlStrght<<endl;
    cout<<"Large Straight: "<<scre->lrgeStrght<<endl;
    cout<<"Chance: "<<scre->chnce<<endl;
    cout<<"Yahtzee: "<<scre->yhtze<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Bouns: "<<scre->bnus<<endl;
    cout<<"Total: "<<scre->ttl<<endl;
    
    //File Close
    file.close();

}