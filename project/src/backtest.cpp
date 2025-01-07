#include <iostream>
#include <vector>

using namespace std;

struct Trade {
    double price;
    int signal; // where 1 = short, 0 = close and -1 = long
};

// Define the backtesting function
double backtest(const vector<Trade> &trades, double initial_cash) {
    double cash = initial_cash;
    int position = 0;

    for (const Trade &trade : trades) {

        if (trade.signal == 1) {
            position += 1;
            cash -= trade.price;
        }

        else if (trade.signal == -1) {
            position -= 1;
            cash += trade.price;
        }

        else if (trade.signal == 0) {
            cash += position * trade.price;
            position = 0;
        }
    }

    return cash;
}