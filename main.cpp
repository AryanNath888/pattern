//Printing Triangle and Rectangle
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter value for rectangle : ";
    cin>>num;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num+50;j++)
        {
            cout<<".";

        }
        cout<<endl;

    }

    int num2;
    cout<<"Enter value for triangle: ";
    cin>>num2;

    for(int i=num2;i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            cout<<" ";

        }



        for(int k=0;k<num2-i;k++)
        {
            cout<<"*";

        }
        cout<<"*";
        for(int k=0;k<num2-i;k++)
        {
            cout<<"*";

        }
        cout<<endl;

    }


}
