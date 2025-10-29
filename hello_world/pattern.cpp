#include<iostream>
using namespace std;
void pattern1(int n)
{
 for (int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
}
void pattern2(int n)
{
 for (int i=0;i<n;i++)
 {
    for(int j=0;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
}
void pattern3(int n)
{
 for (int i=0;i<n;i++)
 {
    for(int j=0;j<=i;j++)
    {
        cout<<j+1;
    }
    cout<<endl;
 }
}
void pattern4(int n)
{
 for (int i=0;i<n;i++)
 {
    for(int j=0;j<=i;j++)
    {
        cout<<i+1;
    }
    cout<<endl;
 }
}
void pattern5(int n)
{
 for (int i=0;i<n;i++)
 {
    for(int j=n;j>i;j--)
    {
        cout<<"*";
    }
    cout<<endl;
 }
}
void pattern6(int n)
{
 for (int i=0;i<n;i++)
 {
    for(int j=1;j<n-(i-1);j++)
    {
        cout<<j;
    }
    cout<<endl;
 }
}
void pattern7(int n)
{
 for (int i=1;i<=n;i++)
 {
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++)
    {
        cout<<"*";
    }
    for(int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    cout<<endl;
 }
}
void pattern8(int n)
{
 for (int i=1;i<=n;i++)
 {
    for(int j=1;j<=i-1;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=2*n-(2*(i-1)+1);j++)
    {
        cout<<"*";
    }
    for(int j=1;j<=i-i;j++)
    {
        cout<<" ";
    }
    cout<<endl;
 }
}
void pattern13(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k <<" ";
            k++;
        }
        
        cout<<endl;
    }
}
void pattern14(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        char k='A';
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
            
        }
        
        
        cout<<endl;
    }
}
void pattern15(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        char k='A';
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<k<<" ";
            k++;
            
        }
        
        
        cout<<endl;
    }
}
void pattern16(int n)
{
     char k='A';
    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
           
            
        }
         k++;
        
        
        cout<<endl;
    }
}
void pattern17(int n)
{
     
    for(int i=1;i<=n;i++)
    {
       char k='A';
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
                   
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<k;
            if(j>=i)
            k--;
            else
            k++;
                   
        }

        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
                   
        }

         //k++;
        
        
        cout<<endl;
    }
}
void pattern18(int n)
{
    int temp=n;
    for(int i=1;i<=n;i++)
    {
        
        char k='A'+(temp-1);
       
        for(int j=1;j<=i;j++)
        {
            
            cout<<k<<" ";
            k++;
           
           
            
        }
         temp--;
        
        
        cout<<endl;
    }
}
void pattern11(int n)
{
    
    for(int i=1;i<=n;i++)
    {
       
        for(int j=i;j>=1;j--)
        {
            //if(j%i==0)
            cout<<j%2<<" ";
            
           
            
        }
              
        
        cout<<endl;
    }
}
void pattern12(int n)
{
    
    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
           cout<<j;         
            
        }
        for(int j=1;j<=(n-i)*2;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
           cout<<j;         
            
        }
              
        
        cout<<endl;
    }
}
void pattern10(int n)
{
    
    for(int i=1;i<=2*n-1;i++)
    {
       
      /* for(int j=1;j<=i;j++)
       {
        
        if(i<=n)
        cout<<"*";
        else if(j<=2*n-i)
        cout<<"*";
        */
       //other easy way of writing
       int stars=i;
       if(i>n) stars=2*n-i;
       for(int j=1;j<=stars;j++)
       {
        cout<<"*";
       }

          
        
        cout<<endl;
    }
}
void pattern19(int n)
{
    
    for(int i=1;i<=2*n;i++)
    {
        int stars,spaces;
        if(i<=n)
        {
         stars=n-i+1;
         spaces=2*n-2*(n-i+1);
        }
        else
        {
            stars=i-n;
           spaces=2*i-4*(i-n);
        }
        for(int j=1;j<=stars;j++)
        {
           cout<<"*";         
            
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
           cout<<"*";         
            
        }
              
        
        cout<<endl;
    }
}
void pattern20(int n)
{
    
    for(int i=1;i<=2*n-1;i++)
    {
        int stars,spaces;
        if(i<=n)
        {
         stars=i;
         spaces=2*(n-i);
        }
        else
        {
            stars=2*n-i;
           spaces=2*(i-n);
        }
        for(int j=1;j<=stars;j++)
        {
           cout<<"*";         
            
        }
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
           cout<<"*";         
            
        }
              
        
        cout<<endl;
    }
}
void pattern21(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || j==1 ||i==n ||j==n)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    pattern21(n);
    return 0;
}