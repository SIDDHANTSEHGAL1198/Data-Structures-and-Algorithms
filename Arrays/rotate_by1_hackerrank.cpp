#include <iostream>
using namespace std;
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */
vector<int> rotateby1(vector <int>arr,int d,int size)
{
    int i;
    int out[500],temp[500];
    int k=0;
    
    for(i=0;i<d;i++)
    {
        temp[k]=arr[i];
        k++;
    }
    int q=0;
    for(;i<size;i++)
    {
        out[q]=arr[i];
        q++;
    }
    int t=0;
    for(int p=0;p<1;p++)
    {
        out[q]=temp[t];
        q++;
        t++;
    }
    for(i=0;i<size;i++)
    {
        arr[i]=out[i];
    }
    
    for(i=0;i<size;i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<endl;
    return arr;
}

vector<int> rotateLeft(int d, vector<int> arr) {
    int i;
    int len=0;
    len=arr.size();
    for(i=0;i<d;i++)
    {
        arr=rotateby1(arr,1,len);
    }
    return arr;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = rotateLeft(d, arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
