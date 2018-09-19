// Developed by Randa Ayman ElBehery, and Sara Mahmoud Mohamed
#include <iostream>
#include<windows.h>
#include <string>

using namespace std;


double power(double base,int pow)
{
    int i;
    double result =1;

    for(i=0 ; i<pow ; i++)
        result = result * base;

    return result;
}


double absolute ( double num )
{
    if (num < 0)
    {
        num = -num ;
    }
    return num ;
}

long long factorial ( int num )
{
    long long result = 1 ;
    for (int i = num ; i>0 ; i--)
    {
        result*=i ;
    }
    return result ;
}
const double pi = 3.1415926535897 ;

double sin ( double x )
{
    double result=0 ;
    for (int i=0 ; i<=10; i++)
    {
        result+=(power(-1,i)*(power(x,(2*i)+1))/factorial((2*i)+1));
    }
    if (x==90)
        return 1;
    else if (x==180 )
        return 0;
     else if (x==270)
        return -1 ;

    return ((result*180)/pi);
}

double cos ( double x )
{
    double result=0 ;
    for (int i=0 ; i<=10; i++)
    {
        result+=((power(-1,i)*(power(x,2*i)))/factorial(2*i));
    }
    if (x==90)
        return 0;
    else if (x==180 )
        return -1;
     else if (x==270)
        return 0 ;

    return ((result*180)/pi);
}

double tan ( double x )
{
    return sin(x)/cos(x);
}

double arcsin ( double x )
{
    double result=0 ;
    for (int i=0 ; i<=10; i++)
    {
        result+=((factorial(i*2)*(power(x,(2*i)+1)))/ (power(4,i)* ((2*i)+1)*power(factorial(i),2 )));
    }
    if (x==1)
        return 90;
    else if (x==-1)
        return 270 ;
    return ((result*180)/pi);
}

double arccos(double x)
{
    double result = 90-arcsin(x);
    if (result<0)
        result+=360;
    return ((result*180)/pi);
}

long double arctan ( double x )
{
     long
     double result=0 ;
    for (int i=0 ; i<=100; i++)
    {
        result+=((power(-1, i)* power(x,(2*i+1)))/((2*i)+1));
    }
    return ((result*180)/pi);
}

double exp ( double x )
{
    double result=0 ;
    for (int i=0 ; i<=20; i++)
    {
        result+=(power(x,i) / factorial(i));
    }
    return result;
}
double ln ( double x )
{
    double result=0;
    for (int i=1 ; i<100 ; i++)
    {
        result += (power(((x-1)/(x+1)),(2*i)-1))/((2*i)-1);
    }
    return result*2;
}

double log (double x)
{
    return (ln(x)/ln(10));
}

double sinh ( double x)
{
    double result =0 ;
    result = (exp(x)-exp(-x)) /2 ;
    return result ;
}


double cosh ( double x )
{
    double result=0 ;
    for (int i=0 ; i<=20; i++)
    {
        result+=(power(x,2*i)/factorial(2*i));
    }
    return result;
}

double tanh ( double x)
{
    return (sinh(x)/cosh(x));
}

double root ( double x , double y )
{
    double result = exp (ln(x)/y);
    return result;
}

double sqroot ( double x , double y=2 )
{
    double result = exp (ln(x)/y);
    return result;
}

double tenPower (double x)
{
    double result =root(10,(1/x)) ;
    return result;
}

int main()
{

   double re =0 , x , y ;
   string op ;

    cout << "0\b";
	cin >> x;
    while (cin >> op )
    {
        if (op == "degrees")
            continue ;
        else if ( op == "radians")
        {
            x=x*pi/180 ;
            continue ;
        }
    else if (op=="+" )
    {
        cin >> y ;
        system ("CLS");
        x= x+y ;
        cout << x ;
    }
    else if (op=="-" )
    {
        cin >> y ;
        system ("CLS");
        x= x-y ;
        cout << x ;
    }
    else if (op=="*" )
    {
        cin >> y ;
        system ("CLS");
        x=x*y ;
        cout << x;
    }
    else if (op=="/" )
    {
        cin >> y ;
        system ("CLS");
        if (y==0)
           {
               cout << "error" ;
               continue ;
           }
        x= x/y ;
        cout << x;
    }
    else if (op=="^" )
    {
        cin >> y ;
        system ("CLS");
        x= power(x,y) ;
        cout << x;
    }

    else if ( op == "root")
    {
         cin >> y ;
        system ("CLS");
        x= root(x,y) ;
        cout << x;
    }

    else if ( op=="M+" || op=="m+" )
        re+=x ;
    else if (  op=="M-" || op=="m-" )
        re-=x ;
    else if ( op=="MC"|| op=="mc" )
        re=0;
    else if ( op=="MS"|| op=="ms" )
        re=x;
    else if ( op=="MR"|| op=="mr" )
        cout << re ;

      else if ( op == "sin")
    {
        system ("CLS");
        x=sin(x);
        cout << x;
    }
    else if ( op == "cos")
    {
        system ("CLS");
        x=cos(x);
        cout << x;
    }else if ( op == "tan")
    {
        system ("CLS");
        x=tan(x);
        cout << x;
    }else if ( op == "arcsin")
    {
        system ("CLS");
        x=arcsin(x);
        cout << x;
    }else if ( op == "arccos")
    {
        system ("CLS");
        x=arccos(x);
        cout << x;
    }else if ( op == "arctan")
    {
        system ("CLS");
        x=arctan(x);
        cout << x;
    }
    else if ( op == "sinh")
    {
        system ("CLS");
        x=sinh(x);
        cout << x;
    }else if ( op == "cosh")
    {
        system ("CLS");
        x=cosh(x);
        cout << x;
    }else if ( op == "tanh")
    {
        system ("CLS");
        x=tanh(x);
        cout << x;
    }
    else if ( op == "!")
    {
        system ("CLS");
        x=factorial(x);
        cout << x;
    }else if ( op == "log")
    {
        system ("CLS");
        x=log(x);
        cout << x;
    }else if ( op == "ln")
    {
        system ("CLS");
        x=ln(x);
        cout << x;
    }
    else if ( op == "e")
    {
        system ("CLS");
        x=exp(x);
        cout << x;
    }else if ( op == "abs")
    {
        system ("CLS");
        x=absolute(x);
        cout << x;
    }
    else if ( op == "10^")
    {
        system ("CLS");
        x=tenPower(x);
        cout << x;
    }
    else if (op=="C" || op == "c")
    {
        system ("CLS");
        cin >> x;
    }
    else if (op=="off")
    {
        return 0 ;
    }
    }

    return 0;
}
