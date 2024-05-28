#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<double> miVector = {1.1, 2.2, 3.3, 4.4, 5.5};

    for(int i = 0; i < miVector.size(); i++) {
        cout << miVector[i] << " ";
    }

    return 0;
}
