// Programmed by Rich Bui and Kinsey Vo

#include <iostream>
#include <string>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int main() {
    string array_A;
    vector<string> array_B;
    string final_array[10];
    int pos[10];

    // Input
    cout << "Enter the array A: ";
    getline(cin, array_A);

    // Size of n will determine the size of the output
    int num_of_cities;
    cout << "Enter how many cities: ";
    cin >> num_of_cities;

    string cities;
    cout << "Enter the cities: ";
    for (int i = 0; i < num_of_cities; i++) {
        cin >> cities;
        array_B.push_back(cities);
    }

    int p = 0;
    int idx;
    int pos2[10];
    int pos4[10];
    for (int i = 0; i < num_of_cities; i++) {
        while ((idx = array_A.find(array_B[i], p)) != string::npos) {
            p = idx + 1;
        }
        // Get the first, second and fourth index of each city
        pos4[i] = p + 2;
        pos2[i] = p;
        pos[i] = p - 1;
        p = 0;
    }

    // Sort 4th character of each city in ascending order
    for (int i = 0; i < num_of_cities; i++) {
        for (int j = i + 1; j < num_of_cities; j++) {
            if (pos4[i] > pos4[j]) {
                int temp = pos4[i];
                pos4[i] = pos4[j];
                pos4[j] = temp;
            }
        }
    }

    // Sort 2nd character of each city in ascending order
    for (int i = 0; i < num_of_cities; i++) {
        for (int j = i + 1; j < num_of_cities; j++) {
            if (pos2[i] > pos2[j]) {
                int temp = pos2[i];
                pos2[i] = pos2[j];
                pos2[j] = temp;
            }
        }
    }

    // Sort 1st character of each city in ascending order
    for (int i = 0; i < num_of_cities; i++) {
        for (int j = i + 1; j < num_of_cities; j++) {
            if (pos[i] > pos[j]) {
                int temp = pos[i];
                pos[i] = pos[j];
                pos[j] = temp;
            }
        }
    }

    // If matches are found, put the result into output_array
    char ch, ch2, ch4;
    for (int i = 0; i < num_of_cities; i++) {
        ch = array_A[pos[i]];
        ch2 = array_A[pos2[i]];
        ch4 = array_A[pos4[i]];
        for (int j = 0; j < num_of_cities; j++) {
            if (array_B[j][0] == ch && array_B[j][2] == ch2 && array_B[j][3] == ch4) {
                final_array[i] = array_B[j];
            }
        }
    }

    // Print the index order of cities
    cout << "\nOutput_order = [";
    for (int i = 0; i < num_of_cities; i++) {
        if (i < num_of_cities - 1) {
            cout << pos[i] << ", ";
        }
        else {
            cout << pos[i];
        }
    }
    cout << "]" << endl;

    // Print all the cities
    cout << "final_array = [";
    for (int i = 0; i < num_of_cities; i++) {
        if (i < num_of_cities - 1) {
            cout << final_array[i] << ", ";
        }
        else {
            cout << final_array[i];
        }
    }
    cout << "]" << endl;

    return 0;
}