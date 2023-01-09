#include<iostream>
using namespace std;

class obesity{
private:
    float height , weight , BMI;

public:
    void getdata()
    {

        cout<<"Enter Weight in Kilograms "<<endl;
        cin>>weight;

        cout<<"Enter Height in Meters "<<endl;
        cin>>height;
    }

    void BmI()
    {

        BMI=weight/(height*height);
    }

    void print()
    {
        if(BMI>=25 && BMI<=30)
		{
            cout<<BMI<<endl;
            cout<<"You are OverWeight "<<endl;
       }
        else if ( BMI>=30)
		{
            cout<<BMI<<endl;
            cout<<" OOPS Fat ! need some restriction "<<endl;
        }
          else 
		{
           cout<<"You are Normal"<<endl;
        }
    }
};

int main()
{

    obesity A;
    A.getdata();
    A.BmI();
    A.print();

  return 0;

}
