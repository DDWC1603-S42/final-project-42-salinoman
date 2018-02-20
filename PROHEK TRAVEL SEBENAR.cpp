#include <utility>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


/* Prototypes: Number of days, */
int numDays(int);
string name;
double getDepartureTime(double);
double getArrivalTime(double);
double getRoundTripFares(double);
double getCarRentalCost(double);
double getParkingFees(double);
double getTaxiFees(double);
double getRegistrationFees(double);
double getHotelExpenses(double);

double getAllowableMeals(double, double, double &, double &, double &,
                         double &, double &, double &);

void calcTotalCost(int, double, double, double, double, double, double,
                        double, double, double, double, double,
                        double, double, double, double parking = 6.0, double taxi = 13.0, 
                        double hotel = 300.00, double breakfast = 10.0, 
                        double lunch = 18.0, double dinner = 25.0);

int main()
{
   /* Variables: Days on trip */
   static int daysOnTrip = 0;

   
   static double timeOfDeparture = 0.0,
                 timeOfArrival = 0.0, 
                 roundTripFares = 0.0,
                 carRentalCost = 0.0,
                 parkingFees = 0.0,
                 taxiFees = 0.0,
                 registrationFees = 0.0,
                 hotelExpenses = 0.0,
                 breakfastFirstDay = 0.0,
                 lunchFirstDay = 0.0,
                 dinnerFirstDay = 0.0,
                 breakfastLastDay = 0.0,
                 lunchLastDay = 0.0,
                 dinnerLastDay = 0.0,
                 allowableMeals = 0.0;

   /* Display: Table header */
    cout << "CREATE BY :" << endl;
    cout << "MUHD EIMAN HAKIMY BIN SHAHRUM" << endl;
    cout << "MUHAMMAD HAZIQ BIN AZLI" << endl;
    cout << "AHMAD SALMAN NAIM BIN MOHD ATAN " << endl;
    
    cout <<"****************************************************" << endl;
    cout <<"*       ____________________________________       *" << endl;
    cout <<"*                                                  *" << endl;
    cout <<"*           T R A V E L  E X P A N S E S           *" << endl;
    cout <<"*                                                  *" << endl;
    cout <<"*                   P R O G R A M                  *" << endl;
    cout <<"*       ____________________________________       *" << endl;
    cout <<"*                                                  *" << endl;
    cout <<"****************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << "Travel Expanses report" << endl;
    cout << "______________________" << endl;
    cout << endl;
    cout << endl;
    cout <<"**********"<<endl;
    cout <<"*  NAME  *"<<endl;
    cout <<"**********"<<endl;
    string name;
    cout <<"(FIRST NAME ONLY)" << endl;
    cout <<"Enter Your Name : ";
    cin>>name;
    cout << endl;

   /*Call*/
   cout <<"**********"<<endl;
   cout <<"* TRAVEL *"<<endl;
   cout <<"**********"<<endl;
   daysOnTrip = numDays(daysOnTrip);
   timeOfDeparture = getDepartureTime(timeOfDeparture);
   timeOfArrival = getArrivalTime(timeOfArrival);
   cout << endl;
   
   cout <<"*********"<<endl;
   cout <<"*  FEE  *"<<endl;
   cout <<"*********"<<endl;
   roundTripFares = getRoundTripFares(roundTripFares);
   carRentalCost = getCarRentalCost(carRentalCost);
   parkingFees = getParkingFees(parkingFees);
   taxiFees = getTaxiFees(taxiFees);
   registrationFees = getRegistrationFees(registrationFees);
   hotelExpenses = getHotelExpenses(hotelExpenses);
   cout << endl;
   
   cout <<"**********"<<endl;
   cout <<"*  MEAL  *"<<endl;
   cout <<"**********"<<endl;
   allowableMeals = getAllowableMeals(timeOfDeparture, timeOfArrival,
                                      breakfastFirstDay, lunchFirstDay,
                                      dinnerFirstDay, breakfastLastDay,
                                      lunchLastDay, dinnerLastDay);
    cout << endl;

   calcTotalCost(daysOnTrip , timeOfDeparture , timeOfArrival , roundTripFares ,
                 carRentalCost, parkingFees , taxiFees, registrationFees ,
                 hotelExpenses , breakfastFirstDay, lunchFirstDay , dinnerFirstDay ,
                 breakfastLastDay , lunchLastDay , dinnerLastDay ) ;

  
   return 0;
}
/*go and return */
int numDays(int daysOnTrip)
{
   
   cout << "How many days did you spend on this trip? : ";
   cin >> daysOnTrip;
   cout << endl;

   while (daysOnTrip < 1)
   {
      cout << "\nInvalid input. The number of days spent on a trip\n"
           << "has to be greater than or equal to 1.\n"
           << "How many days have you spent on this trip? : ";
      cin >> daysOnTrip;
      cout << endl;
   }

   return daysOnTrip; 
}

double getDepartureTime(double departureTime)
{
   cout << "24 HOURS FORMAT" ;
   cout << endl;
   cout << "\nAt what time was your departure on the first day? : ";
   cin >> departureTime;
   cout << endl;
   
   while (departureTime < 0 || departureTime > 24.00)
   {
      cout << "\nInvalid input. The departure time can not be\n"
           << "negative. Example Input: 00.00 - 24.00\n"
           << "At what time was your departure on the first day? : ";
      cin >> departureTime;
      cout << endl;
   }
   
   return departureTime;
}



double getArrivalTime(double arrivalTime)
{
   cout << "24 HOURS FORMAT" ;
   cout << endl;
   cout << "\nWhat Time Did You Arrive Back Home? : ";
   cin >> arrivalTime;
   cout << endl;

   while (arrivalTime < 0 || arrivalTime > 24.00)
   {
      cout << "\nInvalid input. The arrival time can not be\n"
           << "negative or greater than 24.00.\n"
           << "At What Time Did You Arrive Back Home? ";
      cin >> arrivalTime;
      cout << endl;
   }

    
   return arrivalTime;
}



double getRoundTripFares(double roundTripFares)
{
  
   cout << "\nHow Much Round Trip AirFares ? : RM ";
   cin >> roundTripFares;
   cout << endl;

   while (roundTripFares < 0)
   {
      cout << "\nInvalid input. The amount of airfares can not\n"
           << "be negative.\n"
           << "How Much Round Trip AirFares ? : RM";
      cin >> roundTripFares;
      cout << endl;
   }

   return roundTripFares;
}

double getCarRentalCost(double carRentalCost)
{
   
   cout << "\nHow Much Car Rental Cost ? : RM ";
   cin >> carRentalCost;
   cout << endl;

   while (carRentalCost < 0)
   {
      cout << "\nInvalid input. The amount of car rental cost can not\n"
           << "be negative.\n"
           << "\nHow Much Car Rental Cost ? : RM  ";
      cin >> carRentalCost;
      cout << endl;
   }
   return carRentalCost;
}

double getParkingFees (double parkingFees)
{
   cout << "\nHow Much You Need To Pay Parking Fees ? : RM ";
   cin >> parkingFees;
   cout << endl;

   while (parkingFees < 0)
   {
      cout << "\nInvalid input. The parking fees can not be negative.\n\n"
           << "How Much You Need To Pay Parking Fees ? : RM  ";
      cin >> parkingFees;
      cout << endl;
   }
   return parkingFees; 
}

double getTaxiFees (double taxiFees)
{
   cout << "\nHow Much You Need To Pay taxi ? : RM ";
   cin >> taxiFees;
   cout << endl;

   /* Validate: Input */
   while (taxiFees < 0)
   {
      cout << "\nInvalid input. The taxi fees can not be negative.\n\n"
           << "How Much You Need To Pay taxi ? : RM ";
      cin >> taxiFees;
      cout << endl;
   }
   return taxiFees; 
}

double getRegistrationFees (double registrationFees)
{
   
   cout << "\nHow Much A Conference Registration Fees ? : RM ";
   cin >> registrationFees;
   cout << endl;
   
   while (registrationFees < 0)
   {
      cout << "\nInvalid input. The registration fee can not be negative.\n"
           << "How Much A Conference Registration Fees ? : RM";
      cin >> registrationFees;
      cout << endl;
   }

   return registrationFees; 
}

double getHotelExpenses(double hotelExpenses)
{
   
   cout << "\nHow Much The Total Of Hotel Cost ? : RM ";
   cin >> hotelExpenses;
   cout << endl;

   while (hotelExpenses < 0)
   {
      cout << "\nInvalid input. The hotel expenses can not be negative.\n"
           << "How Much The Total Of Hotel Cost ? : RM";
      cin >> hotelExpenses;
      cout << endl;
   }

   return hotelExpenses;
}

double getAllowableMeals(double timeOfDeparture, double timeOfArrival, 
                         double &breakfastFirstDay, double &lunchFirstDay,
                         double &dinnerFirstDay, double &breakfastLastDay,
                         double &lunchLastDay, double &dinnerLastDay)
{
   /*Amount for meal */
   double amountAllowableMeals = 0.0;

   /* Time */
   if (timeOfDeparture > 07.00)
   {
      cout << "\nHow Much You Pay For Breakfast In First Day ? : RM ";
      cin >> breakfastFirstDay;
   }

   while (breakfastFirstDay < 0.0)
   {
      cout << "\nInvalid input. The cost for breakfast can not be negative.\n"
           << "How Much You Pay For Breakfast In First Day ? : RM ";
      cin >> breakfastFirstDay;
      cout << endl;
   }

   if (timeOfDeparture < 12.00)
   {
      cout << "\nHow Much You Pay For Lunch In First Day ? : RM ";
      cin >> lunchFirstDay;
      cout << endl;
   }

   while (lunchFirstDay < 0.0)
   {
      cout << "\nInvalid input. The cost for lunch can not be negative.\n"
           << "How Much You Pay For Lunch In First Day ? : RM";
      cin >> lunchFirstDay;
      cout << endl;
   }

   if (timeOfDeparture < 18.00)
   {
      cout << "\nHow Much You Pay For Dinner In First Day ? : RM ";
      cin >> dinnerFirstDay;
      cout << endl;
   }

   while (dinnerFirstDay < 0.0)
   {
      cout << "\nInvalid input. The cost for dinner can not be negative.\n"
           << "How Much You Pay For Dinner In First Day ? : RM ";
      cin >> dinnerFirstDay;
      cout << endl;
   }
   
   /*last day */
   if (timeOfArrival < 08.00)
   {
      cout << "\nHow Much You Pay For Breakfast In Last Day ? : RM ";
      cin >> breakfastLastDay;
      cout << endl;
   }

   while (breakfastLastDay < 0.0)
   {
      cout << "\nInvalid input. The cost for breakfast can not be negative.\n"
           << "How Much You Pay For Breakfast In Last Day ? : RM ";
      cin >> breakfastLastDay;
      cout << endl;
   }

   if (timeOfArrival > 13.00)
   {
      cout << "\nHow Much You Pay For Lunch In Last Day ? : RM ";
      cin >> lunchLastDay;
      cout << endl;
   }

   /* Validate: Input */
   while (lunchLastDay < 0.0)
   {
      cout << "\nInvalid input. The cost for lunch can not be negative.\n"
           << "How Much You Pay For Lunch In Last Day ? : RM ";
      cin >> lunchLastDay;
      cout << endl;
   }

   if (timeOfArrival > 19.00)
   {
      cout << "\nHow Much You Pay For Dinner In Last Day ? : RM ";
      cin >> dinnerLastDay;
      cout << endl;
   }

   /* Validate: Input */
   while (dinnerLastDay < 0.0)
   {
      cout << "\nInvalid input. The cost for breakfast can not be negative.\n"
         << "How Much You Pay For Dinner In Last Day ? : RM ";
      cin >> dinnerLastDay;
      cout << endl;
   }

   return amountAllowableMeals;
}

/* for Total Cost */
void calcTotalCost(int numDays, double timeDeparture, double timeArrival,
                   double costAirFare, double costCarRental ,
                   double costParking, double costTaxi, double costRegistration,
                   double costHotel, double costBreakfastFirst, double costLunchFirst,
                   double costDinnerFirst, double costBreakfastLast, double costLunchLast,
                   double costDinnerLast , double costTaxiCovered,
                   double costParkingCovered, double costHotelCovered,
                   double costBreakfastCovered, double costLunchCovered,
                   double costDinnerCovered)
{
   /* Variables: Cost not covered */
   
   double privateCostCar = 0.0,
          privateCostHotel = 0.0,
          privateCostTaxi = 0.0,
          privateCostBreakfast = 0.0,
          privateCostLunch = 0.0,
          privateCostDinner = 0.0,
          privateCostTotal = 0.0,
          privateCostParking = 0.0,
          costSubtotal = 0.0,
          costTotal = 0.0;

   /* Set up: Numeric output formatting */
   cout << fixed << showpoint << setprecision(2);
    
	cout <<"***********"<<endl;
    cout <<"*  TOTAL  *"<<endl;
    cout <<"***********"<<endl; 
    cout << endl;
    cout << endl;
    cout << "Travel Expenses For :" << name
      << "Number of Days:\t\t"
      << setw(26) << right << numDays
      << setw(15) << right
      << "\nTime of Departure:\t\t"
      << setw(21) << right << timeDeparture
      << setw(15) << right
      << "\nTime of Arrival:\t\t"
      << setw(21) << right << timeArrival
      << setw(15) << right
      << "\n\nCost of Air Fare:\t\t"
      << setw(13) << right << "RM "
      << setw(8) << right << costAirFare
      << "\nCost of Car Rental:\t\t"
      << setw(13) << right << "RM "
      << setw(8) << right << costCarRental
      << "\nCost of Taxi Fare:\t\t"
      << setw(13) << right << "RM "
      << setw(8) << right << costTaxi
      << "\nCost of Parking Fare:\t\t"
      << setw(13) << right << "RM"
      << setw(8) << right << costParking
      << "\nCost of Registration:\t\t"
      << setw(13) << right << "RM"
      << setw(8) << right << costRegistration
      << "\nCost of Overnight Hotel stay:\t\t"
      << setw(5) << right << "RM "
      << setw(8) << right << costHotel
      << "\nCost of Breakfast on First Day:\t\t"
      << setw(5) << right << "RM"
      << setw(8) << right << costBreakfastFirst
      << "\nCost of Lunch on First Day:\t\t"
      << setw(5) << right << "RM "
      << setw(8) << right << costLunchFirst
      << "\nCost of Dinner on First Day:\t\t"
      << setw(5) << right << "RM "
      << setw(8) << right << costDinnerFirst
      << "\nCost of Breakfast on Last Day:\t\t"
      << setw(5) << right << "RM "
      << setw(8) << right << costBreakfastLast
      << "\nCost of Lunch on Last Day:\t\t"
      << setw(5) << right << "RM "
      << setw(8) << right << costLunchLast
      << "\nCost of Dinner on Last Day:\t\t"
      << setw(5) << right << "RM "
      << setw(8) << right << costDinnerLast;

   /* Calculate: The sub-total cost of the trip */
   costSubtotal = costAirFare + costCarRental + costTaxi + costRegistration + costParking +
                  costHotel + costBreakfastFirst + costLunchFirst +
                  costDinnerFirst + costDinnerLast + costBreakfastLast +
                  costLunchLast + costDinnerLast;

   /* Display: Sub-total */
   cout << "\n\nSub-Total: "
        << setw(34) << right << "RM "
        << setw(8) << right << costSubtotal;
  

   /* Determine: How much the employee has to pay from his own pocket */
   if (costHotel > costHotelCovered)
   {
      privateCostHotel = costHotel - costHotelCovered * numDays;
   }

   if (costTaxi > costTaxiCovered)
   {
      privateCostTaxi = costTaxi - costTaxiCovered * numDays;
   }
   
   if (costParking > costParkingCovered)
   {
   	privateCostParking = costParking - costParkingCovered * numDays;
   }

   if ((costBreakfastFirst + costBreakfastLast) > costBreakfastCovered)
   {
      privateCostBreakfast = (costBreakfastFirst + costBreakfastLast) - costBreakfastCovered;
   }

   if ((costLunchFirst + costLunchLast) > costLunchCovered)
   {
      privateCostLunch = (costLunchFirst + costLunchLast) - costLunchCovered;
   }

   if ((costDinnerFirst + costDinnerLast) > costDinnerCovered)
   {
      privateCostDinner = (costDinnerFirst + costDinnerLast) - costDinnerCovered;
   }

   /* Calculate: the total private cost of the trip */
      privateCostTotal = privateCostCar + privateCostHotel + privateCostTaxi + privateCostParking +
                         privateCostBreakfast + privateCostLunch + privateCostDinner;

      /* Display: The cost not covered by the company */
      cout << "\n\nThe following expenses are not covered: \n\n"

           << "\nParking :\t\t"
           << setw(21) << right << "RM"
           << setw(8) << right << privateCostParking
           << "\nStay in Hotel:\t\t"
           << setw(21) << right << "RM "
           << setw(8) << right << privateCostHotel
           << "\nTaxi fees:\t\t"
           << setw(21) << right << "RM "
           << setw(8) << right << privateCostTaxi
           << "\nBreakfast:\t\t"
           << setw(21) << right << "RM "
           << setw(8) << right << privateCostBreakfast
           << "\nLunch:\t\t"
           << setw(29) << right << "RM "
           << setw(8) << right << privateCostLunch
           << "\nDinner:\t\t"
           << setw(29) << right << "RM "
           << setw(8) << right << privateCostDinner;

      /* Calculate: The total cost of the trip */
      costTotal = costSubtotal + privateCostTotal;
      
      cout << "\n\nThe total cost of company not covered is: RM" ;
      cout << privateCostTotal ;
      cout << endl;
             

      /* Display: The total cost of the trip */
      cout << "\n\nThe total cost of this trip is:\t\t"
           << setw(5) << right << "RM "
           << setw(8) << right << costTotal;        
}
