#include <iostream>
#include<string>
using namespace std;
class Uno {
    public : int Int;
};
class Due : public Uno {
    public : Due (){
        Int = 2;
    }
    Due(int x){Int = x == 0 ? 2 : x - 2;}
};
int main(){
    Due d,d2(0);
    cout<<d.Int - d2.Int;
    return 0;
}
//class One{
//    char value;
//public:
//    One(){value = 'A';}
//    One(char v): value(v){}
//    void set (char c){this->value = c;}
//    void set(){this -> value = 'd';}
//    char get(){return value;}
//};
//
//int main(){
//    One o1, *o2;
//    o2 = new One ('b');
//    One *p;
//    p = &o1;
//    p -> set();
//    p = o2;
//    p -> set('c');
//    cout <<o2->get() - o1.get();
//    return 0;
//}
//

//char max(char x, char y){
//    if (x > y) {
//        return y;
//    } else {
//        return x;
//    }
//}
//int main(){
//    char chr = max('a', 'z');
//    cout<<chr;
//    return 0;
//}
//class Uno{
//    int val;
//    public :Uno(int x){val = x;}
//    int out(){return val;}
//    void operator++ (int vsr){
//        val += val;
//    }
//
//};
//ostream &operator <<(ostream &o, Uno u)
//{
//    return  o << u.out();
//}
//int main(){
//    Uno i(2);
//    i++;
//    cout<<i;
//    return 0;
//}
//struct Who {
//    string nick;
//};
//class She
//{
//    Who *who;
//public:
//    She (){
//        who = new Who;
//        who -> nick = "Jane";
//    }
//    string out (){
//        return who -> nick;
//    }
//};
//int main(){
//    She they [2];
//    for(int i = 0; i < 2; i++)
//        cout << they [i].out();
//    return 0;
//}
//int doit(int i, int j =0)
//{
//    return (i * j);
//}
//int main () {
//    cout << doit (doit(1,2));
//    return 0;
//}
//class Alpha{
//    public : char out (){return 'A';}
//};
//class Beta:public Alpha
//{
//    public : virtual char out (){return 'B';}
//};
//class Gamma:public Beta {
//    public : char out (){return 'G';}
//};
//int main(){
//    Alpha *a = new Alpha();
//    Alpha *b = new Beta();
//    Alpha *c = new Gamma();
//    cout << (a->out()) << (b->out()) << (c->out());
//    return 0;
//}
//#define CALL(param){if (param) cout << param++;}
//int main(){
//    int i = 1;
//    CALL(i);
//    cout <<i;
//    return  0;
//}
//struct S
//{
//    char *p;
//};
//class C
//{
//    S s;
//public:
//    C(){s.p = new char; *s.p = 'A';}
//    void p() {cout << ++(*s.p); }
//};
//int main (){
//    C *c = new C();
//    c->p();
//    return 0;
//}
//int main(int argc, const char *argv[])
//{
//    float B = 32;
//    {char B = '1'; cout << B;}
//    {int B = 2; cout << B;}
//    cout << B;
//    return 0;
//}
//int X = 5;
//int main(){
//    cout <<"HI!";
//    if(X-- > 0)
//        main();
//    return 0;
//}
//class A
//{
//public:void out(){cout <<"A";}
//};
//class B : public A
//{
//public:void out(){cout <<"B";}
//};
//int main(){
//    A *a;
//    a = new A();
//    a -> out();
//    a = new B();
//    a -> out();
//    return 0;
//}
//int main(){
//    bool t[] = {false, true, false & true};
//    string u[2] = {"false", "true"};
//    bool *p;
//    p = t + 2;
//    cout << u [*p];
//    return 0;
//}
//int main(){
//    char *abc;
//    abc = new char[26];
//    for(int i = 0; i < 26; i++)
//        abc [i] = 'a' + i;
//    cout << * (abc + 2);
//    return 0;
//}
//Class X{
//private: int x;
//protected: int y;
//public: int z;
//};
//Class Y : protected X{
//
//};
//class Uno {
//    public : ~Uno(){cout << "X";}
//};
//void foo(Uno *d)
//{
//    Uno e;
//    *d = e;
//}
//int main(){
//    Uno *u = new Uno;
//    foo(u);
//    delete  u;
//    return 0;
//}
//const int size = 3;
//class Uno
//{
//public: int n;
//    Uno() {n=1;}
//    Uno(int v){n = v;}
//};
//class Due: public Uno
//{
//public:
//    int *arr;
//    Due() : Uno(){
//        arr = new int [n];
//    }
//    Due(int a) : Uno(a){
//        arr = new int [n];
//    }
//    ~Due(){delete arr;}
//};
//int main()
//{
//    Due d(2);
//    Due e;
//    cout << d.n + e.n;
//    return 0;
//}

//int main(){
//    int i = 8;
//    do {
//        i--;
//        cout << i--;
//    }
//    while(i);
//    return 0;
//}
//int k = -1;
//class Class
//{
//    public :char *adr;
//    Class(){adr = new char[k];}
//    ~Class(){delete [] adr;}
//};
//int fun(void)
//{
//    Class object;
//    return 0.5f;
//}
//int main(){
//    fun();
//    return 0;
//}
//string fun(string s1, string s2)
//{
//    return s1 + s2;
//}
//int main()
//{
//    string s="1", *t = &s;
//cout   << fun(*t, "2");
//    return 0;
//}
//class Uno
//{
//public: void foo(){cout <<"0";}
//    void bar(){cout << "1";}
//};
//class Due: public Uno
//{
//public: void foo(){cout <<"2";}
//    void bar(){cout << "3";}
//};
//int main()
//{
//    Due d;
//    d.Uno::foo();
//    d.bar();
//}

//int main(){
//    int i = 8;
//    do {
//        i--;
//        cout << i--;
//    }
//    while(i);
//    return 0;
//}
//struct S{
//    int a;
//    char b;
//    struct {
//        float a;
//        int b;
//
//    }c;
//};
//int main(int argc, const char *argv[])
//{
//    S s = {1, 2, 3, 4};
//    cout << s.c.a << s.c.b;
//}
//int main(){
//    int cnt = 10;
//    do {
//        cnt--;
//        if (cnt % 3 == 2)
//            break;
//
//        cout <<cnt;
//    }
//    while (cnt);
//    return 0;
//}
//int main(){
//    long i = 2000000000;
//    try
//    {char *text = new char[i]; }
//    catch (bad_alloc& e)
//    {cout << "1";}
//     catch (exception& e)
//    {cout << "2";}
//     catch (...)
//    {cout << "3";}
//    return 0;
//
//}
//int doit(int a, float b)
//{
//    return a / b;
//}
//int main(){
//    float x = doit(1.5f,21);
//    cout << x << ":"<<doit(1,1.f);
//    return 0;
//}
//class X1{
//public: virtual void foo() = 0;
//};
//class X2 : public X1
//{
//public:virtual void foo(){cout <<"X2";}
//};
//
//class X3 : public X1
//{
//public:virtual void foo(){cout <<"X3";}
//};
//
//int main(){
//    X1 *a = new X2(), *b = new X3();
//    b->foo();
//    a->foo();
//    return 0;
//}
//


//class One{
//public:float f;
//    One(float f){this -> f + f;}
//};
//class Two{
//public:float f;
//    Two(One o){this -> f = o.f;}
//    void foo(){cout << (int)f;}
//};
//int main(){
//    One o1(3.14);
//    Two o2 = o1;
//    o2.foo();
//}

//int main(){
//    int a =0;
//    if (++a == 1){
//        cout << (a >> 1);
//    }else {
//        cout << (a);
//    }
//    return 0;
//}
//class Uno{
//
//public: char Char;
//};
//int main (){
//    int swtch;
//    Uno u;
//    u.Char = '5';
//    cin >> swtch;
//    try{
//        switch (swtch) {
//            case 3: throw 1;
//            case 2: throw 3.f;
//            case 1: throw u;
//        }
//    }
//    catch (int e)
//    {cout << e;}
//    catch (Uno e)
//    {cout << e.Char;}
//    catch (...)
//    {cout << "?";}
//    return 0;
//}
//class cmplx{
//    double re,im;
//public:
//    cmplx() : re(1),im(1) {}
//    cmplx(double r,double i): re(r),im(i) {}
//    cmplx operator+(cmplx &);
//    void out(){cout <<"("<<re<<","<<im<<")";}
//};
//cmplx cmplx::operator+( cmplx &a){
//    cmplx c(this->re + a.re, this->im + a.im);
//    return c;
//}
//int main(){
//    cmplx x(1,2),y,z;
//    z = x + y;
//    z.out();
//    return 0;
//}

//{
//    return a * b;
//}
//float doit (float a, float b)
//{
//    return a + b;
//}
//int main()
//{
//    cout << doit(doit(1,2),doit(3.f,4.f));
//    return 0;
//}
//int main(){
//    std::string s = "Here I am!";
//    std::cout << s;
//    return 0;
//}
//int main(){
//    const PI = 3.14;
//    const PI2 = PI * PI;
//    cout << PI2;
//    return 0;
//}
//int main(){
//    int x = -2, y;
//    float f = 2.5, g;
//    g = x;
//    y = f;
//    cout << (int)g / y;
//    return 0;
//}
//int main(){
//    int i = 2;
//    float f = 1.4;
//    char c = 'a';
//    bool b = true;
//    c += i + f + b;
//    cout <<c;
//    return 0;
//}
//class Uno{
//public: Uno(){cout << "X";}
//};
//Uno foo(Uno d){
//    Uno e = d;
//    return e;
//}
//int main(){
//    Uno u;
//    foo (u);
//    return 0;
//}
//class Sup{
//public:virtual void out (){cout << "p";}
//};
//class Sub : public Sup {
//public:virtual void out (){cout << "b";}
//};
//int main(){
//    Sub sub;
//    Sup *sup;
//    sup = &sub;
//    sup->out();
//    sub.out();
//    return 0;
//}
//int main(){
//    int i = 0;
//    for(; i < 5; i++);
//    cout << i;
//    return 0;
//}
//int calculate(int &val, int arg)
//{
//    val *= arg;
//    return arg;
//}
//int main(){
//    int i = 1;
//    int j = calculate(i,2);
//    cout << i <<j;
//    return 0;
//}
//int boo(int v){
//    v++;
//    return ++v;
//}
//int main(){
//    float x =3;
//    x = boo(x);
//    cout << x;
//    return 0;
//}

//class Class1{
//    char a;
//protected:
//    char b;
//public:
//    char c;
//    Class1(){a='a'; b='b';c='c';}
//};
//class Class2 : public Class1{
//    char d;
//public:
//    void set (){
//        c = 'e';
//        d = 'd';
//    }
//};
//int main(){
//    Class2 a;
//    a.set();
//    cout<<a.c<< a.d;
//    return 0;
//}
//bool compare(bool t, bool u)
//{
//    return t < u;
//}
//int main(){
//    cout << compare(true,false);
//    return 0;
//}
//int main(){
//    const char c = '!';
//    const char *p;
//    p = &c;
//    *p = '?';
//    cout<< *p;
//    return 0;
//}
//class Uno{
//protected: char y;
//public: char z;
//};
//class Due : private Uno
//{
//public:
//    void set (){
//        y = 'a'; z = 'z';
//    }
//    void out (){cout << ++y << --z;}
//};
//int main (){
//    Due b;
//    b.set();
//    b.out();
//    return 0;
//}
//class cmplx{
//    double re,im;
//public:
//    cmplx() : re(0),im(0) {}
//    cmplx(double x){re = im = x ;}
//    cmplx(double x,double y){cout <<"("<<re<<","<<im<<")";}
//    void out(){cout <<"("<<re<<","<<im<<")";}
//};
//int main(){
//    cmplx c(1,2), cc(c);
//    cc.out();
//    return 0;
//}
//class N{
//public:
//    float x;
//    N(){x = 0.0; }
//    N (float a) {x = a;}
//    N(N &n){x = n.x;}
//};
//N &operator=(N & y,float f){return *new N(f);}
//int main(){
//    N a;
//    a = 2.0;
//    cout << a.x;
//    return 0;
//}
//enum T{A , B , C};
//class Int {
//public:
//    T v;
//    Int(T a){v = a;}
//
//};
//ostream &operator <<(ostream &o, Int &a){
//
//    return o <<a.v;
//}
//int main(){
//    Int i = B;
//    cout <<i;
//    return 0;
//}
//class Int{
//public:
//    int v;
//    Int(int a){v = a;}
//};
//ostream &operator <<(Int &a){
//    return cout<<a.v;
//}
//int main (){
//    Int i = 1;
//    cout << i;
//    return 0;
//}
//class Int{
//public:
//    int v;
//    Int(int a) { v = a; }
//    Int &operator[] (int x) {
//        v+=x;
//        return *this;
//    }
//};
//ostream &operator <<(ostream &o, Int &a){
//    return o <<a.v;
//}
//int main(){
//    Int i = 2;
//    cout << i.v << i[2];
//    return 0;
//}

//string operator> (float I,float r) { if(int(I) > int(r)) return "true";else return "false";}
//int main(){
//    float I = 2.0, r=2.9999;
//    cout <<(I > r);
//    return 0;
//}
//class Int{
//public:
//    int v;
//    Int(int a){ v = a;}
//    Int &operator++(int x){
//        v+=2;
//        return *this;
//    }
//
//};
//
//ostream &operator << (ostream &o,Int &a){
//    return o << a.v;
//}
//int main (){
//
//    Int i = 0;
//    cout<< i++<<i.v;
//
//
//    return  0;
//}

//class Int{
//public:
//    int v;
//    Int (int a) : v(a){}
//};
//void a(){
//    throw Int(1);
//}
//void b(){
//    try {
//        a();
//    }catch (Int &i){
//        throw Int(i.v + 1);
//    }
//}
//void c() {
//        try {
//            b();
//        }catch (...){
//            throw;
//        }
//}
//    int main(void){
//        try {
//            c();
//        }catch (Int &i){
//            cout << i.v;
//        }
//        return 0;
//    }
//int main(){
//    try{
//        throw 2./4;
//
//    }
//    catch(int i){
//        cout << i;
//    }
//    return 0;
//}


//class X:public logic_error {
//public:
//    X(): logic_error("0"){};
//    };
//void z() noexcept(false) {
//    throw new logic_error("0");
//}
//int main(void){
//    X x;
//    try {
//        z();
//    }catch (X &i){
//        cout << i.what();
//    }
//    return 0;
//}



//class X{
//public:
//    X(void){cout << 1;}
//    ~X(void){cout << 2;}
//};
//
//void exec(){
//{
//  X x;
// }
//    throw string("0");
//}
//
//int main(void){
//    try {
//   exec();
//    }catch (string &s){
//        cout <<s;
//    }
//    return 0;
//}

//int main(){
//    try {
//        throw 3.14;
//    }catch (double x){
//x *= 2;
//}
//        cout << x;
//
//    return 0;
//}


//class X:public runtime_error {
//public:
//    X(): domain_error("0"){};
//    };
//void z() throw(X) {
//    X x;
//    throw x;
//    cout << 1;
//}
//int main(void){
//    X x;
//    try {
//        z();
//    }catch (X &i){
//        cout << 1;
//    }
//catch(domain_error &i){
//cout << 0;
//}
//    return 0;
//}

//int main(){
//    throw 2/4;
//    catch(int i){
//        cout << i;
//    }
//    return 0;
//}


//class Int{
//public:
//    int v;
//    Int (int a) : v(a){}
//};
//void a(){
//    throw 0;
//}
//void b(){
//    try {
//        a();
//    }catch (int i){
//        throw Int(i + 1);
//    }
//}
//void c() {
//        try {
//            b();
//        }catch (...){
//            throw;
//        }
//}
//    int main(void) {
//        try {
//            c();
//        }catch (Int &i){
//            cout << i.v;
//        }
//        return 0;
//    }


//class X{
//public:
//    X(void){cout << 0;}
//    ~X(void){cout << 2;}
//};
//int main(void){
//
//    try {
//    X *x = new X();
//throw true;
//    delete x;
//    }catch (bool s){
//        cout <<s;
//    }
//    return 0;
//}


//class E{};
//void f(int i){
//    E e;
//    switch (i) {
//        case 0: throw e;
//        case 1: throw &e;
//
//    }
//    cout << 0;
//}
//int main(void){
//    try {
//      f(1);
//    }catch (void*){
//        cout << 2;
//    }catch (E*){
//        cout << 1;
//    }return 0;
//}


//class E {};
//class X{
//
//public:
//static int c;
//    X(int a) { c = a;}
//    ~X() { if(c++ > 2) throw new E;}
//};
//int X::c = 0;
//void f(int i){
//X* t[2];
//for(int j =0; j < i; j++)
//t[j] = new X(i + 1);
//for(int j =0; j < i; j++)
//delete t[j];
//}
//int main(void){
//    try {
//        f(2);
//    }catch (...){
//        cout << X::c;
//    }
//    return 0;
//}


//class X:public logic_error {
//public:
//    X(): logic_error("0"){};
//    };
//void z() throw(logic_error) {
//    X x;
//    throw x;
//    cout << 1;
//}
//int main(void){
//    X x;
//    try {
//        z();
//    }catch (logic_error &i){
//        cout <<i.what();
//    }
//    return 0;
//}



//int main(){
//    throw 2/4;
//    catch(int i){
//        cout << i;
//    }
//    return 0;
//}



//class E {};
//class X{
//    static int c;
//public:
//    X() { if(c++ > 2) throw new E;}
//    ~X() { if(c++ > 2) throw new E;}
//};
//int X::c = 0;
//void f(int i){
//    X a,b;
//    cout << i;
//}
//int main(void){
//    try {
//        f(0);
//        f(1);
//    }catch (...){
//        cout << 1;
//    }
//    return 0;
//}



//class X{
//public:
//    X(void){cout << 1;}
//    ~X(void){cout << 2;}
//
//
//};
//
//X *exec(){
//    X *x = new X();
//    throw string("0");
//    return x;
//}
//
//int main(void){
//    X *x;
//    try {
//       delete  exec();
//    }catch (string &s){
//        cout <<s;
//    }
//    return 0;
//}

//int main(){
//    try {
//        throw exception();
//    }
//    catch(exception &x){
//        cout << x.what();
//    }
//    return 0;
//}




//class Int{
//public:
//    int v;
//    Int (int a) : v(a){}
//};
//void a(){
//    throw Int(1);
//}
//void b(){
//    try {
//        a();
//    }catch (Int &i){
//        throw Int(i.v + 1);
//    }
//}
//void c() {
//        try {
//            b();
//        }catch (...){
//            throw;
//        }
//}
//    int main(void){
//        try {
//            c();
//        }catch (Int &i){
//            cout << i.v;
//        }
//        return 0;
//    }


//class X:public domain_error {
//public:
//    X(): domain_error("0"){};
//    };
//void z() throw(X) {
//    X x;
//    throw x;
//    cout << 1;
//}
//int main(void){
//    X x;
//    try {
//        z();
//    }catch (X &i){
//        cout <<1;
//    }
//    catch(domain_error &i){
//        cout << 0;
//    }
//    return 0;
//}



//class X{
//public:
//    X(void) throw(int) {cout << 1;}
//    ~X(void) throw(int) {cout << 2;}
//    void exec() {throw 0;}
//
//};
//void exec (X &x){
//    x.exec();
//}
//int main(void){
//    X x;
//    try {
//        exec(x);
//    }catch (int &i){
//        cout <<i;
//    }
//    return 0;
//}



//class E{};
//void f(int i){
//    E e;
//    switch (i) {
//        case 0: throw e;
//        case 1: throw &e;
//
//    }
//    cout << 0;
//}
//int main(void){
//    try {
//      f(2);
//    }catch (E*){
//        cout << 1;
//    }catch (E){
//        cout << 2;
//    }return 0;
//}



//int main(){
//    try {
//        throw 2/4;
//    }
//    catch (int i){
//        cout << i;
//    }
//    return 0;
//}


//class X{
//public:
//    X(void) throw(int){cout << 1;}
//    ~X(void) throw(int){cout << 2;}
//    void exec() {throw string("0");}
//
//};
//void exec (X x){
//    x.exec();
//}
//int main(void){
//    X x;
//    try {
//        exec(x);
//    }catch (int &i){
//        cout <<i;
//    }
//    return 0;
//}
