/**
 * merge sort로 풀고 시간초과
 */
#include <iostream>

using namespace std;

void merge(int indexArr[], int ageArr[], string nameArr[], int start, int mid, int end) {
    int i = start;
    int j = mid+1;
    int k = 0;

    int newAgeArr[100001];
    int newIndexArr[100001];
    string newNameArr[100001];

    while ( i <= mid && j <= end ) {
        if ( ageArr[i] < ageArr[j] ) { //나이가 어리
            newAgeArr[k] = ageArr[i];
            newIndexArr[k] = indexArr[i];
            newNameArr[k] = nameArr[i];
            k++;
            i++;
        }
        else if ( ageArr[i] == ageArr[j] ) { //나이가 같으면 입력 위치로 비교한다.
            if ( indexArr[i] < indexArr[j] ) {
                newAgeArr[k] = ageArr[i];
                newIndexArr[k] = indexArr[i];
                newNameArr[k] = nameArr[i];
                k++;
                i++;
            } else {
                newAgeArr[k] = ageArr[j];
                newIndexArr[k] = indexArr[j];
                newNameArr[k] = nameArr[j];
                k++;
                j++;
            }
        }
        else {
            newAgeArr[k] = ageArr[j];
            newIndexArr[k] = indexArr[j];
            newNameArr[k] = nameArr[j];
            k++;
            j++;
        }
    }

    while ( i <= mid ) {
        newAgeArr[k] = ageArr[i];
        newIndexArr[k] = indexArr[i];
        newNameArr[k] = nameArr[i];
        k++;
        i++;
    }
    while ( j <= end ) {
        newAgeArr[k] = ageArr[j];
        newIndexArr[k] = indexArr[j];
        newNameArr[k] = nameArr[j];
        k++;
        j++;
    }
    k--;

    while ( k >= 0 ) {
        //시작값 + k인데... 이 값을 end로 쓰면 망하는거 ㅜㅜ 이거 디버깅만 몇번째.
        ageArr[start+k] = newAgeArr[k];
        indexArr[start+k] = newIndexArr[k];
        nameArr[start+k] = newNameArr[k];
        k--;
    }
}

void mergeSort(int indexArr[], int ageArr[], string nameArr[], int start, int end){
    if ( start < end ) {
        int mid = (start+end)/2;
        mergeSort(indexArr, ageArr, nameArr, start, mid);
        mergeSort(indexArr, ageArr, nameArr, mid+1, end);
        merge(indexArr, ageArr, nameArr, start, mid, end);
    }
}

int main(void) {

    int n;
    cin >> n;

    string nameArr[n];
    int ageArr[n];
    int indexArr[n];
    for ( int i=0; i<n; i++ ) {
        indexArr[i] = i;
        cin >> ageArr[i] >> nameArr[i];
    }

//    mergeSort(indexArr, ageArr, nameArr, 0, n-1);

    stable_sort

    for ( int i=0; i<n; i++ ) {
        cout << ageArr[i] << " " << nameArr[i] << "\n";
    }

    return 0;
}
