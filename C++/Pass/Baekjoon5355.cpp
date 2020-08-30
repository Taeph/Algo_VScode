/*
 *  2019-10-25 (금)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int index;
    cin >> index;
    cin.ignore(); // cin buffer clear

    char input[index][100];

    for(int i=0; i<index; i++) {
        cin.getline(input[i], 100); // input line by line
    }

    // calculate
    for(int i=0; i<index; i++) {
        float result = 0.0f;
        char *token = strtok(input[i] , " ");  // split string to char by " "
        while(token != NULL) {
            switch(*token) {
                case '@' :
                    result *= 3;
                    break;
                case '%' :
                    result += 5;
                    break;
                case '#' :
                    result -= 7;
                    break;
                default : 
                    result = atof(token); // atoi (char * -> int) ,  atof (char *  ->  double)
                    break;
            }
            token = strtok(NULL , " ");
        }
        cout << fixed; // 소수점 고정 
        cout.precision(2); // 고정할 자리수
        cout << result << endl;
    }
}