#include <iostream>
#include <cmath>
using namespace std;

float newton(int, int, float);

int main()
{
    int n,
    k;

    float a,
          result;

    cout << "Input n(int), a(float)" << endl;
    cin >> n >> a;
    result = (newton(n, 3, a) - newton(n, 6, (a*a+1)))/(1+newton(n, 7, (3+a)));
    cout << result << endl;
    
    system("pause");
    return 0;
}

float newton(int n, int k, float a)
{
    float y,
          prev_y;
          
    prev_y = a;
    for(int i=0; i<=n; i++)
    {
        y = ((a/pow(prev_y, (k-1))) + (k-1)*prev_y)/k;
        prev_y = y;
    }
    return y;
}
