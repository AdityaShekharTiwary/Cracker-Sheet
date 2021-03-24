bool rotation(string s1,string s2){
	if(s1.size()!=s2.size()) return false;
	string temp=s1+s2;
	return (temp.find(s2)!=string::npos);
}