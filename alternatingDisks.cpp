//Programmed by Rich Bui and Kinsey Vo

#include <iostream>
using namespace std;

//L = Light Color Disks
//D = Dark Color Disks

void print_disks(int num_of_disks, char* disks)
{
    for (int i = 0; i < 2 * num_of_disks; i++)
    {
        if (disks[i] == '0')
        {
            cout << "L ";
        }
        else if (disks[i] == '1')
        {
            cout << "D ";
        }
    }
    cout << endl;
}

int main()
{
    int num_of_disks;
    char* disks;

    cout << "Enter the total number of light and dark color disks: ";
    cin >> num_of_disks;

    //Allocate space
    disks = new char[2 * num_of_disks];

    //Insert disks into array
    for (int i = 0; i < num_of_disks; i++)
    {
        disks[2 * i] = '0';
        disks[2 * i + 1] = '1';
    }

    cout << "Disks: ";
    print_disks(num_of_disks, disks);

    //Swap dark disks to the left and light disks to the right
    int num_of_swaps = 0;

    for (int i = 0; i < num_of_disks; i++)
    {
        //Loops left to right
        for (int j = 0; j < 2 * num_of_disks; j++) {
            if (disks[j] < disks[j + 1]) {
                int temp = disks[j];
                disks[j] = disks[j + 1];
                disks[j + 1] = temp;
                num_of_swaps++;
            }
        }
        //Loops right to left
        for (int k = 2 * num_of_disks; k > 0; k--) {
            if (disks[k] > disks[k - 1]) {
                int temp = disks[k];
                disks[k] = disks[k - 1];
                disks[k - 1] = temp;
                num_of_swaps++;
            }
        }
    }

    cout << "Swapped Disks: ";
    print_disks(num_of_disks, disks);
    cout << "Total swaps: " << num_of_swaps << endl;

    //Deallocate memory
    delete[] disks;

    return 0;
}