#include <iostream>
#include <iomanip>

using namespace std;

int getDays(int);
int getTime (double&, double&);
double getAirfareAmount(double);
double getCarRentalAmount (double);
int getTaxiAmount(double&,double&);
double getRegistrationFee(double);
int getHotelAmount(double&,double&);
double getMealAmount (double);

int main ()
{
	int days;
     double arrivalTime;
    double departureTime;
    double airfareFee;
    double carRentalFee;
    double vechileExpense;
    double taxiFee;
    double registrationFee;
    double spentTotal;
    double allowedTotal;
    double companyTotal;
    double mealTotal;
    double total;
    double allowedTaxiFee;
    double hotelFee;
    double nightlyRate;
    double allowedHotelFee;
    double hotelFeeTotal;
    double allowedBreaksfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double breaksfastFee;
    double lunchFee;
    double dinnerFee;
    double allowedMealTotal;
    string employeeName;
    int d;
     double taxiSpent;
    double spentMealTotal;
    
    //Program Start
    cout << "CREATE BY :" << endl;
    cout << "MUHD EIMAN HAKIMY BIN SHAHRUM" << endl;
    
    cout <<"****************************************************" << endl;
    cout <<"*       ____________________________________       *" << endl;
    cout <<"*                                                  *" << endl;
    cout <<"*           T R A V E L  E X P A N S E S           *" << endl;
    cout <<"*                                                  *" << endl;
    cout <<"*                   P R O G R A M                  *" << endl;
    cout <<"*       ____________________________________       *" << endl;
    cout <<"*                                                  *" << endl;
    cout <<"****************************************************" << endl;
    
    cout << "Travel Expanses report" << endl;
    cout << "______________________" << endl;
    cout << endl;
    cout << endl;
    cout << "(First Name)" << endl;
    cout << "Enter Your Name :  " ;
    cin >>employeeName;
    cout<<endl;
    
	days = getDays(days);
    d = static_cast<int>(days);
    cout<<endl;
    
    getTime (departureTime,arrivalTime);
    cout<<endl;
    
    cout <<"**********"<<endl;
    cout <<"* TRAVEL *"<<endl;
    cout <<"**********"<<endl;
    
	airfareFee = getAirfareAmount(airfareFee);
    carRentalFee = getCarRentalAmount(carRentalFee);
    allowedTaxiFee = 10 * days;
    getTaxiAmount (taxiSpent,allowedTaxiFee);
    cout <<endl;
    
    cout <<"*********"<<endl;
    cout <<"*  FEE  *"<<endl;
    cout <<"*********"<<endl;
    
    registrationFee= getRegistrationFee(registrationFee);
    hotelFeeTotal = days * nightlyRate;
    allowedHotelFee = 90 * days;
    getHotelAmount (hotelFeeTotal,allowedHotelFee);
    cout<< endl;
    
    cout <<"**********"<<endl;
    cout <<"*  MEAL  *"<<endl;
    cout <<"**********"<<endl;
    
    
    mealTotal= breaksfastFee +lunchFee +dinnerFee; 
    getMealAmount (spentMealTotal);
    cout<<endl;
    
     //calc total
    spentTotal=airfareFee+carRentalFee+vechileExpense+taxiFee+registrationFee+hotelFee+mealTotal;
    // DISPLAY TOTAL OF TRAVEL EXPANSES  
    
    cout << "TRAVEL EXPANSES FOR : " <<employeeName<<endl<<endl;
    cout << " TOTAL DAYS OF TRIP : " <<days<<endl<<endl;
    cout << fixed << setprecision(2);
    cout << "Departure time: "<< departureTime<<setw(20)<<"Arrival time: " <<arrivalTime<<endl;
    cout <<setw(8)<<setprecision(2)<<showpoint<<fixed;
    cout << endl;
    cout <<setw(25)<<"Spent"<<endl;
    cout << setw(28)<<"------"<<endl;
    cout <<"Airfare"<<setw(20)<<airfareFee<<endl;
    cout <<"Car Rental"<<setw(17)<<carRentalFee<<endl;
    cout <<"Taxi"<<setw(23)<<taxiSpent<<endl;
    cout <<"Registration"<<setw(15)<<registrationFee<<endl;
    cout <<"Hotel"<<setw(22)<<hotelFeeTotal<<endl;
    cout <<"Meal"<<setw(23)<<spentMealTotal<<endl;
    cout << setw(28)<<"--------"<<endl;
    cout <<"TOTALS"<<setw(21)<<spentTotal<<endl;
    cout <<endl<<endl;
    
    system ("pause");
    return 0;
}

// function (int days )
int getDays(int days)
{
    cout << "How many days were spent on the trip? : " ;
    cin >> days;
    cout << endl;
              
    while (days < 1)
    {
    cout << "Please enter a number more than 1 : " ;
    cin >> days;
    cout << endl;
    }
              
    return days;
}

//function for departure time
int getTime (double& departureTime, double& arrivalTime)
{
	cout << "(24 hour format )" << endl;
    cout << "What time did you depart for the trip? (00.00 format) = " ;
    cin >> departureTime;
    cout <<endl;
           
    while ( departureTime <0 || departureTime > 23.59)
    {
    cout << "Error: Please enter a number between 00.00 and 23.59 = ";
    cin >> departureTime;
    cout << endl;
    }
          
    cout << "What time did you arrive for the trip? (00.00 format) = " ;
    cin >> arrivalTime;
    cout << endl;
           
    while ( arrivalTime <0 || arrivalTime > 23.59)
    {
    cout << "Error: Please enter a number between 00.00 and 23.59 = ";
    cin >> arrivalTime;
    cout << endl;
    }
    
}

// function for travel expanses fee
double getAirfareAmount (double airfareFee)
{        
    cout << "What was the total cost of the air fare? = RM";
    cin >> airfareFee;
    cout << endl;
         
	while (airfareFee < 0)
    {
       cout << "Error! Please Enter More Than 0 = RM";
       cin >> airfareFee;
       cout << endl;
    }
         
    return airfareFee;
}

// function for car rental
double getCarRentalAmount (double carRentalFee)
{
    cout << "What was the total cost of any car rentals? = RM";
    cin >> carRentalFee;
    cout << endl;
    
    while (carRentalFee < 0)
    {
    cout << "Error! Try Again! = RM";
    cin >> carRentalFee;
    cout << endl;
    }
       
    return carRentalFee;
}

//function taxi fare
int getTaxiAmount (double &taxiSpent, double &allowedTaxiFee)
{
    double taxiFee;
    int days;
    cout << "How much was spent on taxi fare? = RM";
    cin >> taxiFee; 
    cout << endl;
    
    while (taxiFee < 0)
    {
        cout << "Try again! = RM";
        cin >> taxiFee;
        cout << endl;
    }
       
    taxiSpent = days * taxiFee;
    allowedTaxiFee = 6 * days;
}

// function conference
double getRegistrationFee (double registrationFee)
{
    cout << "How much was spent on conference fees? = RM";
    cin >> registrationFee;
    cout << endl;
       
    while (registrationFee < 0)
    {
        cout << "Try again! = RM" ;
        cin >> registrationFee;
        cout << endl;
    }
       
    return registrationFee;
}       

// function hotel fee
int getHotelAmount (double &allowedHotelFee, double &hotelFeeTotal)
{
    int days;
    double hotelFee;
    cout << "How much was spent on hotel rooms? = RM";
    cin >> hotelFee; 
    cout << endl;
       
    while (hotelFee < 0)
    {
        cout << "Try again! = RM";
        cin >> hotelFee;
        cout << endl;
    }
    
       
	hotelFeeTotal= hotelFee * days;
} 

// function daily eat

double getMealAmount(double spentMealTotal)
{
    int days;
    int numDays;
    double breakfast;
    double lunch;
    double dinner;
    double firstDay;
    double lastDay;
    double departureTime;
    double arrivalTime;
    double breakfastFee;
    double lunchFee;
    double dinnerFee;
    
    for(int days = 1; days <= numDays; days++)
        {         
            cout << "Day:" << days <<  endl;
            
    if (days < 2 && departureTime > 00.00 && departureTime <= 7.00)
        {
            cout << "Enter the cost of breakfast: RM ";
            cin >> breakfastFee;
            cout << endl;
            cout << "Enter the cost of lunch: RM ";
            cin >> lunchFee;
            cout << endl;
            cout << "Enter the cost of dinner: RM ";
            cin >> dinnerFee;
            cout << endl;
        }
            
    if (days < 2 && departureTime > 7.01 && departureTime <=12.00)
        {
            cout << "Enter the cost of lunch: RM ";
            cin >> lunchFee;
            cout << endl;
            cout << "Enter the cost of dinner: RM ";
            cin >> dinnerFee;
            cout << endl;
        }
        
    if (days < 2 && departureTime > 12.01 && departureTime <=18.00)
        {
            cout << "Enter the cost of dinner: RM ";
            cin >> dinnerFee;
            cout << endl;
        }
    if (days > 1 && days < numDays )
       {    
            cout << "Enter the cost of breakfast: RM ";
            cin >> breakfastFee;
            cout << endl;
            cout << "Enter the cost of lunch: RM ";
            cin >> lunchFee;
            cout << endl;
            cout << "Enter the cost of dinner: RM ";
            cin >> dinnerFee;
            cout << endl;
       }
    
    if (days == numDays && arrivalTime > 8.00 && arrivalTime <= 13.00) 
        {
            cout << "Enter the cost of breakfast: ";
            cin >> breakfastFee;
            
        }
        
    if (days == numDays && arrivalTime > 13.01 && arrivalTime <= 19.00)
        {
            cout << "Enter the cost of breakfast:RM ";
            cin >> breakfastFee;
            cout << endl;
            cout << "Enter the cost of lunch: RM ";
            cin >> lunchFee;  
            cout << endl;
        }
        
    if (days == numDays && arrivalTime > 19.01)
        {
            cout << "Enter the cost of breakfast: RM ";
            cin >> breakfastFee;
            cout << endl;
            cout << "Enter the cost of lunch: RM ";
            cin >> lunchFee;
            cout << endl;
            cout << "Enter the cost of dinner: RM ";
            cin >> dinnerFee;
            cout << endl;
        }
        cout <<endl;      
}
  
    spentMealTotal= breakfastFee +lunchFee +dinnerFee;  
}
