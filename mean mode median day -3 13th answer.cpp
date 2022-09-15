#include <iostream>
#include <array>
using namespace std;

bool modeCounter(int low, int high){
    if(low == high){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int dataSize;
    cin >> dataSize;
    int dataSet[dataSize];
    
    for(int x = 0; x < dataSize; x++){
        cin >> dataSet[x];
    }
    //sorting the data set
    int tmp;
    for(int p = dataSize-1; p > 0; p--){
        for(int x = dataSize-1; x > 0; x--){
            while(dataSet[x]<dataSet[x-1]){
                tmp = dataSet[x];
                dataSet[x] = dataSet[x-1];
                dataSet[x-1] = tmp;
            }
        }
    }
    //mean
    double mean = 0;
    for(int element : dataSet){
        mean += element;
    }
    mean = mean/(double)dataSize;
    cout << mean << endl;
    //median
    double median;
    if(dataSize %2 == 0){
        median = (double)(dataSet[dataSize/2]+dataSet[(dataSize/2)-1])/2;
    }else{
        median = dataSet[dataSize/2];
    }
    cout << median << endl;
    //mode
    double mode = dataSet[0];
    int current = 0;
    int mostOccured = 0;
    //since we are in order, we can just check the closest index, and look for a match, and increase a current.
    for(int x = 0; x<dataSize; x++){
        if(dataSet[x]==dataSet[x+1]){
            current++;
        }else{
            if(current>mostOccured){
                mostOccured = current;
                mode = dataSet[x];
            }
            current = 0;
        }
    }
    cout << mode;
    
}
