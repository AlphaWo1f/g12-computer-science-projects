#include <iostream>
using namespace std;

int main() {
  int M, N, K;

  cin >> M;
  cin >> N;
  cin >> K;

  char grid[N][M];
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      grid[i][j] = 'B';
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }
  cout << endl;

  char change;
  int num;
  for (int i = 0; i < K; i++) {
    cin >> change >> num;
    num = num-1;
    
    if (change == 'R') {
      for (int i = 0; i < N; i++) {
        if(grid[num][i] == 'G'){
          grid[num][i] = 'B';
        }else{
          grid[num][i] = 'G';
        }
        cout << "Num: " << num << endl;
        cout << "i: " << i << endl;
    for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }
    cout << endl;
      }

    } else if (change == 'C') {
      for (int j = 0; j < M; j++) {
        if(grid[j][num] == 'G'){
          grid[j][num] = 'B';
        }else{
          grid[j][num] = 'G';
        }
      }
    }

      for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }
    cout << endl;

    
  }
  int counter = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (grid[i][j] == 'G') {
        counter++;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << grid[i][j];
    }
    cout << endl;
  }

  cout << "Gold: " << counter;
}

