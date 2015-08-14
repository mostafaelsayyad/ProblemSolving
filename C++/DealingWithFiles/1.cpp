#include<iostream>
#include<fstream>
using namespace std;
int main(){
/*	ofstream outfile;
	outfile.open("myfile.txt");
*/

/*fstream file;
file.open("myfile.txt",ios::out);	
*/

/*fstream file;
file.open("myfile.txt",ios::in);	
*/


/*ofstream writer("data.txt");
writer<<"agaza"<<endl;
writer.flush();
writer.close();
*/ //run el code dah mareteen w eft7 el file fi kol mara 


/*ofstream writer("data.txt",ios::app);
writer<<"agaza"<<endl;
writer.flush();
writer.close();
*/

/*fstream myfile;
myfile.open("data.txt",ios::in|ios::out);
*/ //dah msh by3mel create lil file msh 3arf leh , msh mohm

/*fstream myfile("data.txt",ios::in);
int x=5;
myfile>>x;
//myfile.flush();
myfile.close();


fstream outfile("data.txt",ios::out);
outfile<<x;
outfile.close();*/ //7awl tezbt el code dah 3shan t3mel cin then te2fel then tfta7 hatla2y output mawgood

/*string line="";
ifstream reader("data.txt");
getline(reader,line);//y3ni hy2ra mn el reader w y7oto fil line
cout<<line<<endl;
*/


/*string line="";
ifstream reader("data.txt");
getline(reader,line);
//cout<<line<<endl;

ofstream out ("out.txt");
out<<line;*/

/*string line="";
ifstream reader("data.txt");
while(!reader.eof()){
getline(reader,line);
cout<<line<<endl;
}*/

/*ifstream reader("data.txt");
string word="";
reader>>word;//zy el mesal eli fat bzbt bas getline a7san(el msal eli fat )l2ny ba2ra satr kamel lkn dah le7ad el space aw enter , cont.
cout<<word;//7ata ekteb kda kelmeteen htla2eeh ye2ra awel kelma bas 
*/

/*ifstream reader("data.txt");
string word="";
while(!reader.eof()){
reader>>word;
cout<<word;
}
reader.close();*/


/*string name="";
int num;//w mmken yeb2a gwa el file abel el while
ifstream reader("data.txt");
while(!reader.eof()){
	reader>>name;
	reader>>num;
	num*=2;
	cout<<name<<" ";
	cout<<num<<endl;
}
reader.close();
*/

/*string name="";
int num;//w mmken yeb2a gwa el file abel el while
ifstream reader("data.txt");
while(!reader.eof()){
	reader.seekg(6,ios::cur);//m3naha 2n el cursor wa2f mn b3d el 6
	reader>>num;
	num*=2;
	cout<<name<<"";
	cout<<num<<endl;
}
reader.close();
*/

/*ofstream writer("a.txt",ios::binary);
writer.write("abc",3);
writer.flush();
writer.close();
*/ //dah el 3ady 

/*ofstream writer("a.txt",ios::binary);
int x=10;
//writer.write("abc",3);
writer.write((char*)&x,4);
ifstream reader("a.txt",ios::binary);
int a;
reader.read((char*)&a,4);
cout<<a;
writer.flush();
writer.close();

*/






	return 0;
}
