int main() 
{
	int t,i;
	string s;
	cin >> t;
	 
	while(t--)
	{
	    cin >> s;
	    int b=0;
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]%2==0)
	        b=b+i+1;
	    }
	    cout << b << endl;
	}
	return 0;
}
