# Insertion Sort (삽입 정렬)

## 🌻 동작 과정

손 안의 카드를 정리하는 것과 비슷한 정렬 방법

![image](https://user-images.githubusercontent.com/50068946/97063329-0a9c4780-15da-11eb-997a-b5dcfee0e5c5.png)

자신의 이전 값들이 정렬 됐다고 가정하고 자신의 위치에 값을 넣는다.


## 🌻 C++ Code

```
    for (int i = 1; i < v.size(); i++)
    {
        int temp = v[i];
        int prev = i - 1;
        
        while ((prev >= 0) && (v[prev] > temp))
        {
            v[prev + 1] = v[prev];
            prev--;
        }
        v[prev + 1] = temp;
    }
```

![image](https://user-images.githubusercontent.com/50068946/97063499-0290d780-15db-11eb-8b5e-ca0d83f7ff5f.png)


[전체 코드](https://github.com/mimseong/Algorithm_DataStructure/blob/main/insertion_sort.cpp)

## 🌻 시간 복잡도

최악의 경우

배열의 크기가 n일 때, 

- 첫 번째 반복문에서 반복 횟수 : n-1번
- 두 번째 반복문에서 반복 횟수 : n-2번
...

총 n(n-1)/2번 반복한다.

최선의 경우

배열이 모두 정렬되어 있다면 한 번씩만 비교하므로 O(N)의 시간복잡도를 가진다. 

이미 정렬되어 있는 배열에 대해서는 오버헤드가 매우 적기 때문에 가장 최고의 알고리즘이다.

최악, 평균의 경우 O(N^2)이 걸리고 최선의 경우 O(N)의 시간복잡도를 갖는다.

## 🌻 공간 복잡도

주어진 배열 안에서 정렬하므로 O(N)이다.

## 🌻 장점

- Bubble sort와 마찬가지로 알고리즘이 단순하다

- 대부분의 원소가 정렬되어 있는 경우 매우 효율적이다.

- 배열 안에서 교환하기 때문에 추가적인 메모리가 필요하지 않다

## 🌻 단점

- 평균과 최악의 경우 시간 복잡도가 O(N^2)이다

## 🌻 Stable 한가?

Yes!

![image](https://user-images.githubusercontent.com/50068946/97063653-e2154d00-15db-11eb-8e54-02b87f06de7e.png)

2가 두 번 있다고 가정했을 때 2의 위치가 처음과 같다.

-> stable하다
