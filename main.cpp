#include <iostream> // cout
#include "tMatrix.h"
#include "DenseMatrix.h"

using namespace std; // cout

int main(int argc, char *argv[]){

    DenseMatrix M1,M2,
    M3{{2,3,1},
       {2,3,4}};
    cout << "M3: "  << endl << M3 << endl;






    /* OLD DRIVER CODE FOR DEPRECATED tMatrix Class */
    /*
    tMatrix
        oDM1,      // Call Default Constructor at Compile Time
        oDM2(2,3), // Call Overloaded Constructor (size_t,size_t)
        oDM3{{1,2,3},{4,5,6}},
        oDM4{{1,1},{1,1},{1,1}},
        oDM5(oDM3*oDM4);
    cout << "oDM1: " << endl << oDM1 << endl
         << "oDM2: " << endl << oDM2 << endl
          << "oDM3: " << endl << oDM3 << endl
         << "oDM4: " << endl << oDM4 << endl
         << "oDM5: " << endl << oDM5 << endl
         << "oDM5[2][2]: " << endl << oDM5[1][1] << endl;

    */


    return 0;
}
