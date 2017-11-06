/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on November 3rd, 2017, 4:00 PM
 * Purpose: Project Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <fstream>  //File Library
#include <string>   //String Library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed
using namespace std;

//User Libraries
#include "dice.h"     //dice Header File
#include "screCard.h" //Score Card Header File

//Global Constants

//Function Prototypes
void shwCntnts(fstream &file);  //Show rules From Txt File
Dice *roll(int,int []);         //Dice Roll function
void game(int *,int);           //Display Rolled Dice
void points(int [],int);        //Display Points Available
void screBoard(screCard *scre); //ScoreBoard Input
void destroy(Dice *);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;    //Choice for Menu Input
    fstream dataFile;   //Input File from outside Folder
   
    //Loop on the menu
    do{
    
        //Input values for Menu
        cout<<endl<<"Choose from the list"<<endl;
        cout<<"Type 1 to See Yahtzee Rules"<<endl;
        cout<<"Type 2 to Roll Dice"<<endl;
        cout<<"Type 3 to Input Score Card and save to Encrypted File"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;
        cout<<endl;
        
        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Open File
                dataFile.open("Rules to Yahtzee.txt", ios::in);
                
                //Rules for Game
                cout<<"Rules for Yahtzee"<<endl;
                cout<<"-------------------------------------------------------------"<<endl;
                shwCntnts(dataFile);
                
                //Close File
                dataFile.close();
                
                //Exit stage right!
                break;
            }
            case '2':{
                //Info On How to how to keep score
                cout<<"This Is Just for Rolling Dice and seeing score"<<endl;
                cout<<"You may write down the score to remember but no need two write down bonuses, sum, or total."<<endl;
                cout<<"#3 in Menu will calculate all That for you."<<endl;
                
                //Declare Variables
                int turns=3,    //Turns for Roll
                    dice=5,      //Side of Dice
                    sides=6,    //Sides of Dice
                    rollD=5;    //Dice Rolled
                int array[rollD];  //Game Results in Array 
                
                //Roll Function
                roll(turns,array);
                
                //Display
                game(array,dice);
               
                //Points
                points(array,dice);
                
                break;
            }
            case '3':{
                
                screCard *scre;
                screBoard(scre);

                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}

void destroy(Dice *a){
    delete []a;
}

void screBoard(screCard *scre){
    //Variables
    fstream file;
    int size=50;
    string name(scre->name);

    //Initialize All
    scre->name[size];
    scre->one=0,
    scre->two=0,
    scre->three=0,
    scre->four=0,
    scre->five=0,
    scre->six=0,
    scre->thrKind=0,
    scre->fourKind=0,
    scre->fulHuse=0,
    scre->smlStrght=0,
    scre->lrgeStrght=0,
    scre->chnce=0,
    scre->yhtze=0,
    scre->ttl=0,
    scre->sum=0,
    scre->bnus=0,
    scre->roll=0,
    scre->amnt=0,
    scre->yaht=0;

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
    cin.getline(scre->name,size);
    name=scre->name;
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
    cout<<"How many Yahtzeed Rolled?: ";
    cin>>scre->roll;

    //Roll for Yahtzee
    if(scre->roll==0){
        cout<<"Better Luck Next Time!"<<endl;
    }
    else if(scre->roll>0){
        cout<<"Lucky Roll!"<<endl;
        for(int i=0;i<scre->roll;i++){
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

    //Display for Score Board
    cout<<endl<<"Score Card Results"<<endl;
    cout<<"Player: "<<name<<endl;
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

    cout<<endl<<"Writing to Binary File Now!"<<endl;
    //Write to File with binary
    file.write(reinterpret_cast<char *>(&scre),sizeof(scre));

    //File Close
    file.close();
}

void shwCntnts(fstream &file){
    string line;
    while(file){
        cout<<line;
        getline(file, line, '#');
    }
    cout<<endl<<endl;
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
    int one=0,two=0,three=0,four=0,five=0,six=0;    //Counter for Each Side of Dice
    
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
    
    cin.ignore();
    cout<<"Press Enter to Roll Dice"<<endl;
    cin.ignore();
    
    //3 turn Roll
    for(int i=0;i<turns-1;i++){ 
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
    
}