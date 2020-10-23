# Selection Sort (선택 정렬)

## 🌻 동작 과정

1. 배열 중 최솟값의 위치를 찾는다 
2. 맨 처음 위치와 최솟값의 위치를 바꾼다

![image](https://user-images.githubusercontent.com/50068946/97002555-19044800-1575-11eb-9859-0cc11c91eaad.png)


## 🌻 C++ Code

```
    for (int i = 0; i < v.size() - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[minidx] > v[j])
                minidx = j;
        }
        swap(v[i], v[minidx]);
    }
```

[전체 코드](https://github.com/mimseong/Algorithm_DataStructure/blob/main/selection_sort.cpp)

## 🌻 시간 복잡도

배열의 크기가 n일 때, 

- 첫 번째 반복문에서 반복 횟수 : n-1번
- 두 번째 반복문에서 반복 횟수 : n-2번
...

총 n(n-1)/2번 반복한다.

최선, 최악, 평균 시간복잡도 모두 O(n^2)이 걸린다.

## 🌻 공간 복잡도

주어진 배열 안에서 정렬하므로 O(N)이다.

## 🌻 장점

- Bubble sort와 마찬가지로 알고리즘이 단순하다

- Bubble sort에 비해 실제 교환하는 횟수가 적다

- 배열 안에서 교환하기 때문에 추가적인 메모리가 필요하지 않다

## 🌻 단점

- 시간 복잡도가 O(N^2)이다
- Unstable sort

## 🌻 Stable 한가?

![image](https://user-images.githubusercontent.com/50068946/97003262-2837c580-1576-11eb-9bc7-f84e44190dfa.png)

2가 두 번 있다고 가정했을 때 2의 위치가 처음과 다르게 바뀔 수 있다.

-> Unstable하다
