#include<iostream>
using namespace std;
void clrScrn ()
{
system("CLS");
}
int main(){
cout<<"\t\t CAR PARKING"<<endl;

int enter;
    int car=0;
    int bike=0;
    int rickshaw=0;
while(true){
    
    cout<<"PRESS 1 TO ENTER CAR"<<endl;
    cout<<"PRESS 2 TO ENTER BIKE"<<endl;
    cout<<"PRESS 3 TO ENTER RIKSHAW"<<endl;
    cout<<"PRESS 4 TO SHOW RECORDS "<<endl;
    cout<<"PRESS 5 TO DELETE "<<endl;
    cout<<"PRESS 6 TO EXIT"<<endl;
    cin>>enter;

    if(enter==1)
    {
        car++;
       clrScrn();
        cout<<"car is added"<<car<<endl;
    }
    else if(enter==2){
        bike++;
         clrScrn();
        cout<<"bike is added"<<bike<<endl;
    }
    else if(enter==3){
        rickshaw++;
         clrScrn();
        cout<<"rickshaw is added"<<rickshaw<<endl;

    }
    else if(enter==4){
        clrScrn();
        cout<<"car"<<car<<endl;
        cout<<"bike"<<bike<<endl;
        cout<<"rickshaw"<<rickshaw<<endl;
         cout<<"ALL RECORD DELETED....."<<endl;
    }
    else if(enter==5){
        car=0;
        bike=0;
        rickshaw=0;
clrScrn();
    }
    else if(enter==6){
        exit(0);
        break;
    }
    else{
        clrScrn();
        cout<<"WRONG INPUT"<<endl;
    }
}




    return 0;
}