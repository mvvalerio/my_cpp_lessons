#include <iostream>

using namespace std;


int x = 10;


namespace first_space{

    void func(){

        cout << "Inside first_space" << endl;

    }

}


namespace second_space{

    void func(){

        cout << "Inside secound_space" << endl;

    }

}


namespace a{

    void func(){
        
        cout << "Inside A" << endl;

    }

    namespace a2{

        void func(){

            cout << "Inside A2" << endl;

        }

    }

}



int main(){

    cout << x << endl;

    a::a2::func();

    second_space::func();
}