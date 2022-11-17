#include <iostream>
#include <cstdlib>

using namespace std;

class Animal {
public:

    string AnimalName;
    string AnimalType;
    int AnimalPrice;
    int Popularity;
};

class Food {
public:
    string FoodType;
    int FoodPrice;
    int FoodQty;

};

class Staff {
public:

    string StaffJob;
    int StaffPrice;
    int StaffNr;

};

class Tourists {
public:

    string TouristsType;
    int TicketPrice;

};

class WeekDays {
public:
    string DayName;
    int ChildQty;
    int AdultQty;
    int ElderQty;

    void Calamity() {

        ChildQty = ChildQty ;
        AdultQty = AdultQty ;
        ElderQty = ElderQty ;

        cout << "\n" << "-----Everything was all right this day";
    }

};

class AnimalManage {
public:

    int AnimalNr;
    int MaintainPrice;

};

class Economy {
public:
    int WeekNr;
    int MGain;
    int DefaultMaintain;
    int DefaultGain;
    int MLost;
    int NetWorth;

};

class Rain : public WeekDays {
public:

    int TotalLost;

    void Calamity() {
        cout << "\n" << "Today rained and no one came";
    }
};

class FreeDay : public WeekDays {
public:

    int TotalGain;

    void Calamity() {

        cout << "\n" << "Today was a free day";
    }

};


int main() {

    //Economy object ----------------------------------

    Economy MoneyObj;
    MoneyObj.NetWorth = 100;
    MoneyObj.MGain = 0;
    MoneyObj.MLost = 0;
    MoneyObj.DefaultMaintain = 0;
    MoneyObj.DefaultGain = 0;


    //Tourists objects ------------------------------------

    Tourists KidObj;
    KidObj.TouristsType = "Kids";
    KidObj.TicketPrice = 2;

    Tourists AdultObj;
    AdultObj.TouristsType = "Adult";
    AdultObj.TicketPrice = 5;

    Tourists ElderObj;
    ElderObj.TouristsType = "Elder";
    ElderObj.TicketPrice = 3;


    //Food Objects --------------------------------------

    Food MeatObj;
    MeatObj.FoodType = "Meat";
    MeatObj.FoodQty = 0;
    MeatObj.FoodPrice = 5;

    Food WeedObj;
    WeedObj.FoodType = "Weed";
    WeedObj.FoodQty = 0;
    WeedObj.FoodPrice = 3;


    //Staff Objects-------------------------------------

    Staff LionJanitor;
    LionJanitor.StaffJob = "Lion Janitor";
    LionJanitor.StaffPrice = 250;
    LionJanitor.StaffNr = 0;

    Staff EagleJanitor;
    EagleJanitor.StaffJob = "Eagle Janitor";
    EagleJanitor.StaffPrice = 100;
    EagleJanitor.StaffNr = 0;

    Staff SharkJanitor;
    SharkJanitor.StaffJob = "Shark Janitor";
    SharkJanitor.StaffPrice = 200;
    SharkJanitor.StaffNr = 0;

    Staff DeerJanitor;
    DeerJanitor.StaffJob = "Deer Janitor";
    DeerJanitor.StaffPrice = 75;
    DeerJanitor.StaffNr = 0;

    Staff FlamingoJanitor;
    FlamingoJanitor.StaffJob = "Flamingo Janitor";
    FlamingoJanitor.StaffPrice = 125;
    FlamingoJanitor.StaffNr = 0;

    Staff OstrichJanitor;
    OstrichJanitor.StaffJob = "Ostrich Janitor";
    OstrichJanitor.StaffPrice = 120;
    OstrichJanitor.StaffNr = 0;

    Staff BearJanitor;
    BearJanitor.StaffJob = "Bear Janitor";
    BearJanitor.StaffPrice = 220;
    BearJanitor.StaffNr = 0;

    Staff MonkeyJanitor;
    MonkeyJanitor.StaffJob = "Monkey Janitor";
    MonkeyJanitor.StaffPrice = 100;
    MonkeyJanitor.StaffNr = 0;

    Staff RacoonJanitor;
    RacoonJanitor.StaffJob = "Racoon Janitor";
    RacoonJanitor.StaffPrice = 50;
    RacoonJanitor.StaffNr = 0;


    //Week Days Objects---------------------------------

    WeekDays MondayObj;
    MondayObj.DayName = "Monday";
    MondayObj.ChildQty = 15;
    MondayObj.AdultQty = 5;
    MondayObj.ElderQty = 2;

    WeekDays TuesdayObj;
    TuesdayObj.DayName = "Tuesday";
    TuesdayObj.ChildQty = 17;
    TuesdayObj.AdultQty = 3;
    TuesdayObj.ElderQty = 6;

    WeekDays WednesdayObj;
    WednesdayObj.DayName = "Wednesday";
    WednesdayObj.ChildQty = 13;
    WednesdayObj.AdultQty = 5;
    WednesdayObj.ElderQty = 2;

    WeekDays ThursdayObj;
    ThursdayObj.DayName = "Thursday";
    ThursdayObj.ChildQty = 21;
    ThursdayObj.AdultQty = 6;
    ThursdayObj.ElderQty = 8;

    WeekDays FridayObj;
    FridayObj.DayName = "Friday";
    FridayObj.ChildQty = 34;
    FridayObj.AdultQty = 12;
    FridayObj.ElderQty = 15;

    WeekDays SaturdayObj;
    SaturdayObj.DayName = "Saturday";
    SaturdayObj.ChildQty = 104;
    SaturdayObj.AdultQty = 67;
    SaturdayObj.ElderQty = 45;

    WeekDays SundayObj;
    SundayObj.DayName = "Sunday";
    SundayObj.ChildQty = 140;
    SundayObj.AdultQty = 97;
    SundayObj.ElderQty = 51;

    //Calamity days---------------------------------------------------------------------

    Rain MondayR;
    MondayR.TotalLost = (MondayObj.ChildQty * KidObj.TicketPrice) + (MondayObj.AdultQty * AdultObj.TicketPrice) + (MondayObj.ElderQty * ElderObj.TicketPrice);

    Rain TuesdayR;
    TuesdayR.TotalLost = (ThursdayObj.ChildQty * KidObj.TicketPrice) + (TuesdayObj.AdultQty * AdultObj.TicketPrice) + (TuesdayObj.ElderQty * ElderObj.TicketPrice);

    Rain WednesdayR;
    WednesdayR.TotalLost = (WednesdayObj.ChildQty * KidObj.TicketPrice) + (WednesdayObj.AdultQty * AdultObj.TicketPrice) + (WednesdayObj.ElderQty * ElderObj.TicketPrice);

    Rain ThursdayR;
    ThursdayR.TotalLost = (ThursdayObj.ChildQty * KidObj.TicketPrice) + (ThursdayObj.AdultQty * AdultObj.TicketPrice) + (ThursdayObj.ElderQty * ElderObj.TicketPrice);

    Rain FridayR;
    FridayR.TotalLost = (FridayObj.ChildQty * KidObj.TicketPrice) + (FridayObj.AdultQty * AdultObj.TicketPrice) + (FridayObj.ElderQty * ElderObj.TicketPrice);

    Rain SaturdayR;
    SaturdayR.TotalLost = (SaturdayObj.ChildQty * KidObj.TicketPrice) + (SaturdayObj.AdultQty * AdultObj.TicketPrice) + (SaturdayObj.ElderQty * ElderObj.TicketPrice);

    Rain SundayR;
    SundayR.TotalLost = (SundayObj.ChildQty * KidObj.TicketPrice) + (SundayObj.AdultQty * AdultObj.TicketPrice) + (SundayObj.ElderQty * ElderObj.TicketPrice);


    //Animals and AnimalManage Objects---------------------------

    Animal LionObj;
    LionObj.AnimalName = "Lion";
    LionObj.Popularity = 3;
    LionObj.AnimalPrice = 100;

    AnimalManage LManage;
    LManage.AnimalNr = 0;
    LManage.MaintainPrice = 20;

    Animal EagleObj;
    EagleObj.AnimalName = "Eagle";
    EagleObj.Popularity = 2;
    EagleObj.AnimalPrice = 25;

    AnimalManage EManage;
    EManage.AnimalNr = 0;
    EManage.MaintainPrice = 5;


    Animal SharkObj;
    SharkObj.AnimalName = "Shark";
    SharkObj.Popularity = 2;
    SharkObj.AnimalPrice = 150;

    AnimalManage SManage;
    SManage.AnimalNr = 0;
    SManage.MaintainPrice = 40;

    Animal DeerObj;
    DeerObj.AnimalName = "Deer";
    DeerObj.Popularity = 1;
    DeerObj.AnimalPrice = 30;

    AnimalManage DManage;
    DManage.AnimalNr = 0;
    DManage.MaintainPrice = 5;


    Animal FlamingoObj;
    FlamingoObj.AnimalName = "Flamingo";
    FlamingoObj.Popularity = 4;
    FlamingoObj.AnimalPrice = 55;

    AnimalManage FManage;
    FManage.AnimalNr = 0;
    FManage.MaintainPrice = 4;


    Animal OstrichObj;
    OstrichObj.AnimalName = "Ostrich";
    OstrichObj.Popularity = 1;
    OstrichObj.AnimalPrice = 80;

    AnimalManage OManage;
    OManage.AnimalNr = 0;
    OManage.MaintainPrice = 7;


    Animal BearObj;
    BearObj.AnimalName = "Bear";
    BearObj.Popularity = 3;
    BearObj.AnimalPrice = 80;

    AnimalManage BManage;
    BManage.AnimalNr = 0;
    BManage.MaintainPrice = 25;


    Animal MonkeyObj;
    MonkeyObj.AnimalName = "Monkey";
    MonkeyObj.Popularity = 5;
    MonkeyObj.AnimalPrice = 60;

    AnimalManage MManage;
    MManage.AnimalNr = 0;
    MManage.MaintainPrice = 15;


    Animal RacoonObj;
    RacoonObj.AnimalName = "Racoon";
    RacoonObj.Popularity = 3;
    RacoonObj.AnimalPrice = 10;

    AnimalManage RManage;
    RManage.AnimalNr = 0;
    RManage.MaintainPrice = 6;

    //Random Animal Generator and default MoneyGain and MoneyLoss -----------------------------------------

    cout << "Animals currently in the zoo :" << "\n";
    const int Array_size = 5;
    const int AvailableAnimals = 9;
    srand(time(0));

    string AnimalList[AvailableAnimals] = {LionObj.AnimalName, DeerObj.AnimalName, BearObj.AnimalName,
                                           EagleObj.AnimalName, SharkObj.AnimalName, FlamingoObj.AnimalName,
                                           OstrichObj.AnimalName, MonkeyObj.AnimalName, RacoonObj.AnimalName};

    for (int i = 0; i < Array_size; i++) {
        int index = rand() % AvailableAnimals;

        string temp = AnimalList[i];
        AnimalList[i] = AnimalList[index];
        AnimalList[index] = temp;


        if (AnimalList[i] == "Lion") {
            MondayObj.ChildQty = MondayObj.ChildQty + LionObj.Popularity;
            TuesdayObj.ChildQty = TuesdayObj.ChildQty + LionObj.Popularity;
            WednesdayObj.ChildQty = WednesdayObj.ChildQty + LionObj.Popularity;
            ThursdayObj.ChildQty = ThursdayObj.ChildQty + LionObj.Popularity;
            FridayObj.ChildQty = FridayObj.ChildQty + LionObj.Popularity;
            SaturdayObj.ChildQty = SaturdayObj.ChildQty + LionObj.Popularity;
            SundayObj.ChildQty = SundayObj.ChildQty + LionObj.Popularity;

            LManage.AnimalNr = LManage.AnimalNr + 1;

            LionJanitor.StaffNr = LionJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - LionObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + 3 * MeatObj.FoodPrice + LionJanitor.StaffPrice + LManage.MaintainPrice;
        }

        if (AnimalList[i] == "Eagle") {
            MondayObj.ElderQty = MondayObj.ElderQty + EagleObj.Popularity;
            TuesdayObj.ElderQty = TuesdayObj.ElderQty + EagleObj.Popularity;
            WednesdayObj.ElderQty = WednesdayObj.ElderQty + EagleObj.Popularity;
            ThursdayObj.ElderQty = ThursdayObj.ElderQty + EagleObj.Popularity;
            FridayObj.ElderQty = FridayObj.ElderQty + EagleObj.Popularity;
            SaturdayObj.ElderQty = SaturdayObj.ElderQty + EagleObj.Popularity;
            SundayObj.ElderQty = SundayObj.ElderQty + EagleObj.Popularity;

            EManage.AnimalNr = EManage.AnimalNr + 1;

            EagleJanitor.StaffNr = EagleJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - EagleObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + 3 * MeatObj.FoodPrice + SharkJanitor.StaffPrice + EManage.MaintainPrice;
        }

        if (AnimalList[i] == "Shark") {
            MondayObj.AdultQty = MondayObj.AdultQty + SharkObj.Popularity;
            TuesdayObj.AdultQty = TuesdayObj.AdultQty + SharkObj.Popularity;
            WednesdayObj.AdultQty = WednesdayObj.AdultQty + SharkObj.Popularity;
            ThursdayObj.AdultQty = ThursdayObj.AdultQty + SharkObj.Popularity;
            FridayObj.AdultQty = FridayObj.AdultQty + SharkObj.Popularity;
            SaturdayObj.AdultQty = SaturdayObj.AdultQty + SharkObj.Popularity;
            SundayObj.AdultQty = SundayObj.AdultQty + SharkObj.Popularity;

            SManage.AnimalNr = SManage.AnimalNr + 1;

            SharkJanitor.StaffNr = SharkJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - SharkObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + 3 * MeatObj.FoodPrice + SharkJanitor.StaffPrice + SManage.MaintainPrice;
        }

        if (AnimalList[i] == "Deer") {
            MondayObj.AdultQty = MondayObj.AdultQty + DeerObj.Popularity;
            TuesdayObj.AdultQty = TuesdayObj.AdultQty + DeerObj.Popularity;
            WednesdayObj.AdultQty = WednesdayObj.AdultQty + DeerObj.Popularity;
            ThursdayObj.AdultQty = ThursdayObj.AdultQty + DeerObj.Popularity;
            FridayObj.AdultQty = FridayObj.AdultQty + DeerObj.Popularity;
            SaturdayObj.AdultQty = SaturdayObj.AdultQty + DeerObj.Popularity;
            SundayObj.AdultQty = SundayObj.AdultQty + DeerObj.Popularity;

            DManage.AnimalNr = DManage.AnimalNr + 1;

            DeerJanitor.StaffNr = DeerJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - DeerObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + 3 * WeedObj.FoodPrice + DeerJanitor.StaffPrice + DManage.MaintainPrice;
        }

        if (AnimalList[i] == "Flamingo") {
            MondayObj.ChildQty = MondayObj.ChildQty + FlamingoObj.Popularity;
            TuesdayObj.ChildQty = TuesdayObj.ChildQty + FlamingoObj.Popularity;
            WednesdayObj.ChildQty = WednesdayObj.ChildQty + FlamingoObj.Popularity;
            ThursdayObj.ChildQty = ThursdayObj.ChildQty + FlamingoObj.Popularity;
            FridayObj.ChildQty = FridayObj.ChildQty + FlamingoObj.Popularity;
            SaturdayObj.ChildQty = SaturdayObj.ChildQty + FlamingoObj.Popularity;
            SundayObj.ChildQty = SundayObj.ChildQty + FlamingoObj.Popularity;

            FManage.AnimalNr = FManage.AnimalNr + 1;

            FlamingoJanitor.StaffNr = FlamingoJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - FlamingoObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + 3 * WeedObj.FoodPrice + FlamingoJanitor.StaffPrice + FManage.MaintainPrice;
        }

        if (AnimalList[i] == "Ostrich") {
            MondayObj.ElderQty = MondayObj.ElderQty + OstrichObj.Popularity;
            TuesdayObj.ElderQty = TuesdayObj.ElderQty + OstrichObj.Popularity;
            WednesdayObj.ElderQty = WednesdayObj.ElderQty + OstrichObj.Popularity;
            ThursdayObj.ElderQty = ThursdayObj.ElderQty + OstrichObj.Popularity;
            FridayObj.ElderQty = FridayObj.ElderQty + OstrichObj.Popularity;
            SaturdayObj.ElderQty = SaturdayObj.ElderQty + OstrichObj.Popularity;
            SundayObj.ElderQty = SundayObj.ElderQty + OstrichObj.Popularity;

            FManage.AnimalNr = FManage.AnimalNr + 1;

            OstrichJanitor.StaffNr = OstrichJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - OstrichObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + 3 * WeedObj.FoodPrice + OstrichJanitor.StaffPrice + OManage.MaintainPrice;
        }

        if (AnimalList[i] == "Bear") {
            MondayObj.AdultQty = MondayObj.AdultQty + BearObj.Popularity;
            TuesdayObj.AdultQty = TuesdayObj.AdultQty + BearObj.Popularity;
            WednesdayObj.AdultQty = WednesdayObj.AdultQty + BearObj.Popularity;
            ThursdayObj.AdultQty = ThursdayObj.AdultQty + BearObj.Popularity;
            FridayObj.AdultQty = FridayObj.AdultQty + BearObj.Popularity;
            SaturdayObj.AdultQty = SaturdayObj.AdultQty + BearObj.Popularity;
            SundayObj.AdultQty = SundayObj.AdultQty + BearObj.Popularity;

            BManage.AnimalNr = BManage.AnimalNr + 1;

            BearJanitor.StaffNr = BearJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - BearObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + WeedObj.FoodPrice + 2 * MeatObj.FoodPrice + BearJanitor.StaffPrice + BManage.MaintainPrice;
        }

        if (AnimalList[i] == "Monkey") {
            MondayObj.ChildQty = MondayObj.ChildQty + MonkeyObj.Popularity;
            TuesdayObj.ChildQty = TuesdayObj.ChildQty + MonkeyObj.Popularity;
            WednesdayObj.ChildQty = WednesdayObj.ChildQty + MonkeyObj.Popularity;
            ThursdayObj.ChildQty = ThursdayObj.ChildQty + MonkeyObj.Popularity;
            FridayObj.ChildQty = FridayObj.ChildQty + MonkeyObj.Popularity;
            SaturdayObj.ChildQty = SaturdayObj.ChildQty + MonkeyObj.Popularity;
            SundayObj.ChildQty = SundayObj.ChildQty + MonkeyObj.Popularity;

            MManage.AnimalNr = MManage.AnimalNr + 1;

            MonkeyJanitor.StaffNr = MonkeyJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - FlamingoObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + WeedObj.FoodPrice + 2 * MeatObj.FoodPrice + MonkeyJanitor.StaffPrice + MManage.MaintainPrice;
        }

        if (AnimalList[i] == "Racoon") {
            MondayObj.ElderQty = MondayObj.ElderQty + RacoonObj.Popularity;
            TuesdayObj.ElderQty = TuesdayObj.ElderQty + RacoonObj.Popularity;
            WednesdayObj.ElderQty = WednesdayObj.ElderQty + RacoonObj.Popularity;
            ThursdayObj.ElderQty = ThursdayObj.ElderQty + RacoonObj.Popularity;
            FridayObj.ElderQty = FridayObj.ElderQty + RacoonObj.Popularity;
            SaturdayObj.ElderQty = SaturdayObj.ElderQty + RacoonObj.Popularity;
            SundayObj.ElderQty = SundayObj.ElderQty + RacoonObj.Popularity;

            RManage.AnimalNr = RManage.AnimalNr + 1;

            RacoonJanitor.StaffNr = RacoonJanitor.StaffNr + 1;

            MoneyObj.NetWorth = MoneyObj.NetWorth - RacoonObj.AnimalPrice;

            MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain + WeedObj.FoodPrice + 2 * MeatObj.FoodPrice + RacoonJanitor.StaffPrice + RManage.MaintainPrice;

        }

        cout << AnimalList[i] << endl;
    };


    //Economy formulas-----------------------------------------------------------------------------------------------

    cout<<"\n"<<"The default price for maintenance  : "<<MoneyObj.DefaultMaintain<<" $"<<"\n";

    int TotalKids = MondayObj.ChildQty + TuesdayObj.ChildQty + WednesdayObj.ChildQty + ThursdayObj.ChildQty +
                    FridayObj.ChildQty + SaturdayObj.ChildQty + SundayObj.ChildQty;
    int TotalAdults = MondayObj.AdultQty + TuesdayObj.AdultQty + WednesdayObj.AdultQty + ThursdayObj.AdultQty +
                      FridayObj.AdultQty + SaturdayObj.AdultQty + SundayObj.AdultQty;
    int TotalElders = MondayObj.ElderQty + TuesdayObj.ElderQty + WednesdayObj.ElderQty + ThursdayObj.ElderQty +
                      FridayObj.ElderQty + SaturdayObj.ElderQty + SundayObj.ElderQty;

    MoneyObj.DefaultMaintain = MoneyObj.DefaultMaintain ;

    MoneyObj.DefaultGain = (KidObj.TicketPrice * TotalKids) + (AdultObj.TicketPrice * TotalAdults) +
                           (ElderObj.TicketPrice * TotalElders);

    //Infinite Generator----------------------------------------------------------------------------------------------

    for (int n = 1;1 == 1;n++) {

        int MRandom = rand() % 10;
        int TuRandom = rand() % 10;
        int WRandom = rand() % 10;
        int ThRandom = rand() % 10;
        int FRandom = rand() % 10;
        int SaRandom = rand() % 10;
        int SuRandom = rand() % 10;

        //Monday----------------------

        if (MRandom < 7){

            cout<<"\n"<<"Monday was a normal day"<<"\n";

        }
        if (MRandom >=7 and MRandom < 10){

            cout<<"\n"<<"Monday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + MondayR.TotalLost;
        }

        //Tuesday----------------------------------

        if (TuRandom < 7){

            cout<<"\n"<<"Tuesday was a normal day"<<"\n";

        }
        if (TuRandom >=7 and TuRandom < 10){

            cout<<"\n"<<"Tuesday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + TuesdayR.TotalLost;
        }

        //Wednesday -----------------------------------------------

        if (WRandom < 7){

            cout<<"\n"<<"Wednesday was a normal day"<<"\n";

        }
        if (WRandom >=7 and WRandom < 10){

            cout<<"\n"<<"Wednesday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + WednesdayR.TotalLost;
        }

        //Thursday--------------------------------------------------------------

        if (ThRandom < 7){

            cout<<"\n"<<"Thursday was a normal day"<<"\n";

        }
        if (ThRandom >=7 and ThRandom < 10){

            cout<<"\n"<<"Thursday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + ThursdayR.TotalLost;
        }

        //Friday--------------------------------------------------------------------------------

        if (FRandom < 7){

            cout<<"\n"<<"Friday was a normal day"<<"\n";

        }
        if (FRandom >=7 and FRandom < 10){

            cout<<"\n"<<"Friday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + FridayR.TotalLost;
        }

        //Saturday---------------------------------------------------------------------------

        if (SaRandom < 7){

            cout<<"\n"<<"Friday was a normal day"<<"\n";

        }
        if (SaRandom >=7 and SaRandom < 10){

            cout<<"\n"<<"Saturday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + SaturdayR.TotalLost;
        }

        //Sunday-------------------------------------------------------------------------------

        if (SuRandom < 7){

            cout<<"\n"<<"Sunday was a normal day"<<"\n";

        }
        if (SuRandom >=7 and SuRandom < 10){

            cout<<"\n"<<"Sunday rained and no one came to the zoo !!"<<"\n";

            MoneyObj.MLost = MoneyObj.MLost + SundayR.TotalLost;
        }

        MoneyObj.MGain =  MoneyObj.DefaultGain;

        MoneyObj.MLost = MoneyObj.MLost + MoneyObj.DefaultMaintain;

        MoneyObj.NetWorth = MoneyObj.NetWorth + MoneyObj.MGain - MoneyObj.MLost;

        cout << "\n" << "Total money Gained in week nr " <<n<< " : " << MoneyObj.MGain << " $";
        cout << "\n" << "Total money spent in week nr " <<n<< " :" << MoneyObj.MLost << " $";
        cout << "\n" << "Net Worth : " << MoneyObj.NetWorth << " $"<<"\n";

        MoneyObj.MGain = 0;
        MoneyObj.MLost = 0;


        if (n == 4){break;}
    }

}
