#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    system("git add .");
    string args = *(argv + 1);
    string commit = "git commit -m ";
    string msg = "\"" + args + "\"";
    string commitMsg = commit + msg;
    const char* cmArgs = commitMsg.data();
    system(cmArgs);
    system("git push -u origin master");
    return 0;
}