/*
문제 설명
배열 arr가 주어집니다. 배열 arr의 각 원소는 숫자 0부터 9까지로 이루어져 있습니다. 이때, 배열 arr에서 연속적으로 나타나는 숫자는 하나만 남기고 전부 제거하려고 합니다. 단, 제거된 후 남은 수들을 반환할 때는 배열 arr의 원소들의 순서를 유지해야 합니다. 예를 들면,

arr = [1, 1, 3, 3, 0, 1, 1] 이면 [1, 3, 0, 1] 을 return 합니다.
arr = [4, 4, 4, 3, 3] 이면 [4, 3] 을 return 합니다.
배열 arr에서 연속적으로 나타나는 숫자는 제거하고 남은 수들을 return 하는 solution 함수를 완성해 주세요.

제한사항
배열 arr의 크기 : 1,000,000 이하의 자연수
배열 arr의 원소의 크기 : 0보다 크거나 같고 9보다 작거나 같은 정수

*/

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> SolutionOne(vector<int> arr);
vector<int> SolutionTwo(vector<int> arr);

int main()
{
    vector<int> vec { 1,1,3,3,0,1,1 };

    SolutionOne(vec);

    return (0);
}

vector<int> SolutionOne(vector<int> arr) // Answer 1
{
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        if (answer.size() == 0)
        {
            answer.push_back(arr[i]);
            continue;
        }

        if (answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}

vector<int> SolutionTwo(vector<int> arr) // Answer 2 ( 알고리즘 사용 )
{
    vector<int> answer;

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    answer = arr;

    return answer;
}
