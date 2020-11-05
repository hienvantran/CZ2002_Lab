using namespace std;

#include "Animal.h"
#include "childAnimal.h"
#include <iostream>
#include <string>
    
int main()
{
    //Animal a;                             //for 3.1.1 cannot instantiate abstract class
    //a.speak();                            //for 3.1.1 cannot instantiate abstract class   
    //Animal a1("Test", Green);             //for 3.1.2 cannot instantiate abstract class
    //a1.speak();                           //for 3.1.2 cannot instantiate abstract class

    //Mammal m("Test", Green);              //for 3.2.1
    //m.speak();                            //for 3.2.1

    //Dog d("Test", Blue, "Test_Owner");    //for 3.2.2
    //d.speak();                            //for 3.2.2
    //d.move();                             //for 3.2.4

    //Animal *animalPtr = new Dog("Lassie", White, "Andy");   //for 3.3.1
    //animalPtr->speak();                                     //for 3.3.1
    //animalPtr->move();                                      //for 3.3.1
    //delete animalPtr;                                       //for 3.3.1

    //Dog dogi("Lassie", White, "Andy");              //for 3.3.3
    //Mammal *aniPtr = &dogi;                         //for 3.3.3
    //Mammal &aniRef = dogi;                          //for 3.3.3
    //Mammal aniVal = dogi;                           //for 3.3.3
    //aniPtr->speak();                                //for 3.3.3
    //aniRef.speak();                                 //for 3.3.3
    //aniVal.speak();                                 //for 3.3.3



    // for 3.4, 3.5
    int choice = 0;
    Mammal** mammal = new Mammal * [3];
    mammal[0] = new Dog("Lassie", White, "Andy");
    mammal[1] = new Cat("Sen", Black, "King");
    mammal[2] = new Lion("S", Brown, "lion");

    do
    {
        cout << "Select the animal to send to Zoo :" << endl;
        cout << "(1) Dog (2) Cat (3) Lion (4) Move all animals (5) Quit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            mammal[0]->move();
            mammal[0]->speak();
            mammal[0]->eat();
            break;

        case 2:
            mammal[1]->move();
            mammal[1]->speak();
            mammal[1]->eat();
            break;

        case 3:
            mammal[2]->move();
            mammal[2]->speak();
            mammal[2]->eat();
            break;

        case 4:
            for (int i = 0; i < 3; i++)
            {
                mammal[i]->move();
                mammal[i]->speak();
                mammal[i]->eat();
            }
            break;
        }
    } while (choice != 5);

    //free memory
    for (int i = 0; i < 3; i++)
        delete mammal[i];
    delete[] mammal;

    cout << "Program exiting …. " << endl;

    return 0;
}