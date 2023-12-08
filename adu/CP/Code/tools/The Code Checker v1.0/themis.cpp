#include <bits/stdc++.h>
using namespace std;
ofstream kq("Ketqua.log");
string lowercase(string st)
{
    string stemp="";
    for (int i=0; i<st.length(); i++)
        if(st[i]<97)stemp+=st[i]+32;else stemp+=st[i];
    return stemp;
}
void checktest(string ostype,string hs,string bai,string lang,int sotest,int timeout)
{
    //
    // OS Support
    //
    string copyos,renameos,compiler;
    if(ostype=="win") {
        copyos="copy";
        renameos="ren";
        if (lang=="cpp") compiler="Compilers/MinGW/bin/g++.exe";
    }else if(ostype=="linux"){
        copyos="cp";
        renameos="mv";
        if (lang=="cpp") compiler="g++";
    }
    //
    // Start
    //
    kq << "**Checking " << bai << " for " << hs << endl;
    string st1,st2,testdir;
    bool tf=true;
    int dung=0;
    //
    // Programming language support
    //
    string compile="g++ BaiDuThi/"+hs+"/"+bai+"."+lang+" -o a",run="timeout "+to_string(timeout)+"s ./a > err.txt";
    //
    // Compiling
    //
    system(compile.c_str());
    ifstream err("err.txt");
    string tmp,error="";
    while (!err.eof()){
        err >> tmp;
        error+=tmp;
    }
    if(error == "")
        kq << "+)Compiled successfully!" << endl;
    else{
        kq << endl << error << endl;
        return 0;
    }
    //
    // Run code to check
    //
    for (int i=1; i<=sotest; i++)
    {
        //
        // Check test
        //
        kq << "  #" << i << " Checking test" << endl;\
        //
        // Convert test1 -> test 01
        //
        if (i<10) testdir="test0"+to_string(i); else testdir="test"+to_string(i);
        //
        // Copy to current dir
        //
        string copy=copyos+" ./Test/"+bai+"/"+testdir+"/"+bai+".INP"+" .",
               ren=renameos+" "+bai+".INP "+lowercase(bai)+".inp";
        string copy1="cp ./Test/"+bai+"/"+testdir+"/"+bai+".inp"+" .";
        system(copy.c_str()); //Copy input to hs_dir
        system(copy1.c_str());
        system(ren.c_str()); //lowercase
        system(run.c_str()); //Run excutable
        //
        // Get output (hs's)
        //
        ifstream fi(lowercase(bai)+".out");
        string temp=""; fi >> temp;
        if (temp=="") {kq << "  >>>> Test "<< i << " reached timeout! (" << timeout << "s)" << endl;}
        else{
            ifstream f(lowercase(bai)+".out"); //Get hs output
            ifstream f1("Test/"+bai+"/"+testdir+"/"+bai+".OUT"); //Get correct output from test
            while(!f.eof()&&!f1.eof()){
                f >> st1; f1 >> st2;//Get output from hs and Test
                if(st1!=st2){tf=false;break;}
            }
            if(tf){kq << "  >>>> Test "<< i << " correct!" << endl; dung++;}
                else kq << " >>>> Test " << i << " incorrect!" << endl;
            f.close();
            f1.close();
        }
    }
    kq << "So test dung: " << dung << "/" << sotest << endl;
}
int main(int args, const char* argv[])
{
    //ifstream ds("ds.cfg");
    int sohs;
    string user[102],tenbai[102],lang[102],os,cnt=0;
    int sobai,sotest[102],time[102];
    ds >> os >> sohs >> sobai;
    cnt=4;
    for (int i=1; i<=sohs; i++)
        ds >> user[i] >> lang[i];
    for (int i=1; i<=sobai; i++)
        ds >> tenbai[i] >> sotest[i] >> time[i];
    for (int i=1; i<=sohs; i++)
        for (int j=1; j<=sobai; j++)
            checktest(os,user[i],tenbai[j],lang[i],sotest[j],time[i]);
    string rm = "rm -f *.inp";
    system(rm.c_str());
    string rm = "rm -f *.out";
    system(rm.c_str());
    return 0;
}