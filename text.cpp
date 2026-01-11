#include <iostream>
#include <vector>
#include <algorithm> // 含 swap 函数

using namespace std;

// 冒泡排序函数
void MPsort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> data; // 创建一个叫data的int型‘空仓库’（vector容器）
    int input;

    cout << "请输入要排序的整数（输入 0 则结束输入）:" << endl;

    // 当输入成功且输入的值不为 0 时，继续循环
    while (cin >> input && input != 0) {
        data.push_back(input); // 把键盘输入的数“推”进容器末尾
    }

    // 判断容器内是否有数据
    if (data.empty()) {
        cout << "容器是空的，没啥好排的。" << endl;
        return 0;
    }

    cout << "\n你一共输入了 " << data.size() << " 个数。" << endl;
    cout << "排序前: ";
    for (int x : data) cout << x << " ";
    cout << endl;

    // 执行排序
    MPsort(data);

    cout << "排序后: ";
    for (int x : data) cout << x << " ";
    cout << endl;

    return 0;
}