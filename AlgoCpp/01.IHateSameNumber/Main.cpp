/*
���� ����
�迭 arr�� �־����ϴ�. �迭 arr�� �� ���Ҵ� ���� 0���� 9������ �̷���� �ֽ��ϴ�. �̶�, �迭 arr���� ���������� ��Ÿ���� ���ڴ� �ϳ��� ����� ���� �����Ϸ��� �մϴ�. ��, ���ŵ� �� ���� ������ ��ȯ�� ���� �迭 arr�� ���ҵ��� ������ �����ؾ� �մϴ�. ���� ���,

arr = [1, 1, 3, 3, 0, 1, 1] �̸� [1, 3, 0, 1] �� return �մϴ�.
arr = [4, 4, 4, 3, 3] �̸� [4, 3] �� return �մϴ�.
�迭 arr���� ���������� ��Ÿ���� ���ڴ� �����ϰ� ���� ������ return �ϴ� solution �Լ��� �ϼ��� �ּ���.

���ѻ���
�迭 arr�� ũ�� : 1,000,000 ������ �ڿ���
�迭 arr�� ������ ũ�� : 0���� ũ�ų� ���� 9���� �۰ų� ���� ����

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

vector<int> SolutionTwo(vector<int> arr) // Answer 2 ( �˰��� ��� )
{
    vector<int> answer;

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    answer = arr;

    return answer;
}
