#include<iostream>

using namespace std;

class Fruit{
    public:
        virtual void Identify(){
            cout << "I am a fruit." << endl;
        }
};

class Banana : public Fruit{
    public:
        void Identify(){
            cout << "I am a banana." << endl;
        }
};

class Tangerine : public Fruit{
    public:
        void Identify(){
            cout << "I am a tangerine." << endl;
        }
};

class Pear : public Fruit{
    public:
        void Identify(){
            cout << "I am a pear." << endl;
        }
};