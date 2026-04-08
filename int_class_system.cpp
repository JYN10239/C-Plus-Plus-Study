#include<iostream>
#include<string>
using namespace std;

class IntSet{
    private:
    int *arr;
    int size;

    public:
    IntSet()
    {
        size=0;
        arr=new int[100];
    }

    void addElem(int x)
    {
        int repeat=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==x)
            {
                repeat=1;
                break;
            }
        }
        if(repeat==0)
        {
            cout<<"Addition successful."<<endl;
            
            arr[size]=x;
            size++;
        }
        else
        {
            cout<<"It already exists."<<endl;
        }
    }

    void findElem(int x)
    {
        int is_exist=0;
        for(int i=0;i<size;i++)
        {
            if(*(arr+i)==x)
            {
                is_exist=1;
                cout<<"Finding successful:index "<<i<<'.'<<endl;
                break;
            }
        }
        if(is_exist==0)
        {
            cout<<"Finding unsuccessful."<<endl;
        }
    }

    void showSet()
    {
        if(size!=0)
        {
            for(int i=0;i<size;i++)
        {
            cout<<*(arr+i)<<" ";
        }
        cout<<endl;
        }
        else
        {
            cout<<"It is null."<<endl;
        }
    }

    ~IntSet()
    {
        delete[] arr;
        cout<<"The array is deleted"<<endl;
    }
};
int main()
{
    int n;
    cin>>n;

    IntSet set;
    string order;
    for(int i=0;i<n;i++)
    {
        cin>>order;
        
        if(order=="add")
        {
            int x;
        cin>>x;
            set.addElem(x);
        }
        if(order=="find")
        {
            int x;
        cin>>x;
            set.findElem(x);
        }
        if(order=="print")
        {
            set.showSet();
        }
    }
    return 0;
}