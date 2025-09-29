#include <bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int id;
    int grades[3];
    float avg;
};

//[Function Prototyping]
int a;
void input(student &st);
void output(const student &st);

int main()
{
    int n;
    cout << "Enter the number of student info you want to take: ";
    cin >> n;
    student arr[n];
    for (int i = 0; i < n; i++)
    {
        input(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        output(arr[i]);
    }

    return 0;
}

void input(student &st)
{
    cout << "Name: ";
    cin >> st.name;
    cout << "ID: ";
    cin >> st.id;
    float sum = 0;
    cout << "Grades: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> st.grades[i];
        sum += st.grades[i];
    }
    st.avg = sum / 3.0;
}

void output(const student &st)
{
    cout << "Name: " << st.name << "\n";
    cout << "ID: " << st.id << "\n";
    cout << "Grades: ";
    for (int i = 0; i < 3; i++)
    {
        cout << st.grades[i] << (i < 2 ? " " : "");
    }
    cout << "\nAverage: " << fixed << setprecision(2) << st.avg << "\n";
}