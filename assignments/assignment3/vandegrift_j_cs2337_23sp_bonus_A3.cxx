// Jacob Vandegrift
// 1120903

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cassert>

using namespace std;

double min(double A[], size_t n)
{
        double SMALLEST = A[0];
        for (size_t i = 0; i < n; ++i) {
            if (A[i] < SMALLEST)
                SMALLEST = A[i];
        }
        return SMALLEST;
}

double max(double A[], size_t n)
{
        double LARGEST = A[0];
        for (size_t i = 0; i < n; ++i) {
            if (A[i] > LARGEST)
                LARGEST = A[i];
        }
        return LARGEST;
}

double med(double A[], size_t n)
{
        if (n%2 == 1){
            return A[(int)(n/2)];
        } else
            return ((A[((int)(n / 2) - 1)] + A[((int)(n / 2))]) / 2);
}

double avg(double A[], size_t n)
{
        double TOTAL = 0;
        for (size_t i = 0; i < n; ++i)
            TOTAL += A[i];
        return (TOTAL / n);
}

double stdev(double A[], size_t n)
{
        double NUMERATOR = 0;
        for (size_t i = 0; i < n; ++i) {
            NUMERATOR += pow((A[i] - avg(A, n)),2);
        }
        return sqrt(NUMERATOR / n);
}

// BONUS: 10 points
// This function goes through the n elements in array A and for each of
// the following intervals, counts the number of elements that fall within
// each respective interval.
//
//  [0,10),[10,20),[20,30),[30,40),[40,50),[50,60),[60,70),[70,80),[80,90),[90,100]
//
// Here, [ means inclusive and ) means exclusive. For example, [50, 60) denotes
// all numbers greater than or equal to 50 and less than 60. As an example,
// suppose the numbers in the sequence are (in no particular order):
//      2, 91.1, 30, 32, 5.3, 40, 41, 88.8, 63, 45.1, 45, 3, 99, 30
//
// Then, once the counts are collected for the above example, the program
// will print out the following to the terminal:
//   [0,10)   {.21} ***
//   [10,20)
//   [20,30)
//   [30,40)  {.21} ***
//   [40,50)  {.29} ****
//   [50,60)
//   [60,70)  {.07} *
//   [70,80)
//   [80,90)  {.07} *
//   [90,100] {.14} **
//
// The numbers in the curly brackets denote a percentage, which is the count
// for the range divided by total number of elements. For example, the interval
// [30,40) has 3 items (30,30,32) that fall in this interval
// (i.e., 3 asterisks are printed) and the percentage is 3/14 = .21 
// (print two significant digits after the decimal - you can do
// rounding, floor, ceiling, etc..., which can be found in <cmath>). 
// Notice that the dynamic aspects of the print out are the percentages
// and number of asterisks denoting counts.
//
void print_dist(double A[], size_t n)
{
        int SET[10] = {0};
        string GROUP[10] = {"[0,10)", "[10,20)", "[20,30)", "[30,40)", "[40,50)", 
                         "[50,60)", "[60,70)", "[70,80)", "[80,90)", "[90,100]"}; 

        for (size_t i = 0; i < n; ++i) {
                if ((A[i] >= 0)&&(A[i] < 10))
                        SET[0]++; 
                else if ((A[i] >= 10)&&(A[i] < 20))
                        SET[1]++;
                else if ((A[i] >= 20)&&(A[i] < 30))
                        SET[2]++;
                else if ((A[i] >= 30)&&(A[i] < 40))
                        SET[3]++;
                else if ((A[i] >= 40)&&(A[i] < 50))
                        SET[4]++;
                else if ((A[i] >= 50)&&(A[i] < 60))
                        SET[5]++;
                else if ((A[i] >= 60)&&(A[i] < 70))
                        SET[6]++;
                else if ((A[i] >= 70)&&(A[i] < 80))
                        SET[7]++;
                else if ((A[i] >= 80)&&(A[i] < 90))
                        SET[8]++;
                else if ((A[i] >= 90)&&(A[i] <= 100))
                        SET[9]++;
        }
        
        for (int ELEMENT = 0; ELEMENT < 10; ++ELEMENT) {
                if (SET[ELEMENT] != 0) {
                        cout << GROUP[ELEMENT] << fixed << setprecision(2) << "  {" << ((double)SET[ELEMENT]/(double)n) << "} ";
                        for (int x = 0; x < SET[ELEMENT]; ++x)
                                cout << "*";
                        cout << endl;
                } else
                        cout << GROUP[ELEMENT] << endl;
        }
        cout << resetiosflags(ios::fixed);
        cout << setprecision(6);
}


// Do not modify code after this line
//--------------------------------------------------------------
void read_data(double data[], std::string file_name)
{
    std::string line;
    double val;
    size_t i = 0;
    std::ifstream file_to_read(file_name);
    while(std::getline(file_to_read, line))
    {
        std::stringstream ss(line);
        while(ss >> val)
        {
            data[i] = val;
            ++i;
            if(ss.peek() == ',')
                ss.ignore();
        }
    }
    file_to_read.close();
}

void print_stats(double A[], size_t n)
{
    cout << "Min    = " << min(A,n) << endl;
    cout << "Max    = " << max(A,n) << endl;
    sort(A,A+n);
    cout << "Median = " << med(A,n) << endl;
    cout << "Averge = " << avg(A,n) << endl;
    cout << "Stdev  = " << stdev(A,n) << endl;
}

int main()
{
    size_t n1 = 30;
    double D1[n1];
    read_data(D1,"data1.csv");
    cout << "data1" << endl;
    print_stats(D1,n1);
    print_dist(D1,n1);

    size_t n2 = 101;
    double D2[n2];
    read_data(D2,"data2.csv");
    cout << endl << "data2" << endl;
    print_stats(D2,n2);
    print_dist(D2,n2);

    size_t n3 = 300;
    double D3[n3];
    read_data(D3,"data3.csv");
    cout << endl << "data3" << endl;
    print_stats(D3,n3);
    print_dist(D3,n3);

    return 0;
}

