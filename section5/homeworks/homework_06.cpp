#include <iostream>
using namespace std;

int main()
{
    bool T = true, F = false;
    cout << (T && T && F && T) << " " << false << endl;
    cout << (T && T && F && T || T && T) << " " << true << endl;
    cout << (T && T && T && T || T && (T || F)) << " " << true << endl;
    cout << (T && T && T || T && (F || (T && (T && T)))) << " " << true << endl;
    cout << (T && T || T && F && T || T && T && F || (T && (T || F))) << " " << true << endl;
    cout << (T && T || T && F && T || (T && T && F || (T && (T || F)))) << " " << true << endl;
    cout << ((T && T || T && F && T || T) && T && F || (T && (T || F))) << " " << true << endl;
    cout << (T && T || T && (F && T || T && T) && F || (T && (T || F))) << " " << true << endl;
}
