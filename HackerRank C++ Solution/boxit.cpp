#include<bits/stdc++.h>

using namespace std;
class Box
{
    long long int l, b, h;

    public:
        Box()
        {
            l = 0, b = 0, h = 0;
        }

    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }

    Box(Box & B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength()    // Return box's length
    {
        return (l);
    }

    int getBreadth()    // Return box's breadth
    {
        return (b);
    }

    int getHeight()    //Return box's height
    {
        return (h);
    }

    long long CalculateVolume()
    {
        return (long long)(l *b *h);
    }

    bool operator < (const Box &c1)
    {
        if ((l < c1.l) || ((b < c1.b) && (l == c1.l)) || ((h < c1.h) && (b == c1.b) && (l == c1.l)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend ostream &operator<<(ostream &os, const Box &dt);
};

ostream &operator<<(ostream &os, const Box &dt)
{
    os << dt.l << ' ' << dt.b << ' ' << dt.h;
    return os;
}//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

