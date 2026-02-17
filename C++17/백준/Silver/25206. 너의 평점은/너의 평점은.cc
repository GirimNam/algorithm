#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    double sum = 0;
    double sum2 = 0;

    //제목, 학점, 등급
    vector <string> v(3);
    for (int i = 0; i < 20; i++)
    {
        cin >> v[0] >> v[1] >> v[2];
        if (v[2] == "P") continue;

        double grade = 0;
        map<string, double> gradeMap = {
            {"A+", 4.5},
            {"A0", 4.0},
            {"B+", 3.5},
            {"B0", 3.0},
            {"C+", 2.5},
            {"C0", 2.0},
            {"D+", 1.5},
            {"D0", 1.0},
            {"F", 0.0}
        };

        grade = gradeMap[v[2]];

        double result = stod(v[1]) * grade;
        sum += result;
        sum2 += stod(v[1]);
        
    }

    cout << sum/sum2;
    
    return 0;
}