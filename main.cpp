#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> accounts;
    vector<string> passwords;

    while (true) {
        cout << "註冊(R) 或 登入(L) 或 修改帳密(C)";
        char option;
        cin >> option;
    
        if (option == 'R') {
            cout << "請輸入帳號：";
            string input_account;
            cin >> input_account;
            accounts.push_back(input_account);
        
            cout << "請輸入密碼：";
            string input_password;
            cin >> input_password;
            passwords.push_back(input_password);
        } else if (option == 'L'){
            cout << "請輸入帳號：";
            string login_account;
            cin >> login_account;
        
            cout << "請輸入密碼：";
            string login_password;
            cin >> login_password;

            bool found = false;
            for (int i = 0; i < accounts.size(); i++) {
                if (login_account == accounts[i] && login_password == passwords[i]) {
                    cout << "歡迎第" << i+1 << "個使用者";
                    found = true;
                    break;
                }
            }
        }
        else if (option == 'C'){cout << "請輸入帳號：";
            string login_account;
            cin >> login_account;
        
            cout << "請輸入密碼：";
            string login_password;
            cin >> login_password;

            bool found = false;
            for (int i = 0; i < accounts.size(); i++) {
                if (login_account == accounts[i] && login_password == passwords[i]) {
                    cout << "歡迎第" << i+1 << "個使用者";
                    found = true;
                    cout << "請輸入新密碼";
                    string new_login_password;
                    cin >> new_login_password;
                    passwords[i]=new_login_password;
                    break;

            
            
            
                    }
                 }
               }else {break;}  
            }
         }
    
