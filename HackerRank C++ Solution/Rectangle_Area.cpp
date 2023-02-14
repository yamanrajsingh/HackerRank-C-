#include<iostream>
using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
    int w,h;
    void display(){
        cout<<w<<" "<<h<<endl;
    }
};
    class RectangleArea: public Rectangle{
        
        public:
        void read_input(){
            int a,b;
            cin>>a>>b;
           w=a;
           h=b;
        }
        void display(){
            cout<<w*h;
        }
    };

