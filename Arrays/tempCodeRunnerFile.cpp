int i=0,j,sum,k=0,res;
    while(i<n)
    {
        j=i;
        sum=0;
        while(j<n)
        {
            sum+=arr[j];
            j++;
            
            if(sum==0)
            {
                k++;
                break;
            }
        }
        i++;
    }
    if(k==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    