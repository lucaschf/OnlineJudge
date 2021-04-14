//
// Created by lucas on 01/16/2021.
//


#include <iostream>

using namespace std;

#include <map>
#include <array>
#include <decimal/decimal>
#include <iomanip>

enum currency_type {
    coin, banknote
};

decimal::decimal64 performWithdrawal(
        std::decimal::decimal64 value,
        std::map<decimal::decimal64, long long int> &result,
        currency_type currencyType
) {
    const int values_per_currency = 6;

    std::array<decimal::decimal64, values_per_currency> banknotes = {
            100,
            50,
            20,
            10,
            5,
            2
    };
    std::array<decimal::decimal64, values_per_currency> coins = {
            1,
            decimal::decimal64(0.50),
            decimal::decimal64(0.25),
            decimal::decimal64(0.10),
            decimal::decimal64(0.05),
            decimal::decimal64(0.01)
    };
    std::array<decimal::decimal64, values_per_currency> availableCurrencyValues =
            currencyType == coin ? coins : banknotes;

    for (auto currencyValue : availableCurrencyValues) {
        long long int quantity = 0;

        if (value >= currencyValue) {
            quantity = decimal::decimal64_to_long_long(value / currencyValue);
            value = value - currencyValue * (decimal::decimal64) quantity;
        }

        result.insert({currencyValue, quantity});
    }

    return value;
}

void showResult(currency_type currencyType, const map<decimal::decimal64, long long int> &withDrawn) {
    cout << (currencyType == coin ? "MOEDAS:" : "NOTAS:") << endl;
    cout << fixed << setprecision(2);

    for (auto it = withDrawn.rbegin(); it != withDrawn.rend(); it++) {
        cout << it->second << (currencyType == coin ? " moeda(s)" : " nota(s)") << " de R$ "
             << decimal::decimal64_to_double(it->first) << endl;
    }
}

void performWithdrawal(decimal::decimal64 value) {
    map<decimal::decimal64, long long int> banknotesWithDrawn;
    map<decimal::decimal64, long long int> coinsWithDrawn;

    value = performWithdrawal(value, banknotesWithDrawn, banknote);
    performWithdrawal(value, coinsWithDrawn, coin);

    showResult(banknote, banknotesWithDrawn);
    showResult(coin, coinsWithDrawn);
}

int main() {
    double value;
    cin >> value;
    performWithdrawal(decimal::decimal64(value));

    return 0;
}