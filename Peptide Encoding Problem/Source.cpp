#include <iostream>
#include <string>
#include <map>

using namespace std;


inline string translate(string pattern, map<string,char>& table, int len)
{
	auto it = pattern.begin();
	string buf;

	string letters;
	int i = 0;
	while (true)
	{
		
		if (i % 3 == 0 && i != 0)
		{
			letters.push_back(table.find(buf)->second);
			buf = "";
		}
		if (i == 3*len)
		{
			break;
		}
		buf.push_back(*it);
		i++;
		it++;
		
	}
	return letters;
}


int main()
{
	map<string, char> table;
	//===========================
	table.emplace("AAA", 'K');
	table.emplace("AAC", 'N');
	table.emplace("AAG", 'K');
	table.emplace("AAT", 'N');
	table.emplace("ACA", 'T');
	table.emplace("ACC", 'T');
	table.emplace("ACG", 'T');
	table.emplace("ACT", 'T');
	table.emplace("AGA", 'R');
	table.emplace("AGC", 'S');
	table.emplace("AGG", 'R');
	table.emplace("AGT", 'S');
	table.emplace("ATA", 'I');
	table.emplace("ATC", 'I');
	table.emplace("ATG", 'M');
	table.emplace("ATT", 'I');
	//============================
	table.emplace("CAA", 'Q');
	table.emplace("CAC", 'H');
	table.emplace("CAG", 'Q');
	table.emplace("CAT", 'H');
	table.emplace("CCA", 'P');
	table.emplace("CCC", 'P');
	table.emplace("CCG", 'P');
	table.emplace("CCT", 'P');
	table.emplace("CGA", 'R');
	table.emplace("CGC", 'R');
	table.emplace("CGG", 'R');
	table.emplace("CGT", 'R');
	table.emplace("CTA", 'L');
	table.emplace("CTC", 'L');
	table.emplace("CTG", 'L');
	table.emplace("CTT", 'L');
	//============================
	table.emplace("GAA", 'E');
	table.emplace("GAC", 'D');
	table.emplace("GAG", 'E');
	table.emplace("GAT", 'D');
	table.emplace("GCA", 'A');
	table.emplace("GCC", 'A');
	table.emplace("GCG", 'A');
	table.emplace("GCT", 'A');
	table.emplace("GGA", 'G');
	table.emplace("GGC", 'G');
	table.emplace("GGG", 'G');
	table.emplace("GGT", 'G');
	table.emplace("GTA", 'V');
	table.emplace("GTC", 'V');
	table.emplace("GTG", 'V');
	table.emplace("GTT", 'V');
	//============================
	table.emplace("TAA", '\0');
	table.emplace("TAC", 'Y');
	table.emplace("TAG", '\0');
	table.emplace("TAT", 'Y');
	table.emplace("TCA", 'S');
	table.emplace("TCC", 'S');
	table.emplace("TCG", 'S');
	table.emplace("TCT", 'S');
	table.emplace("TGA", '\0');
	table.emplace("TGC", 'C');
	table.emplace("TGG", 'W');
	table.emplace("TGT", 'C');
	table.emplace("TTA", 'L');
	table.emplace("TTC", 'F');
	table.emplace("TTG", 'L');
	table.emplace("TTT", 'F');

	string DNA,peptide;
	string buf;
	cin >> DNA;
	cin >> peptide;

	


	
	int n = peptide.length();

	auto it = DNA.begin();

	string buffff;


	for (int i = 0; it!=DNA.end(); i++,it++)
	{
		for (int j = i; j <i+ 6; j++)
		{
			buffff.push_back(DNA[j]);
		}
		cout << buffff<<endl;
		buffff = "";
		/*if (i%(n*3)==0 && it!=DNA.begin())
		{
			cout << buf<<endl;
			if (translate(buf, table,n) == peptide)
			{
				cout << buf << " ";
			}
			buf = "";
		}
		buf.push_back(*it);*/
	}

}