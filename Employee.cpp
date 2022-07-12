#include <unistd.h>
#include <sys/wait.h>
#include <Employee.h>
#include <cstring>
#include <fstream>

//#define BUF_SIZE 2000
#include <string>

int min ()
{
    int N;
    fstream f;
    cout<<"\nEnter how many Employee:";
    Cin>>N;
    Employee *E=new Employee[N];
    int pid;
    //char buf[BUF_SIZE];
    pid = fork();
    if(pid == 0)
    {

            cout<<"Child Starts"<<endl;
            f.open("Emp.txt",ios::out);
             if(!f)
           {
            cout<<"Unable to open  the file"<<endl;
            exit(0);
            }
           for(int i=0;i<N;1++){
           E[i].getEmpDetails();
           F.write(reinterpret_cast<char *>($E[i]), sizeof(Employee));
           }
           f.close();
           cout<<"Child terminates"<<end1;
     }
     else
     }