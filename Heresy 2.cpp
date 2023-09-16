// GitTutorial.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
using namespace std;

class Human {
private:
    string name = "Олег";
    string lastname = "Иванов";
    int age = 18;
    string job = "Грузчик";
    int grade = 1; // Min 1 - Max 10;
    int personalIdNumber = -1;
public:
    //GET/SET
    string getName()
    {
        return name;
    }

    void setLastName(string N)
    {
        lastname = N;
    }
    string getLastName()
    {
        return lastname;
    }

    void setJob(string N)
    {
        job = N;
    }
    string getJob()
    {
        return job;
    }

    void setAge(int A)
    {
        if (A < 0) A = 0;
        age = A;
    }
    int getAge()
    {
        return age;
    }

    void setGrade(int A)
    {
        if (A < 1) A = 1;
        if (A > 10) A = 10;
        age = A;
    }
    int getGrade()
    {
        return grade;
    }

    void setPersonalIdNumber(int A)
    {
        if (A < 0) A = 0;
        personalIdNumber = A;
    }
    int getPersonalIdNumber()
    {
        return personalIdNumber;
    }
    //END GET/SET
    void setName(std::string FullName)
    {
        std::size_t pos = FullName.find(" ");
        if (pos != std::string::npos)
        {
            std::stringstream ss;
            ss << FullName;
            string str;
            getline(ss, str, ' ');
            name = str;
            getline(ss, str, ' ');
            lastname = str;
        }
    }
    void addYear()
    {
        age++;
    }

    void changeJob(string Job)
    {
        setJob(Job);
    }

    void addGrade()
    {
        if (grade < 10) grade++;
    }

    void reduceGrade()
    {
        if (grade > 1) grade--;
    }

    void assignID()
    {
        personalIdNumber = rand() % 1000000 + 100000;
    }
};

class Room {
private:
    string room_type = "Спальня";
    int doors = 1;
    int windows = 1;
    bool lead_outside = false;
    int sqaremeters = 9;
    int owner = -1;
public:
    //GET/SET
    void setDoors(int A)
    {
        if (A < 0) A = 0;
        doors = A;
    }
    int getDoors()
    {
        return doors;
    }

    void setWindows(int A)
    {
        if (A < 0) A = 0;
        windows = A;
    }
    int getWindows()
    {
        return windows;
    }

    void setSquareMeters(int A)
    {
        if (A < 0) A = 0;
        sqaremeters = A;
    }
    int getSquareMeters()
    {
        return sqaremeters;
    }

    void setLeadOutside(bool F)
    {
        lead_outside = F;
    }
    void setLeadOutside(int F)
    {
        lead_outside = (F > 0);
    }
    bool getLeadOutside()
    {
        return lead_outside;
    }

    void setRoomType(string N)
    {
        room_type = N;
    }
    string getRoomType()
    {
        return room_type;
    }
    //GET/SET END

    void wallInTheDoor()
    {
        if (doors > 0) doors--;
    }

    void makeADoor()
    {
        doors++;
    }

    void makeAWindow()
    {
        windows++;
    }

    void ToggleLeadOutside()
    {
        lead_outside = !lead_outside;
    }

    void blowUpTnT()
    {
        doors += rand() % 3;
        windows += rand() % 5;
    }

    void changeOwner(int ID)
    {
        owner = ID;
    }
};

class Phone {
private:
    string manufacturer = "Samsung";
    string model = "A20";
    string OS = "Android";
    string OSVersion = "12.0";
    string Number = "+3800000000000";
    int ownerId = -1;
public:
    //GET/SET
    void setManufacturer(string N)
    {
        manufacturer = N;
    }
    string getManufacturer()
    {
        return manufacturer;
    }

    void setModel(string N)
    {
        model = N;
    }
    string getModel()
    {
        return model;
    }

    void setOS(string N)
    {
        OS = N;
    }
    string getOS()
    {
        return OS;
    }

    void setOSVersion(string N)
    {
        OSVersion = N;
    }
    string getOSVersion()
    {
        return OSVersion;
    }

    void setNumber(string N)
    {
        Number = N;
    }
    string getNumber()
    {
        return Number;
    }

    //SET/GET end

    void installOS(string Name)
    {
        OS = Name;
        OSVersion = "1.0";
    }
    void updateOS(string Version)
    {
        OSVersion = Version;
    }

    void changeSimPhone(string PhoneNumber)
    {
        Number = PhoneNumber;
    }

    void DefaultOS()
    {
        OS = "Android";
        OSVersion = "12.0";
    }

    void DefaultOSVersion()
    {
        if (OS == "Android")
            OSVersion = "12.0";
    }

    void PersonRegistration(int universalId)
    {
        ownerId = universalId;
    }
};

class Book {
private:
    string name = "Идиот";
    string author = "Достоевский";
    int year = 1869;
    string genre = "Роман";
    int customerid = -1; //-1 no customer holds the book

public:
    //GET/SET

    void setName(string N)
    {
        name = N;
    }
    string getName()
    {
        return name;
    }

    void setAuthor(string N)
    {
        author = N;
    }
    string getAuthor()
    {
        return author;
    }

    void setGenre(string N)
    {
        genre = N;
    }
    string getGenre()
    {
        return genre;
    }

    void setYear(int A)
    {
        if (A < 0) A = 0;
        year = A;
    }
    int getYear()
    {
        return year;
    }

    int geCustomerId()
    {
        return customerid;
    }


    //GET/SET End

    void tweakYear(int i_Year)
    {
        if (i_Year > 500 && i_Year < 2500)
        {
            year = i_Year;
        }
    }

    void tweakName(string s_Name)
    {
        name = s_Name;
    }

    void tweakAuthorName(string s_Name)
    {
        author = s_Name;
    }

    void tweakGenre(string s_Name)
    {
        genre = s_Name;
    }

    bool  giveOutBook(int customer)
    {
        if (customerid != -1)
        {
            return false;
        }
        else
        {
            customerid = customer;
            return true;
        }
    }

    bool  returnBook()
    {
        if (customerid != -1)
        {
            return false;
        }
        else
        {
            customerid = -1;
            return true;
        }
    }

};

class InGameCurrency {
private:
    int gold = 0;
    int silver = 0;
    int copper = 0;
    int commendations = 0;
    int crystals = 0;
    string playerCredential = "- 1";

public:
    //GET/SET

    void setCopper(int A)
    {
        if (A < 0) A = 0;
        copper = A;
        Recalculate();
    }
    int getCopper()
    {
        return copper;
    }

    void setSilver(int A)
    {
        if (A < 0) A = 0;
        silver = A;
        Recalculate();
    }
    int getSilver()
    {
        return silver;
    }

    void setGold(int A)
    {
        if (A < 0) A = 0;
        gold = A;
        Recalculate();
    }
    int getGold()
    {
        return gold;
    }

    void setCommendations(int A)
    {
        if (A < 0) A = 0;
        commendations = A;
    }
    int getCommendations()
    {
        return commendations;
    }

    void setCrystals(int A)
    {
        if (A < 0) A = 0;
        crystals = A;
    }
    int getCrystals()
    {
        return crystals;
    }

    //GET/SET End

    void Recalculate()
    {
        if (copper < 0)
        {
            int SC = (copper * -1) % 100 + 1;
            silver -= SC;
            copper += SC * 100;
        }
        if (copper > 100)
        {
            silver += copper / 100;
            copper = copper % 100;
        }

        if (silver < 0)
        {
            int SC = (silver * -1) % 100 + 1;
            gold -= SC;
            silver += SC * 100;
        }
        if (silver > 100)
        {
            gold += silver / 100;
            silver = silver % 100;
        }
    }

    void addCoins(int sum)
    {
        copper += sum;
        Recalculate();
    }

    void commend()
    {
        commendations++;
    }

    void spendCommendations(int coms)
    {
        if (coms > 0)
            commendations -= coms;
    }

    void buyCrystal()
    {
        if (gold >= 10)
        {
            gold -= 10;
            crystals++;
        }
    }

    void AssignPlayer(string PhoneNumber)
    {
        playerCredential = PhoneNumber;
    }

};

int main()
{
    std::cout << "Hello World!\n";
    Human* MainCharacter = new Human();
    Book* RentedBook = new Book();
    InGameCurrency* GameProgress = new InGameCurrency();
    Phone* CellPhone = new Phone();
    Room* RentedRoom = new Room();

    //
    // 
    MainCharacter->assignID();
    //Borrow a book from library
    RentedBook->giveOutBook(MainCharacter->getPersonalIdNumber());
    //Register new phone with pre-installed SIM
    CellPhone->PersonRegistration(MainCharacter->getPersonalIdNumber());
    //Register in mobile game via Phone Number
    GameProgress->AssignPlayer(CellPhone->getNumber());
    //Rent a Room
    RentedRoom->changeOwner(MainCharacter->getPersonalIdNumber());

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
