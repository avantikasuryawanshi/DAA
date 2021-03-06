#include<iostream>
#include<string>
using namespace std;

void sort(int arr1[], int arr2[], int n) {
	int temp1, temp2;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if ( arr1[j] > arr1[j+1]) 
            {
                temp1 = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp1;

                temp2 = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp2;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of players: " << endl;
    cin >> n;
    int s[n];
    int index[n];

    cout << "Enter the scores: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i];
        index[i] = i+1;
    }

    sort(s, index, n);

    cout << "Winner: Player" << index[n-1] << endl;
    cout << "Next winner: Player" << index[n-2] << endl ;
    cout << "Worst player: Player" << index[0] << endl;
    cout << "Next worst player: Player" << index[1] << endl;

    return 0;
}
