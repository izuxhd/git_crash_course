 #include<iostream>
 using  namespace std;
 struct student{
int  a;
 int  b;
  int c ;
  };
  class newModel{
    private:
     int a;
     int b;
      protected :
       int  d;
       public:
     int  c;
     newModel(){}
     newModel(int a,int b){
      this->a=a;
      this->b=b;
     }

     int calculatelenght(){
      return  a+b+c+d;
     }
      void setValue(){
        a=10;
        b=20;
        c=30;
        d=40;      
        }
    void  DisplayMethod(){
      cout<<"a="<<a<<endl;
      cout<<"b"<<b<<endl;
      cout<<"c"<<c<<endl;
      cout<<"d"<<d<<endl;
    }


  };
    
   class NewMOde : public newModel{
 public :
  NewMOde(int c,int d){
  newModel(c,d);
   }
   void setvalueprivate(newModel &obj,int a, int b, int c,int d){
   obj.a=a;
   obj.b=b;
   obj.c=c;
  obj.d=d;
   }
   };
   class C{
 void personname(){
  cout<<"Hello"<<endl;
 }
   };
   class D{

   };
   class E{

   };
class G{
};
int main(){
int a = 10;
int b = 10;
int c = 10;
float  d =23.4;
cout<<"Value of  a  is "<<a ;
 }
