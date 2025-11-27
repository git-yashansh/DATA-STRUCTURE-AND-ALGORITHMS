#include <iostream>
using namespace std;

class Emp {
    string name;        
    double sal; 
public:
    Emp(string a, double b):name(a),sal(b){}
    // double operator + (Emp &obj){
    //     return this->sal + obj.sal;
    // }
};
double operator + (Emp &obj1,Emp &obj2){
        return obj1.sal + obj2.sal;
    }
int main(){
    Emp emp1("emp1",2000.02),emp2("emp2",5000);
    cout<<emp1+emp2<<endl;
    return 0;
}


class Emp {
    string name;        
    double sal; 
public:
    Emp(string a, double b):name(a),sal(b){}
    double operator + (double d){
        return this->sal += d;
        
    }
    double getsal(){
        return sal;
    }
    friend double operator + (double s, Emp &obj);
    friend double operator + (Emp &obj1, Emp &obj2);
    
};
double operator + (Emp &obj1,Emp &obj2){
        return obj1.sal + obj2.sal;
}
double operator + (double s,Emp &obj){
        return obj1.sal +=s;
}
int main(){
    Emp emp1("emp1",2000.02),emp2("emp2",5000);
    cout<<emp1+emp2<<endl;
    cout<<emp2.getsal()<<endl;
    emp2+2032.98;
    cout<<emp2.getsal();
    return 0;
}


class Emp {
    string name;        
    double sal; 
public:
    Emp(string a, double b):name(a),sal(b){}
    double operator + (double d){
        return this->sal += d;   
    }
    Emp operator - (Emp &obj){
        string n=this->name+obj.name;
        double s=this->sal+obj.sal;
        Emp newObj(n,s);
        return newObj;
    }
    double getsal(){
        return sal;
    }
    friend double operator + (double s, Emp &obj);
    friend double operator + (Emp &obj1, Emp &obj2);
    
};
double operator + (Emp &obj1,Emp &obj2){
        return obj1.sal + obj2.sal;
}
void operator + (double s,Emp &obj){
        obj1.sal +=s;
}
int main(){
    Emp emp1("emp1",2000.02),emp2("emp2",5000);
    cout<<emp1+emp2<<endl;
    cout<<emp2.getsal()<<endl;
    emp2+2032.98;
    cout<<emp2.getsal();
    Emp emp3=emp1-emp2;
    cout<<emp3.sal<<" "<<emp3.name<<endl;
    return 0;
}



int x;
void operator ++(int){
    x += 10;
    return x;
}
int main(){
    Test obj: obj.x = 23;
    cout<<obj++<<endl;
    return 0;
    
}


















