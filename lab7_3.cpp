//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age,height,money;
    string status;
    cout << "Input AGE \n";
    cin >> age;
    
    if (age <= 20){
        cout << "Input Height \n";
        cin >> height;
        if (height < 160) status = "UNFRIEND";    
        else if(height <175) status = "FRIEND";
        else {
            cout << "Input SUBSIN \n";
            cin >> money;
            if (money >69000000) status = "MARRIED";
            else status = "ONE-NIGHT-STAND";}
    }else {
        if (age < 30) {
        cout << "Input SUBSIN \n";
        cin >> money;
        if (money > 10000000) status = "BEST FRIEND";
        else status = "UNFRIEND";}
        else status = "UNFRIEND";
    }
cout << status;
return 0;
}