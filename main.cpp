#include <iostream>
#include <windows.h>

using namespace std;

string name;
string answer;

int main()
{
   cout << "Whats your name?"
         << endl;
    cin >> name;
    cout << endl;
   int pts = 0;


    system("cls");
    cout<<"Welcome in Quiz " << name;


        string Respond;
    cout << ",Do you want to start the quiz"<<"? yes/no" << endl;
    cin >> Respond;

    if (Respond == "yes") {
        cout << endl;
        cout << "Good luck\n" << endl;

          cout << "What was the first GT-R?\n"<<endl;

    cout << "a) Nissan GT-R PGC10"<<endl;
    cout << "b) Nissan GT-R R32"<<endl;
    cout << "c) Prince Skyline S54"<<endl;
    cout << "\nYour answer: ";
    cin >> Respond;
    if(Respond == "a")
    {
       cout << "Good answer!\n";
     pts++;
    }

    else
    {
        cout << "Incorrect!!\n";


    }

          cout << "How old is Nissan brand (2023)?\n"<<endl;

    cout << "a) 32"<<endl;
    cout << "b) 89"<<endl;
    cout << "c) 74"<<endl;
    cout << "\nYour answer: ";
    cin >> Respond;
    if(Respond == "a")
    {
       cout << "Good answer!\n";
     pts++;
    }

    else
    {
        cout << "Incorrect!!\n";


    }


  cout << "Who was the creator of Nissan?\n"<<endl;

    cout << "a) Jujiro Matsuda"<<endl;
    cout << "b) Keiichi Tsuchiya"<<endl;
    cout << "c) Yoshisuke Aikawa"<<endl;
    cout << "\nYour answer: ";
    cin >> Respond;
    if(Respond == "c")
    {
       cout << "Good answer!\n";
     pts++;
    }

    else
    {
        cout << "Incorrect!!\n";


    }


  cout << "How many models of Skyline exist?\n"<<endl;

    cout << "a) 13"<<endl;
    cout << "b) 11"<<endl;
    cout << "c) 17"<<endl;
    cout << "\nYour answer: ";
    cin >> Respond;
    if(Respond == "a")
    {
       cout << "Good answer!\n";
     pts++;
    }

    else
    {
        cout << "Incorrect!!\n";


    }


    cout << "The most popular engine from nissan is: \n"<<endl;

    cout << "a) RB26DETT"<<endl;
    cout << "b) HR16DE"<<endl;
    cout << "c) 1.2 DIG-T"<<endl;
    cout << "\nYour answer: ";
    cin >> Respond;
    if(Respond == "a")
    {
       cout << "Good answer!\n";
     pts++;
    }

    else
    {
        cout << "Incorrect!!\n";


    }

    cout << "Most popular Nissan car is: \n"<<endl;

    cout << "a) Laurel"<<endl;
    cout << "b) President"<<endl;
    cout << "c) Skyline"<<endl;
     cout << "\nYour answer: ";
    cin >> Respond;
    if(Respond == "c")
    {
       cout << "Good answer!\n";
     pts++;
    }

    else
    {
        cout << "Incorrect!!\n";


    }


 cout<< "points: "<<pkt<<"/6"<< endl;
cout<< "Quiz ended"<<endl;



if(pts==1){
    cout<<"great";
    cin>>pts;

}

if(pts==2){
    cout<<"not bad";
    cin>>pts;

}
if(pts==3){
    cout<<"could be better";
    cin>>pts;

}
if(pts==4){
    cout<<"nice";
    cin>>pts;

}
if(pts==5){
    cout<<"well";
    cin>>pts;

}
if(pts==6){
    cout<<"you are expert";
    cin>>pts;

}


}
    else {
        cout << "Bye!" << endl;

    }


    return 0;
}
