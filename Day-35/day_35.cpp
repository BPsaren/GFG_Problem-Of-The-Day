long long res[n+1];
        res[0]=1;
        res[1]=1;
        
        for(int i=2;i<=n;i++){
            res[i]=res[i-2]+1;
        }
        return res[n];