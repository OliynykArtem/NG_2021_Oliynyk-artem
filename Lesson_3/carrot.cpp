#include <iostream>

using namespace std;

int main()
{
	char inj_arr[1000] = "qboodsxqc, cmbszd usnnso. noncom sc qvkn dy uxyg, drkd iye zkccon psbcd zkbd yp yeb docd kxn cwkbd oxyeqr, dy rovz ec. go rkmuon sxcsno iyeb dbksxsxq zbyqbkw, dy psxn xog kqoxdc.sp iye gkxd nsq noozob sx dro bkllsd ryvo... govmywo dy dro nkbu xod : 3sp iye gkxd wybo sxdobocdsxq cdepp - tecd zecr iyeb nombizdsyx myno dy iyeb qsd bozy sxcsno \"vomdsyx_3\" pyvnob kxn xkwo sd \"mkbbyd.mzz\".yxmo iye nyxo drkd - drobo'c xy gki lkmu.bowowlob : xylyni cryevn uxyg klyed iyeb myno yb yeb \"vsddvo\" mrkd.cdki dexon : 3";
	char symbol = 0;

	for (int i = 0; inj_arr[i] != 0; i++)
	{
		if (inj_arr[i] >= 'a' && inj_arr[i] <= 'z')
		{
			inj_arr[i] >= 'j' ? symbol = inj_arr[i] - 10 : symbol = inj_arr[i] + 16;
		}
		else
		{
			symbol = inj_arr[i];
		}

		cout << symbol;
	}
	cout << endl;
}
