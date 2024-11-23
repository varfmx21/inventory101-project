#ifndef HISRORY_H
#define HISTORY_H
#include <string>
#include <list>

using namespace std;

class History {
    private:
        // Linked List
        list<string> records;
    public:
        void addRecord(const string &record);
        void showHistory();
};

#endif //HISTORY_H