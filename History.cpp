#include "History.h"
#include <iostream>

using namespace std;

void History::addRecord(const string &record) {
    records.push_back(record);
}

void History::showHistory() {
    cout<<"Historial de operaciones;"<<'\n';
    for(auto& record:records) {
        cout<<record<<'\n';
    }
}