#include <iostream>
using namespace std;

class score{
    private:
        int val;
    public:
        score()
        {
            val=0;
        }
        void operator++()
        {
            val = val+1;
        }
        int show()
        {
            return val;
        }
};

int main()
{
    score s1 ,s2;
    cout << "Initial value of s1 object = " << s1.show() << endl;
    cout << "Initial value of s2 object = " << s2.show() << endl;
    ++s1;
    s1.operator++();
    ++s2;
    cout << "Updated value of s1 object = " << s1.show() << endl;
    cout << "Updated value of s2 object = " << s2.show() << endl;
    return 0;
}
