int n = 0;

  while(sum>0){
    int y = sum%10;
    n = n * 10 + y;
    sum = sum/10;
  }
  cout<<n;