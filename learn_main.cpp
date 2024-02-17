// My first comment in full hello world project in c plus plus
#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

using namespace std;

void hello_world_function()
{
    cout << "Hello world";
}

double multiply()
{
    double x, y;
    double z;
    cout << "Input your x and y variables\n";
    cin >> x >> y;
    z = x * y;
    cout << x << " * " << y << " = " << z << endl;
    return z;
}

void print_logic()
{
    cout << (false == 0) << endl;

    cout << ((0 && true) == false) << endl;
    cout << !0 << endl;
}

void infinyty_cycle()
{
    while (1)
    {
        this_thread::sleep_for(chrono::milliseconds(1000));
        std::cout << "\a\n";
    }
}

void branch(int num_1, int num_2)
{
    if (num_1 < num_2)
    {
        cout << "yes yes ye yes ye yes\n";
    }
    else
    {
        cout << "no no no no no no\n";
    };
}

bool parity_check()
{
    int num_1;
    cout << "input your num for parity check\n";
    cin >> num_1;
    if ((num_1 % 2) == 0)
    {
        cout << "YES " << num_1 << " is even\n";
        return 1;
    }
    else
    {
        cout << "no " << num_1 << " isnt even\n";
        return 0;
    };
}

void max()
{
    int a1, a2, a3;
    cout << "input three numbers" << endl;
    cin >> a1 >> a2 >> a3;

    if (a1 >= a2 && a1 >= a3)
        cout << a1 << " is maximum" << endl;

    if (a2 >= a1 && a2 >= a3)
        cout << a2 << " is maximum" << endl;

    if (a3 >= a2 && a3 >= a1)
        cout << a3 << " is maximum" << endl;
}

double discriminant(float a, float b, float c)
{
    float D = pow(b,2) - 4 * a * c;
    return D;
}

int polinom2_roots(float D)
{   
    cout << "D = " << D << endl;
    if (D < 0) {
   	cout << "complex roots" <<endl;
	return 0;
    }
    if (D == 0){
    
   	cout << "twins real roots" <<endl; 
	return 0;
    }
    cout << "real roots" << endl;
    return 0;
}

void dot_generator(int count)
{
    for (int i = 0; i <=127; ++i) cout << i << " "   << char(i) << endl;
}

int main()
{  
    float a, b , c;
    cout << "input your coefficients:" << endl;
    cin >> a >> b >> c;
    polinom2_roots(
		    discriminant(a, b, c)
    );
    return 0;
}
