#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
class ScoreManager
{
private:
    string className;
    int score[100];
    int n;
public:
    ScoreManager(string oclassName,int oscore[],int on)
    {
        className=oclassName;
        
        n=on;
        for(int i=0;i<n;i++)
        {
            score[i]=oscore[i];
        }
    }
    float getAvg()
    {
        if(n==0) return 0.0;
        double sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=score[i];
        }
        return sum/n;
    }
    int getMax()
    {
        if(n==0) return 0;
        int max=score[0];
        for(int i=1;i<n;i++)
        {
            if(max<score[i])
            {
                max=score[i];
            }
        }
        return max;
    }
    void showInfo()
    {
        cout<<className<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<score[i]<<(i==n-1?"":" ");
        }
        cout<<endl;
        cout << fixed << setprecision(1) << "Mean score: " << getAvg() << "." << endl;
        cout << "Highest score: " << getMax() << "." << endl;
    }

    ~ScoreManager() {
        cout << className << " is deleted." << endl;
    }
};
int main()
{
    string oclassname;
    int on;
    int oscore[100];

    cin>>oclassname;
    cin>>on;
    for(int i=0;i<on;i++)
    {
        cin>>oscore[i];
    }

    ScoreManager sm(oclassname,oscore,on);
    sm.showInfo();
    return 0;
}