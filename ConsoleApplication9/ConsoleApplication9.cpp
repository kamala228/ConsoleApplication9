//#include <iostream>
//using namespace std;
//
//pair<int, int> findMinMax(int num1, int num2, int num3) {
//    int min = (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3));
//    int max = (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
//    return make_pair(min, max);
//}
//
//int main() {
//    system("chcp 1251>null");
//    int num1, num2, num3;
//    cout << "ведите 1 чисто: ";
//    cin >> num1;
//    cout << "ведите 2 чисто: ";
//    cin >> num2;
//    cout << "ведите 3 чисто: ";
//    cin >> num3;
//    pair<int, int> result = findMinMax(num1, num2, num3);
//    cout << "Min: " << result.first << ", Max: " << result.second << endl;
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//pair<pair<int, int>, int> countElements(const vector<int>& arr) {
//    int positive = 0, negative = 0, zero = 0;
//    for (int num : arr) {
//        if (num > 0) positive++;
//        else if (num < 0) negative++;
//        else zero++;
//    }
//    return { {positive, negative}, zero };
//}
//
//int main() {
//    int size;
//    cout << "Enter array size: ";
//    cin >> size;
//
//    vector<int> arr(size);
//    cout << "Enter array elements:" << endl;
//    for (int& num : arr) {
//        cin >> num;
//    }
//
//    auto result = countElements(arr);
//    cout << "Positive: " << result.first.first << ", Negative: " << result.first.second << ", Zero: " << result.second << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> sortArray(vector<int> arr, int order = 1) {
//    for (size_t i = 0; i < arr.size() - 1; ++i) {
//        for (size_t j = i + 1; j < arr.size(); ++j) {
//            if ((order == 1 && arr[i] < arr[j]) || (order == 0 && arr[i] > arr[j])) {
//                swap(arr[i], arr[j]);
//            }
//        }
//    }
//    return arr;
//}
//
//int main() {
//    vector<int> arr = { 5, -2, 8, 0, -3, 7, 1, 4, -1, 6 };
//    cout << "Original Array: ";
//    for (int num : arr) cout << num << " ";
//    cout << endl;
//
//    vector<int> ascending = sortArray(arr, 0);
//    cout << "Sorted Array (Ascending): ";
//    for (int num : ascending) cout << num << " ";
//    cout << endl;
//
//    vector<int> descending = sortArray(arr, 1);
//    cout << "Sorted Array (Descending): ";
//    for (int num : descending) cout << num << " ";
//    cout << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int rollDice() {
//    return (time(0) % 6 + 1); // Просте генерування чисел від 1 до 6
//}
//
//pair<int, int> playGame(bool userFirst) {
//    int userScore = 0, computerScore = 0;
//    for (int i = 0; i < 5; ++i) {
//        if (userFirst) {
//            int userRoll = rollDice();
//            cout << "User rolls: " << userRoll << endl;
//            userScore += userRoll;
//
//            int computerRoll = rollDice();
//            cout << "Computer rolls: " << computerRoll << endl;
//            computerScore += computerRoll;
//        }
//        else {
//            int computerRoll = rollDice();
//            cout << "Computer rolls: " << computerRoll << endl;
//            computerScore += computerRoll;
//
//            int userRoll = rollDice();
//            cout << "User rolls: " << userRoll << endl;
//            userScore += userRoll;
//        }
//    }
//
//    return { userScore, computerScore };
//}
//
//int main() {
//    bool userFirst;
//    cout << "Do you want to roll first? (1 for yes, 0 for no): ";
//    cin >> userFirst;
//
//    auto result = playGame(userFirst);
//
//    cout << "Final Scores:\n";
//    cout << "User: " << result.first << " (Average: " << result.first / 5.0 << ")\n";
//    cout << "Computer: " << result.second << " (Average: " << result.second / 5.0 << ")\n";
//
//    if (result.first > result.second) {
//        cout << "User wins!\n";
//    }
//    else if (result.first < result.second) {
//        cout << "Computer wins!\n";
//    }
//    else {
//        cout << "It's a tie!\n";
//    }
//
//    return 0;
//}
