#include <iostream>
#include <string>
using namespace std;

class CharArray {
public:
    CharArray(const string & str) {
        m_arr = new char[str.size() + 1];
        for (size_t i = 0; i < str.size(); ++i) {
            m_arr[i] = str[i];
        }
        m_arr[str.size()] = '\0';
    }

    CharArray(CharArray && o) : m_arr(o.m_arr) {
        o.m_arr = nullptr;
    }

    ~CharArray() {
        delete[] m_arr;
    }

    CharArray & operator=(CharArray && o) {
        if (this != &o) {
            delete[] m_arr;
            m_arr = o.m_arr;
            o.m_arr = nullptr;
        }
        return *this;
    }

    void print() const {
        cout << "chararray: ";
        cout << (m_arr ? 'O' : 'X') << " ";
        if (m_arr) {
            cout << m_arr;
        }
        cout << endl;
    }

private:
    CharArray(const CharArray & o) = delete;
    CharArray & operator=(const CharArray & o) = delete;
    char * m_arr;
};
