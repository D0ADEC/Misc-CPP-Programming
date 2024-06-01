#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    double x, y, initial_x, initial_y, addition_x, addition_y;
    int count = 0, user_count;

    cout << "Please enter a number for x: ";
    cin >> x;
    initial_x = x;

    cout << "Please enter a number for y: ";
    cin >> y;
    initial_y = y;

    cout << "Please enter a value for which you wish to increase x by each time: ";
    cin >> addition_x;

    cout << "Please enter a value for which you wish to increase y by each time: ";
    cin >> addition_y;

    cout << "Please enter how many times you want this calculation to happen: ";
    cin >> user_count;

    auto start = chrono::high_resolution_clock::now();

    while (count <= user_count) {
        x += addition_x;
        y += addition_y;
        cout << (x * y) << endl;
        count++;
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;

    cout << "Time taken: " << elapsed.count() << " seconds" << endl;
    cout << "\nEntered values: " << "\nx: " << initial_x << "\ny: " << initial_y
        << "\nx increase: " << addition_x << "\ny increase: " << addition_y
        << "\nNumber of calculations: " << user_count << endl;

    this_thread::sleep_for(chrono::seconds(5)); // Pause the program for 5 seconds

    return 0;
}
