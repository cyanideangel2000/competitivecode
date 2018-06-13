#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// structure for course
typedef struct _course {
    unsigned long iq1, iq2, num;
    short numenroll;
}course;

bool func(course st1, course st2)
{
    if ((st1.numenroll * (st1.iq1 + st1.iq2)) < (st2.numenroll * (st2.iq1 + st2.iq2)))
        return true;
    else return false;
}

int main(void)
{
    unsigned long c, p, n, z, temp, cur = 0, x;
    string rawInput;
    vector<course> input;
    vector<course>::iterator itr;
    vector <unsigned long> monk;
    course st, st1;

    // get number of courses
    getline(cin, rawInput, ' ');
    c = atol(rawInput.c_str());

    // get number of students to enroll 
    getline(cin, rawInput, ' ');
    p = atol(rawInput.c_str());

    // get number of students already enrolled
    cin >> n;
    cin.ignore();

    // read the current course status
    // each course will be enroleld by 1 student at this point of time
    input.reserve(c);
    temp = n;
    x = 1;
    while (temp > 1)
    {
        getline(cin, rawInput, ' ');
        z = atol(rawInput.c_str());
        st.iq1 = z;
        st.iq2 = 0;
        st.numenroll = 1;
        st.num = x;

        input.push_back(st);
        temp--;
        x++;
    }
    cin >> temp;
    st.iq1 = temp;
    st.iq2 = 0;
    st.numenroll = 1;
    st.num = x;
    input.push_back(st);

    // lets read the available students
    monk.reserve(p);
    temp = p;
    while (temp > 1)
    {
        getline(cin, rawInput, ' ');
        z = atol(rawInput.c_str());
        monk.push_back(z);
        temp--;
    }
    cin >> temp;
    monk.push_back(temp);

    cur = 0;

    // we have read everything
    // now we need to start processing the courses for pending students

    if (n < c) {
        // Case 1: Number of Student enrolled is less than number of Course
        // Assign 1 free course to pending student
        temp = n;
        while (c > temp)
        {
            st.iq1 = monk[cur];
            st.iq2 = 0;
            st.numenroll = 1;
            st.num = (++x);
            input.push_back(st);

            //cout << "Case1: MonkIQ: " << monk[cur] << " Takes course: " << st.num << endl;
            monk[cur] = x;
            cur++;
            temp++;
        }
    }
    // Case 2: Now each course has 1 student enrolled
    // Need to calculate the Z = X * C for each course and find the minimum amoung all course

    // Lets sort the courses
    stable_sort(input.begin(), input.end(), func);

    // now we have sorted the courses
    while (cur < p)
    {
        st1 = input[0];
        st1.iq2 = monk[cur]; // Need to fix this. Its the latest 2 statement IQ recoreded
        st1.numenroll++;
        //cout << "Case2: MonkIQ: " << monk[cur] << " Takes course: " << st1.num << endl;
        //cout << "Course Detail: " << st1.iq1 << " " << st1.iq2 << " " << st1.numenroll << " " << st1.num << endl;
        monk[cur] = st1.num;

        cur++;

        // after updating is head still the lowest
        temp = st1.numenroll * (st1.iq1 + st1.iq2);
        st = input[1];

        // only if the current course becomes unfit for next allocation
        if (temp > (st.numenroll * (st.iq1 + st.iq2))) {
            for (itr = input.begin() + 1; itr != input.end(); ++itr)
            {
                st = *itr; 
                //cout << "CourseNewZ: " << temp << " CourseNum: " << st.num << " Z: " << (st.numenroll * (st.iq1 + st.iq2)) << endl;
                if (temp > (st.numenroll * (st.iq1 + st.iq2))) continue;
                else break;
            }
            input.insert(itr, st1);
            input.erase(input.begin());
        }
    }

    // Display the final course allocation:w
    for(vector<unsigned long>::iterator itr1 = monk.begin(); itr1 != monk.end(); ++itr1)
    {
        cout << *itr1 << " ";
    }
}
