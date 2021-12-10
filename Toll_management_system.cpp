#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
class vehicleinfo{
    
public:
    static int vehiclecountfour;
    static int vehiclecounttwo;
    
    string vehiclename;
    string numberplate;
    string ownername;
    string vehiclemovement;
    int trip;
    int type;
    void details(){
        cout<<"||Enter the Details of the vehicle||"<<endl;
        cout<<"Enter the Vehicle type:Enter 4 for a four wheeler or Enter 2 for a two wheeler "<<endl;
        cin>>type;
        cout<<"Enter Vehicle name: "<<endl;
        getchar();
        getline(cin,vehiclename);
        
        cout<<"Enter the Owner of the vehicle: "<<endl;
        
        getline(cin,ownername);
        
        cout<<"Enter the Vehicle number: "<<endl;
        
        getline(cin,numberplate);
        cout<<"Enter the vehicle direction (DELHI TO JAIPUR or JAIPUR TO DELHI"<<endl;
        getline(cin,vehiclemovement);
        if (type==2)
        {
            vehiclecounttwo++;
        }
        else
        {
            vehiclecountfour++;
        }
        cout<<"Specify the ride one-way(1) or two-way(2)"<<endl;
        cin>>trip;
    }

};
int vehicleinfo::vehiclecountfour;// By Default Value is zero
int vehicleinfo:: vehiclecounttwo;
class tollinit:public vehicleinfo{
    private:
    
    public:
     static int collection;
    int tax;
    string date;
    void setdate()
    {
        cout<<"Enter the present date (dd/mm/yyyy) same format"<<endl;
        getchar();
        getline(cin,date);
    }
    void tollcalculator()
    {
        
        if (type==4 && trip==1)
        {
            tax=350;

        }
        else if(type==4 && trip ==2)
        {
            tax =500;
        }
        else if (type ==2 && trip== 1)
        {
            tax = 200;
        }
        else
        {
            tax = 350;
        }
        collection = collection + tax;
    }
    
    void display(){
        cout<<"DATE "<<date <<endl;
        cout<<"VEHICLE INFORMATION : "<<endl;
        cout<<"VEHICLE NUMBER: "<<numberplate <<" "<<endl;
        cout<<"VEHICLE OWNER: "<<ownername <<" "<<endl;
        cout<<"VEHICLE NAME: "<<vehiclename <<" "<<endl;
        cout<<"VEHICLE MOVEMENT: "<<vehiclemovement <<" "<<endl;
        cout<<"VEHICLE TYPE: "<<type <<" "<<endl;
        cout<<"VEHICLE TRIP (1) one-way (2) two-way : "<<trip <<" "<<endl;
        cout<<"TAX PAID : "<<tax <<" "<<endl;

    }
};
int tollinit::collection;//By default 0 
int main()
{
    string number;
    int day1,day2,day3,day4,day5,day6,day7;// collection for each day
    static int totalvehicle = 0;
    int vehi1=0,vehi2=0,vehi3=0,vehi4=0,vehi5=0,vehi6=0,vehi7=0;// vehicle passed each day
    int counter;
    int choice,sub;
    int mapping;
    cout<<"         TOLL MANAGEMENT SYSTEM       "<<endl;


    // Declaring objects for each day fo the week
    tollinit v1[500];
    tollinit v2[500];
    tollinit v3[500];
    tollinit v4[500];
    tollinit v5[500];
    tollinit v6[500];
    tollinit v7[500];
   
    fstream newfile;
    newfile.open("toll.txt",ios::out|ios::in);
    operations:
    cout<<"Enter your choice for the certain operation:"<<endl;
    cout<<"(1) for Monday:"<<endl;
    cout<<"(2) for Tuesday:"<<endl;
    cout<<"(3) for  Wednesday:"<<endl;
    cout<<"(4) for  Thursday:"<<endl;
    cout<<"(5) for   Friday:"<<endl;
    cout<<"(6) for  Saturday:"<<endl;
    cout<<"(7) for  Sunday:"<<endl;
    cout<<"(8)  Week details:"<<endl;
    cout<<"(9) searching mechanism:"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter Your sub choice for first day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking first day collection"<<endl;
            cout<<"(3) For ending fist day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v1[vehi1];
                    v1[vehi1].details();
                    v1[vehi1].setdate();
                    v1[vehi1].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi1++;
                    
                }
                
            }
            else if (sub==2)
            {
                day1=v1[vehi1].collection;
                cout<<"The collection for the day first is "<<v1[vehi1].collection<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 2:
    cout<<"Enter Your sub choice for second day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking second day collection"<<endl;
            cout<<"(3) For ending second day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v2[vehi2];
                    v2[vehi2].details();
                    v2[vehi2].setdate();
                    v2[vehi2].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi2++;
                    
                }
                
            }
            else if (sub==2)
            {
                day2=v2[vehi2].collection-day1;
                cout<<"The collection for the day second is "<<day2<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 3:
    cout<<"Enter Your sub choice for third day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking third day collection"<<endl;
            cout<<"(3) For ending third day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v3[vehi3];
                    v3[vehi3].details();
                    v3[vehi3].setdate();
                    v3[vehi3].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi3++;
                    
                }
                
            }
            else if (sub==2)
            {
                day3=v3[vehi3].collection-day2-day1;
                cout<<"The collection for the day third is "<<day3<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 4:
    cout<<"Enter Your sub choice for fourth day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking fourth day collection"<<endl;
            cout<<"(3) For ending fourth day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v4[vehi4];
                    v4[vehi4].details();
                    v4[vehi4].setdate();
                    v4[vehi4].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi4++;
                    
                }
                
            }
            else if (sub==2)
            {
                day4=v4[vehi4].collection-day2-day1-day3;
                cout<<"The collection for the day fourth is "<<day4<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 5: 
    cout<<"Enter Your sub choice for fifth day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking fifth day collection"<<endl;
            cout<<"(3) For ending fifth day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v5[vehi5];
                    v5[vehi5].details();
                    v5[vehi5].setdate();
                    v5[vehi5].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi5++;
                    
                }
                
            }
            else if (sub==2)
            {
                day5=v5[vehi5].collection-day2-day1-day3-day4;
                cout<<"The collection for the day fifth is "<<day5<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 6:
    cout<<"Enter Your sub choice for sixth day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking sixth day collection"<<endl;
            cout<<"(3) For ending sixth day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v6[vehi6];
                    v6[vehi6].details();
                    v6[vehi6].setdate();
                    v6[vehi6].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi6++;
                    
                }
                
            }
            else if (sub==2)
            {
                day6=v6[vehi6].collection-day2-day1-day3-day4-day5;
                cout<<"The collection for the day sixth is "<<day6<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 7:
    cout<<"Enter Your sub choice for seventh day of week"<<endl;
        do
        {
            cout<<"(1) For registering new vehicle information with tax"<<endl;
            cout<<"(2) For checking seventh day collection"<<endl;
            cout<<"(3) For ending seventh day collection"<<endl;
            
            cin>>sub;
            if (sub==1)
            {
                while (counter!=-1)
                {
                    v7[vehi7];
                    v7[vehi7].details();
                    v7[vehi7].setdate();
                    v7[vehi7].tollcalculator();
                    cout<<"Want to add new vehicle(1) want to exit (-1)"<<endl;
                    cin>>counter;
                    // if(counter!=-1)
                    vehi7++;
                    
                }
                
            }
            else if (sub==2)
            {
                day7=v7[vehi7].collection-day2-day1-day3-day4-day5-day6;
                cout<<"The collection for the day seventh is "<<day7<<endl;
            }
            else
            {
                sub=0;
                break;
            }
            counter=0;
            cout<<"Want to continue..."<<endl;
            cout<<"Enter 1 to continue..."<<endl;
            cin>>sub;
        } while (sub!=0);
        
        
        break;
    case 8:
        cout<<"Enter (1) for displaying data of day one..."<<endl;
        cout<<"Enter (2) for displaying data of day two..."<<endl;
        cout<<"Enter (3) for displaying data of day three..."<<endl;
        cout<<"Enter (4) for displaying data of day four..."<<endl;
        cout<<"Enter (5) for displaying data of day fifth..."<<endl;
        cout<<"Enter (6) for displaying data of day sixth..."<<endl;
        cout<<"Enter (7) for displaying data of day seventh..."<<endl;
        cout<<"Enter (8) for displaying total collection..."<<endl;
        cin>>sub;
        if (sub==1)
        {
            for (int i = 0; i < vehi1; i++)
            {
                 v1[i].display();
            newfile<<"DATE|"<<v1[i].date <<" "<<endl;
            newfile<<"VEHICLE INFORMATION "<<endl;
            newfile<<"VEHICLE NUMBER: "<<v1[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v1[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v1[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v1[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v1[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v1[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v1[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else if (sub==2)
        {
            for (int i = 0; i < vehi2; i++)
            {
                 v2[i].display();
            newfile<<"DATE|"<<v2[i].date <<" "<<endl;
            newfile<<"VEHICLE INFORMATION"<<endl;
            newfile<<"VEHICLE NUMBER: "<<v2[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v2[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v2[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v2[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v2[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v2[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v2[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else if (sub==3)
        {
            for (int i = 0; i < vehi3; i++)
            {
                 v3[i].display();
            newfile<<"DATE|"<<v3[i].date <<" "<<endl;
            newfile<<"VEHICLE INFORMATION"<<endl;
            newfile<<"VEHICLE NUMBER: "<<v3[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v3[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v3[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v3[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v3[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v3[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v3[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else if (sub==4)
        {
            for (int i = 0; i < vehi4; i++)
            {
                 v4[i].display();
            newfile<<" DATE|"<<v4[i].date <<" "<<endl;
            newfile<<"VEHICLE INFORMATION "<<endl;
            newfile<<"VEHICLE NUMBER: "<<v4[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v4[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v4[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v4[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v4[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v4[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v4[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else if (sub==5)
        {
            for (int i = 0; i < vehi5; i++)
            {
                 v5[i].display();
            newfile<<" DATE|"<<v5[i].date <<" "<<endl;
            newfile<<" VEHICLE INFORMATION "<<endl;
            newfile<<"VEHICLE NUMBER: "<<v5[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v5[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v5[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v5[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v5[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v5[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v5[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else if (sub==6)
        {
            for (int i = 0; i < vehi6; i++)
            {
                 v6[i].display();
            newfile<<"DATE|"<<v6[i].date <<" "<<endl;
            newfile<<"VEHICLE INFORMATION "<<endl;
            newfile<<"VEHICLE NUMBER: "<<v6[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v6[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v6[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v6[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v6[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v6[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v6[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else if (sub==7)
        {
            for (int i = 0; i < vehi7; i++)
            {
                 v7[i].display();
            newfile<<"DATE|"<<v7[i].date <<" "<<endl;
            newfile<<"VEHICLE INFORMATION "<<endl;
            newfile<<"VEHICLE NUMBER: "<<v7[i].numberplate <<" "<<endl;
            newfile<<"VEHICLE OWNER: "<<v7[i].ownername <<" "<<endl;
            newfile<<"VEHICLE NAME: "<<v7[i].vehiclename <<" "<<endl;
            newfile<<"VEHICLE MOVEMENT: "<<v7[i].vehiclemovement <<" "<<endl;
            newfile<<"VEHICLE TYPE: "<<v7[i].type <<" "<<endl;
            newfile<<"VEHICLE TRIP (1) one-way (2) two-way : "<<v7[i].trip <<" "<<endl;
            newfile<<"TAX PAID : "<<v7[i].tax <<" "<<endl<<endl;
            }
            break;
        }
        else
        {
            cout<<"The total collection for the week is "<<day1+day2+day3+day4+day5+day6+day7<<endl;
            cout<<"The Total no of vehicles that crossed the toll :  "<<v7[vehi7].vehiclecounttwo+v7[vehi7].vehiclecountfour<<endl;
            cout<<"No of two wheelers : "<<v7[vehi7].vehiclecounttwo<<endl<<"No of four wheelers : "<<v7[vehi7].vehiclecountfour<<endl;
            break;
        }
    case 9:
            getchar();
            cout<<"Enter the vehicle number to find the vehicle information:"<<endl;
            getline(cin,number);
            for (int i = 0; i < vehi1; i++)
            {
                if (v1[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v1[i].display();
                    break;
                }
                
            }
            for (int i = 0; i < vehi2; i++)
            {
                if (v2[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v2[i].display();
                    break;
                }
                
            }
            for (int i = 0; i < vehi3; i++)
            {
                if (v3[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v3[i].display();
                    break;
                }
                
            }
            for (int i = 0; i < vehi4; i++)
            {
                if (v4[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v4[i].display();
                    break;
                }
                
            }
            for (int i = 0; i < vehi5; i++)
            {
                if (v5[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v5[i].display();
                    break;
                }
                
            }
            for (int i = 0; i < vehi6; i++)
            {
                if (v6[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v6[i].display();
                    break;
                }
                
            }
            for (int i = 0; i < vehi7; i++)
            {
                if (v7[i].numberplate==number)
                {
                    cout<<"VEHICLE FOUND!!!"<<endl;
                    v7[i].display();
                    break;
                }
                
            }
            break;
    default:
        break;
    }
    cout<<"All operations completed??(YES)/(NO) "<<endl;
    cout<<"1 for yes/0 for no"<<endl;
    cin>>mapping;
    if (mapping==0)
    {
        goto operations;
    }
    
    newfile.close();
    return 0;
}
