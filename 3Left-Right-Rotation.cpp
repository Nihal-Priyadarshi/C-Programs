// 3 // Left Rotation and Right Rotation of a string.
#include<iostream>
using namespace std;
int main()
{
    string Lrot, Rrot;
    int Rotate;
    char temp;
    cout << "\nEnter a string :  ";
    getline(cin, Lrot);
    Rrot = Lrot;
    cout << "\nHow many times u want to rotate :  ";
    cin >> Rotate;
    
    int n = Rrot.size()-1;
    for(int i=0; i<Rotate; i++)
    {
        for(int j=0; j<Lrot.size(); j++)
        {
            if(j==0)
            {
                temp = Lrot[j];
            }
            else
            {
                Lrot[j-1] = Lrot[j];
                if(j == Lrot.size()-1)
                {
                    Lrot[j] = temp;
                }
            }
        }
        for(int k=n; k>=0; k--)
        {
            if(k==Rrot.size()-1)
            {
                temp = Rrot[k];
            }
            else 
            {
                Rrot[k+1] = Rrot[k];
                if(k == 0)
                {
                    Rrot[k] = temp;
                }
            }
        }
    }
    cout << "\nLeft Rotation :  " << Lrot;
    cout << "\n\nRight Rotation :  " << Rrot << "\n\n";
}