#include <iostream>
using namespace std;

int highestSales(int sales[4][5]) {
    int highest = sales[0][0];
    for (int i=0; i<5; i++) {
        if (sales[0][i] > highest) {
            highest = sales[0][i];
        }
    }
    return highest;
}

int lowestSales(int sales[4][5]) {
    int lowest = sales[0][2];
    for (int i=0; i<4; i++) {
        if (sales[i][2] <lowest) {
            lowest = sales[i][2];
        }
        return lowest;
    }
}

double averageSales(int sales[4][5]) {
    int total=0;
    for (int i=0; i<5; i++) {
        total += sales[2][i];
    }
    return (double)total/5;
}

void replaceSales(int sales[4][5]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            if (sales[i][j] < 15) {
                sales[i][j] = 15;
            }
        }
    }
}

int main() {
    int sales[4][5]= {
        {18, 22, 15, 25, 20},
        {25, 19, 28, 23, 26},
        {32, 29, 35, 31, 38},
        {12, 16, 10, 14, 18}
    };

    cout<< "HIGHEST NUMBER OF TOYOTA COROLLA VEHICLES SOLD: "<< highestSales(sales)<<endl;
    cout<< "LOWEST NUMBER OF VEHICLES SOLD IN MARCH: "<< lowestSales(sales)<<endl;
    cout<< "AVERAGE NUMBER OF FORD RANGER VEHICLES SOLD: " << averageSales(sales) << endl;

    replaceSales(sales);
    cout<< "\nUPDATED SALES: \n";
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++) {
            cout<< sales[i][j]<<"\t";
        }
        cout<< endl;
    }
}


